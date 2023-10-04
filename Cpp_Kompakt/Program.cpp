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

// ======================================================

int main()
{
	test_gerade_ungerade();

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


// ======================================================

