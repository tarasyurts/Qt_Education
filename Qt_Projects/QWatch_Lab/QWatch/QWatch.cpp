#include "QWatch.h"

QWatch::QWatch(QWidget* parent)
	: QMainWindow(parent) 
{

	watch = new Watch();

	ui.setupUi(this);

	connect(watch,			SIGNAL(updateDisplay()),	SLOT(updateDisplay()));

	connect(ui.butUpL,		SIGNAL(clicked()),			SLOT(changeBackgroundClicked()));
	connect(watch,			SIGNAL(switchLight()),		SLOT(changeBackground()));

	connect(ui.butUpR,		SIGNAL(clicked()),			SLOT(showDateClicked()));
	connect(watch,			SIGNAL(switchShowDate()),	SLOT(showDate()));


	connect(ui.butDownL,	SIGNAL(clicked()),			SLOT(changeModeClicked()));


	connect(ui.butDownR,	SIGNAL(clicked()),			SLOT(changeTimeFormatClicked()));
	connect(watch,			SIGNAL(switchTimeFormat()), SLOT(changeTimeFormat()));


	//connect(watch, SIGNAL(switchTimeFormat()), this, SLOT(updateDisplay()));

}

void QWatch::changeDesignator() {
	ui.labelAM->setEnabled(!ui.labelAM->isEnabled());
	ui.labelPM->setEnabled(!ui.labelPM->isEnabled());
}

//========================UPDATE CLOCK======================

void QWatch::updateDisplay() {
	QTime* time = &watch->getTime()->time();
	int hour = time->hour();

	ui.rightDigits->display(time->minute());
	ui.smallDigits->display(time->second());

	if (!watch->get24Format()) {
		if (hour >= 13)
			hour -= 12;
		if (hour == 1 && time->minute() == 0 && time->second() == 0)
			changeDesignator();
	}
	ui.leftDigits->display(hour);
}

//========================SWITCH LIGHT======================

void QWatch::changeBackgroundClicked() {
	watch->changeLightState();
}

void QWatch::changeBackground() {
	if (watch->getLight()) {
		ui.watchBackground->setPixmap(QPixmap("E:/Dell_7440/projects/Cute/QWatch/QWatch/res/greenBackground.jpg"));
	}
	else {
		ui.watchBackground->setPixmap(QPixmap("E:/Dell_7440/projects/Cute/QWatch/QWatch/res/greyBackground.jpg"));
	}
}

//========================SWITCH TIME FORMAT======================

void QWatch::changeTimeFormatClicked() {
	watch->changeTimeFormat();
}

void QWatch::changeTimeFormat() {
	if (!watch->get24Format()) {
		if (watch->getTime()->time().hour() >= 13) {
			ui.labelPM->setEnabled(true);
		}
		else {
			ui.labelAM->setEnabled(true);
		}
	}
	else {
		ui.labelAM->setEnabled(false);
		ui.labelPM->setEnabled(false);
	}
}

//========================SHOW DATE======================

void QWatch::showDateClicked() {
	if (watch->getCurrentMode() == Watch::Mode::CLOCK)
		watch->setMode(Watch::Mode::DATE);
	else
		watch->setMode(Watch::Mode::CLOCK);
}

void QWatch::showDate() {
	QDate* date = &watch->getTime()->date();
	int year = date->year();
	ui.leftDigits->display(date->day());
	ui.rightDigits->display(date->month());
	ui.smallDigits->display(year % 1000);
}







void QWatch::changeMode() {

}

void QWatch::changeModeClicked() {
	switch (watch->getCurrentMode())
	{
	case Watch::Mode::CLOCK:
		watch->setMode(Watch::Mode::TIMER);
		break;

	case Watch::Mode::TIMER:
		watch->setMode(Watch::Mode::EDIT);
		break;

	case Watch::Mode::EDIT:
		watch->setMode(Watch::Mode::CLOCK);
		break;

	default:
		break;
	}
}

