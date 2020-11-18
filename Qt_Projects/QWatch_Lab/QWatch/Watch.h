#pragma once
#include <QTimer>
#include <QDateTime>

class Watch : public QObject
{
	
	
	Q_OBJECT

public:
	enum Mode
	{
		CLOCK,
		DATE,
		TIMER,
		EDIT
	};


private:
	Mode currentMode;
	QTimer* timer;
	QTimer* stopWatch;
	QDateTime* time;
	QDateTime* stopWatchTime;

	bool is24Format;
	bool isLight;

public:
	
	Watch();

	void setLight(bool);
	bool getLight();
	bool changeLightState();

	void set24Format(bool);
	bool get24Format();

	bool changeTimeFormat();

	Mode getCurrentMode();
	void setMode(Mode);

	const QDateTime* getTime();

public slots:
	void addSecondToTime();
	void addMSecondToTime();

signals:
	void updateDisplay();
	void switchLight();
	void switchTimeFormat();
	void switchShowDate();
};

