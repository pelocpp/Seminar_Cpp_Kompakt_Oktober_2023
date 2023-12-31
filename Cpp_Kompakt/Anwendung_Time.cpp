#include <iostream>
#include <string>

#include "Time.h"

void ersteSchritteMitTimeObjekten()
{
	using namespace std;

	Time jetzt;             // Hierf�r ben�tigen wir den Standard-Konstruktor: Keine Parameter.

	//jetzt.hour = 10;      // Zugriff auf eine Variable des Objekts
	//jetzt.minute = 56;
	//jetzt.second = 20;

	jetzt.setHour(10);
	jetzt.setMinute(56);
	jetzt.setSecond(20);

	jetzt.print();       // Aufruf einer Methode

	// cout ist Repr�sentant einer Konsole 
	cout << jetzt;

	// int wievieleStunden = jetzt.hour;
	int wievieleStunden = jetzt.getHour();

	jetzt.setHour(-999);  // wird abgewiesen
	jetzt.print();        // Aufruf einer Methode

	jetzt.setHour(17);    // wird akzeptiert
	jetzt.print();        // Aufruf einer Methode

	Time mittagsPause (12, 15, 0);

	Time nochEineUhrzeit(12, 30);
}

void zweitesBeispielZuObjekten()
{
	std::string zeichenkette;	
}


void ausgabeZumErsten()
{
	std::cout.write("ABC", 3);

	// Operator: <<
	std::cout << "ABCDE" << '\n' << 123 << std::endl << 99.99 << '*';
}