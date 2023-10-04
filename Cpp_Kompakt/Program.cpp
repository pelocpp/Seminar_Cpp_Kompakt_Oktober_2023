// "Hello World"

#include <iostream>

// ======================================================

// Vorwärts Deklaration:
void test_unterprogramm();
void test_operatoren();
void test_operatoren_02();
void test_while();
void test_fehler();
void test_gerade_ungerade();
void test_switch();
void test_break_continue();
void test_typ_wandlung();
void test_divisionen();

// Übungen
void teufel();

// ======================================================

int main()
{
	test_divisionen();

	// Ausgabe in der Konsole // cout == console output
	// Entwickler: << sieht wie ein Pfeil aus :-)

	// std::cout << "Hallo Seminar";

	return 1;
}

// ======================================================

void test()
{
	//                                  Wertebereich

	//short s;       // 2 bytes           maximal 32.767
	//int n;         // 4 bytes           maximal 2.147.483.647
	//long l;        // 4 oder 8 bytes
	//long long ll;  // 8 bytes


 //   float f;    // Größe des Werts:  4 Bytes  // Wertebereich
	//double d;   //                   8 Bytes

	// ====================================================

	// Feld in C/C++:

	int messreihe[10];

	// Erstes Element dieses Felds:

	int first = messreihe[0];

	// Letztes Element dieses Felds:

	int last = messreihe[9];

	// Feld mit den Werten 1, 2, 3, etc. vorbelegen

	//   vorbelegung ; bedingung (bool) ; weiterschalten
	for (
			int i = 0 ; 
			i < 10 ;
			i = i + 1 
		)
	{
		messreihe[i] = i + 1;
	}
}

// ======================================================

// Beispiel für eine Struktur:   Syntax

struct Time
{
	int hour;
	int minute;
	int second;
};

// globale Variablen
Time seminarAnfang;

Time seminareEnde;

void test_struktur()
{
	Time now;

	now.hour = 11;
	now.minute = 10;
	now.second = 0;
}

void ausgabe(int wieOft)
{
	for (int i = 0; i < wieOft; i = i + 1)
	{
		std::cout << "Dies ist ein C++ Kompakt Seminar" << std::endl;
	}
}

// Ergebnis des Unterprogramms (der Funktion) ist vom Typ int
int malZwei(int wert)
{
	int result;

	result = wert * 2;

	return result;
}

void test_unterprogramm()
{
	// Aufruf Unterprogramm: Mit dem Namen
	ausgabe(5);
	std::cout << std::endl;
	ausgabe(3);

	// Aufruf einer Funktion
	int ergebnis;

	ergebnis = malZwei(7);

	// malZwei(21);  // Hmmm, Ergebnis geht verloren !!! Aber keine Warnung !!!
}

void test_operatoren()
{
	int a = 2;
	int b = 3;
	int c = 6; 
	int d = 6;

	// ... weitere Anweisungen ...

	if ( ! (a > b) ) {    // !: Vorrang: 2, >:  Vorrang: 6   ==> Konsequenz: Klammern notwendig

		std::cout << "a ist groesser b" << std::endl;

	}  // end if
	                                      //  ==> Konsequenz: Klammern nicht zwingend notwendig
	else if ( a > b && c < d ) {          // <  bzw. >:  Vorrang: 6 // &&  Vorrang: 11
	//else if ( (a > b) && (c < d) ) {    // <  bzw. >:  Vorrang: 6 // &&  Vorrang: 11

		std::cout << "a ist groesser b" << std::endl;

	}  // end if
	else if (a == b) {

		std::cout << "a ist  gleich b" << std::endl;

	}
	else {

		std::cout << " was anderes " << std::endl;
	}
}

void test_operatoren_02()
{
	int a = 3;
	int b = 2;

	if (a > b) {

		std::cout << "a ist groesser b" << std::endl;
	}

	if (a == b) {

		std::cout << "a ist gleich b" << std::endl;
	}

	if (a < b) {

		std::cout << "a ist kleiner b" << std::endl;
	}

	// versus --- im Vergleich  zu !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	if (a > b) {

		std::cout << "a ist groesser b" << std::endl;
	}
	else if (a == b) {

		std::cout << "a ist gleich b" << std::endl;
	}
	else if (a < b) {

		std::cout << "a ist kleiner b" << std::endl;
	}
}

void test_while()
{
	int a = 20;
	int b = 10;

	// Der Rumpf muss nicht zwingend ausgeführt werden
	// Abweisende while-Schleife
	//while ( a < b ) {

	//	std::cout << "a ist kleiner b: " << a << std::endl;

	//	// a = a + 1;
	//	// oder kürzer
	//	a++;
	//}

	// Annehmende while-Schleife (mindestens 1 DURCHLAUF)
	do {

		std::cout << "a: " << a << std::endl;

		// a = a + 1;
		// oder kürzer
		a++;

	} while (a < b);

	std::cout << "Ende" << std::endl;
}

void test_fehler()
{
	// C0000005 error is an access violation error caused by a buffer overrun

	int zahlen[10];

	int index = 0;

	while (index < 15) {

		zahlen[index] = 2 * index;

		index++;
	}

	index = 0;

	while (index < 15) {

		std::cout << index << ": " << zahlen[index] << std::endl;

		index++;
	}
}

void test_gerade_ungerade()
{
	int n = 7;

	int rest = n % 2;

	// Division durch 2: Rest
	if (rest == 0) {

		std::cout << n << " ist gerade";
	}
	else {

		std::cout << n << " ist ungerade";
	}
}


void test_switch()
{
	// Fallunterscheidung 

	int n = 2;

	// n wird neu berechnet .........

	switch (n)   // n = 1
	{
	case 1:
		// ...
		std::cout << "EINS" << std::endl;
		break;

	case 2:
		// ...
		std::cout << "ZWEI" << std::endl;
		break;

	case 3:
		// ...
		std::cout << "DREI" << std::endl;
		break;

	case 4:
	case 5:
		// ...
		std::cout << "VIER oder FUENF" << std::endl;
		break;

	default:
		std::cout << "Anderer Wert" << std::endl;
		break;
	}

	std::cout << "Hier geht es weiter ..." << std::endl;
}

void test_break_continue()
{
	// Summe aller ungeraden Zahlen von 1 bis einschließlich 10

	int summe = 0;

	int start = 1;

	// Endlos-Schleife
	while (true) {

		// Ignoriere die geraden Zahlen
		if (start % 2 == 0) {
			start++;
			continue;  // Springe nach oben in die Auswertung der Bedingung
		}

		// Abbruch Kriterium
		if (start >= 11) {
			break;   // Verlasse die while-Schleife
		}

		// aktualisiere Variable summe
		summe = summe + start;
		// oder kuerzer
		// summe += start;

		start++;
	}

	std::cout << "Hier geht es weiter ..." << std::endl;
}

void test_typ_wandlung()
{
	int n = 123;

	double d = 654.321;

	// Wertzuweisung // Assignment
	// int m;

	// Zulässig:
	// d = n;  // Ein "kleinerer" Wert passt in eine Variable eines "groesseren" Datentyps

	// Auch zulässig - ACHTUNG: Es ist ein Datenverlust vorhanden
	// Dies wird durch eine Warning gemeldet
	// Diese Warnung kann / sollte man "quittieren": Typwandlung
	// EXPLIZITE Typumwandlung
	n = (int) d;  // Typ Cast == Typumwandlung

	// IMPLIZIT Typumwandlung , eben mit Warnung
	n = d;
}

void test_divisionen()
{
	int x, y;
	// double y;

	double z;

	x = 3;
	y = 0;

	z = (double) x / y;
}

// ======================================================

