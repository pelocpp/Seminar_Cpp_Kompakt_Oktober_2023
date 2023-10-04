// "Hello World"

#include <iostream>

// ======================================================

void test()
{
	//                                  Wertebereich

	short s;       // 2 bytes           maximal 32.767
	int n;         // 4 bytes           maximal 2.147.483.647
	long l;        // 4 oder 8 bytes
	long long ll;  // 8 bytes


    float f;    // Größe des Werts:  4 Bytes  // Wertebereich
	double d;   //                   8 Bytes

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

int main()
{
	test();

	// Ausgabe in der Konsole // cout == console output
	// Entwickler: << sieht wie ein Pfeil aus :-)

	std::cout << "Hallo Seminar";

	return 1;
}
