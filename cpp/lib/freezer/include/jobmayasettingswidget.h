
/*
 *
 * Copyright 2003 Blur Studio Inc.
 *
 * This file is part of Arsenal.
 *
 * Arsenal is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Arsenal is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Blur; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* $Author$
 * $LastChangedDate: 2010-02-16 17:20:26 +1100 (Tue, 16 Feb 2010) $
 * $Rev: 9358 $
 * $HeadURL: svn://svn.blur.com/blur/branches/concurrent_burn/cpp/lib/assfreezer/include/jobmayasettingswidget.h $
 */

#ifndef JOBMAYASETTINGS_WIDGET_H
#define JOBMAYASETTINGS_WIDGET_H

#include "job.h"

#include "jobsettingswidget.h"
#include "ui_jobmayasettingswidgetui.h"

class Stone::RecordProxy;
using namespace Stone;

class FREEZER_EXPORT JobMayaSettingsWidget : public CustomJobSettingsWidget, public Ui::JobMayaSettingsWidgetUI
{
Q_OBJECT
public:
	JobMayaSettingsWidget(QWidget * parent=0, JobSettingsWidget::Mode mode = JobSettingsWidget::ModifyJobs );
	~JobMayaSettingsWidget();
	
	QStringList supportedJobTypes();
	static QStringList jobTypes();

public slots:
	void resetSettings();
	void applySettings();

	void changeFrameNthSettings();

protected:
	RecordProxy * mProxy;
	bool mFrameNthChanges;
	int mFrameNthStart, mFrameNthEnd, mFrameNth, mFrameNthMode;
};

#endif // JOBMAYASETTINGS_WIDGET_H


