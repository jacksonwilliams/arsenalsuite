
#include "jobdeptable.h"
#include "job.h"

/**
 *   If a dependency is added, check to see if the job now has unmet dependencies,
 *   if so, then set the job status to "holding"
 */
void JobDepSchema::postInsert( RecordList jobDeps )
{
	JobList toCommit;
	foreach( JobDep jd, jobDeps ) {
		Job j = jd.job();
		if( (QStringList() << "ready" << "started").contains( j.status() ) ) {
			JobList deps = JobDep::recordsByJob( j ).deps();
			if( !deps.isEmpty() && deps.filter("status",QRegExp("(done|deleted)")).size() < deps.size() ) {
				toCommit += j;
			}
		}
	}
	Job::updateJobStatuses( toCommit, "holding" );
	TableSchema::postInsert( jobDeps );
}

/**
 *   If a dependency is removed, check to see if the job still has unmet dependencies,
 *   if not, then set the job status to "ready"
 */
void JobDepSchema::postRemove( RecordList jobDeps )
{
	JobList toCommit;
	foreach( JobDep jd, jobDeps ) {
		Job j = jd.job();
		if( j.status() == "holding" ) {
			JobList deps = JobDep::recordsByJob( j ).deps();
			if( deps.isEmpty() || deps.filter("status",QRegExp("(done|deleted)")).size() == deps.size() ) {
				j.setStatus( "ready" );
				toCommit += j;
			}
		}
	}
	toCommit.commit();
	TableSchema::postRemove( jobDeps );
}
