#include <iostream>

#include "Time.h"

// Default-Konstruktor
Time::Time()
{
	m_hour = 0;
	m_minute = 0;
	m_second = 0;
}

// Benutzer-definierter Konstruktor
Time::Time(int hour, int minute)
{
	// F�r den Fall, dass h oder m falsche Werte haben
	m_hour = 0;
	m_minute = 0;

	setHour(hour);
	setMinute(minute);

	m_second = 0;
}

Time::Time(int hour, int minute, int second)
{
	// erste einfache, eher falsche Realisierung
	//hour = h;
	//minute = m;
	//second = s;

	// Besser - und wasserdicht:
	m_hour = 0;
	m_minute = 0;
	m_second = 0;

	setHour(hour);
	setMinute(minute);
	setSecond(second);
}

void Time::setHour(int hour)
{
	if (hour >= 0 && hour < 24) {
		m_hour = hour;
	}
	else {
		std::cout << "Falscher Wert fuer Stunden: " << hour << std::endl;

	    // hour = 0;   // Spannend - ich w�rde es nicht machen: "Wie will man es haben"
	}
}

void Time::setMinute(int minute)
{
	if (minute >= 0 && minute < 60) {
		m_minute = minute;
	}
	else {
		std::cout << "Falscher Wert fuer Minuten: " << minute << std::endl;
	}
}

void Time::setSecond(int s)
{
	if (s >= 0 && s < 60) {
		m_second = s;
	}
	else {
		std::cout << "Falscher Wert fuer Sekunden: " << s << std::endl;
	}
}

int Time::getHour()
{
	return m_hour;
}

int Time::getMinute()
{
	return m_minute;
}

int Time::getSecond()
{
	return m_second;
}

void Time::print()
{
	std::cout << m_hour << ":" << m_minute << ":" << m_second << std::endl;
}

void Time::increment()
{
	// eine Sekunde dazuz�hlen ... to be Done

	m_second = m_second + 1;
	// oder
	// m_second++;

	// Beispiel: sekunden == 43;  ==> 44

	if (m_second == 60) {

		m_second = 0;
		m_minute++;

		if (m_minute == 60) {

			m_minute = 0;
			m_hour++;

			if (m_hour == 24) {
				
				m_hour = 0;
			}
		}
	}
}

int Time::toSeconds()
{
	// wandelt eine Uhrzeit in Sekunden um
	// 9:7:20 ==> 20 + 60*7 + 3600 * 9

	int seconds = m_hour * 3600 + m_minute * 60 + m_second;
	return seconds;

	// oder

	// return m_hour * 3600 + m_minute * 60 + m_second;
}

// ==================================================

// global operator
void operator << (std::ostream& os, Time t)
{
	os << t.getHour() << ":" << t.getMinute() << ":" << t.getSecond();
}

// ==================================================
