
import os
from blur.build import *

path = os.path.dirname(os.path.abspath(__file__))
rev_path = os.path.join(path,'../..')

svn = WCRevTarget("libassfreezersvnrev",path,rev_path,"include/svnrev-template.h","include/svnrev.h")

# Python module target
pc = SipTarget("pyfreezer",path)
pc.pre_deps = ["libfreezer","pyclasses:install"]

pcs = SipTarget("pyfreezerstatic",path,True)

QMakeTarget("libfreezer",path,"libfreezer.pro",["classes","classesui",svn])
#QMakeTarget("libassfreezerstatic",path,"libassfreezer.pro",["stonestatic","stoneguistatic","classesuistatic","libabsubmit"],[],True)

if sys.platform=="linux2":
	rpm = RPMTarget('libfreezerrpm','libassfreezer',path,'../../../rpm/spec/libassfreezer.spec.template','1.0',["classesrpm","libfreezer","freezer","pyfreezer"])
	rpm.pre_deps = ["libabsubmitrpm"]


if __name__ == "__main__":
	build()
