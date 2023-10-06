#pragma once

// Beschreibung der Klasse
// 
// Öffentliche Schnittstelle eine Klasse: Sind alle public-Elemente

class Time
{
private:
	// data // state // member
	int m_hour;
	int m_minute;
	int m_second;

public:
	// Konstruktor / constructor
	Time();
	Time(int h, int m, int s);
	Time(int h, int m);

	// setter / getter (methods)
	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);

	int getHour();
	int getMinute();
	int getSecond();

	// methods
	void print();
	void increment();   // zählt eine Sekunde dazu
	int toSeconds();    // wandelt eine Uhrzeit in Sekunden um
};

// ==================================================

// global operator
void operator << (std::ostream& os, Time right);

// ==================================================

