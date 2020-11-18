#include "QWatch.h"

Watch::Watch() : is24Format(true), isLight(false), currentMode(Mode::CLOCK)
{
	timer = new QTimer();
	stopWatch = new QTimer();
	time = new QDateTime(QDateTime::currentDateTime());
	stopWatchTime = new QDateTime(QDate(1, 1, 2000), QTime(1, 1, 1, 1));

	timer->start(1000);
	stopWatch->start(16);

	connect(timer, SIGNAL(timeout()), this, SLOT(addSecondToTime()));
	connect(stopWatch, SIGNAL(timeout()), this, SLOT(addMSecondToTime()));
}

void Watch::setLight(bool light) {
	isLight = light;
	emit switchLight();
}

bool Watch::getLight(){
	return isLight;
}

void Watch::set24Format(bool is24HFormat) {
	is24Format = is24HFormat;
	emit switchTimeFormat();
}

bool Watch::get24Format(){
	return is24Format;
}

bool Watch::changeLightState() {
	setLight(!isLight);
	return isLight;
}

bool Watch::changeTimeFormat() {
	set24Format(!is24Format);
	return is24Format;
}

void Watch::addSecondToTime() {
	time->swap(time->addSecs(1));
	if(currentMode == Mode::CLOCK)
		emit updateDisplay();
}

void Watch::addMSecondToTime() {
	stopWatchTime->swap(stopWatchTime->addSecs(1));
	if (currentMode == Mode::TIMER)
		emit updateDisplay();
}

const QDateTime* Watch::getTime() {
	if (currentMode == Mode::TIMER) {
		return stopWatchTime;
	}
	return time;
}

Watch::Mode Watch::getCurrentMode() {
	return currentMode;
}

void Watch::setMode(Mode mode) {
	currentMode = mode;
	switch (currentMode)
	{
	case DATE:
		emit switchShowDate();
		break;
	case TIMER:
		stopWatchTime = new QDateTime(QDateTime::fromTime_t(0));
		stopWatchTime->swap(stopWatchTime->addSecs(-7200));
		break;
	case EDIT:
		break;
	default:
		break;
	}
}