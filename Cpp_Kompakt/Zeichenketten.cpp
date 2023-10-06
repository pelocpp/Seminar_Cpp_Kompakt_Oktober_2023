#include <iostream>

void test_zeichenketten_01() {

	// ein einzelnes Zeichen
	char ch;
	int n;

	ch = '*';
	std::cout << ch << std::endl;

	n = ch;
	std::cout << n << std::endl;

	ch = 65;   // ASCII-Tabelle: A
	std::cout << ch << std::endl;

	for (int i = 0; i <= 127; i++) {

		//char c;
		//c = i;
		std::cout << i << ": " << (char)i << std::endl;
	}
}



void test_zeichenketten () {

	// Klasse std::string
	// Objekt: s
	// Runde Klammer auf und zu: Konstruktor
	std::string s("12345");

	// Klasse std::string:
	// Operator << ist vorhanden
	std::cout << s << std::endl;

	// getter: size
	size_t len = s.size();
	std::cout << "Laenge: " << len << std::endl;

	// getter: empty
	bool b = s.empty();
	std::cout << "Leer: " << std::boolalpha << b << std::endl;

	// Methode: insert
	// An der Stelle 2 soll "ABC" eingefügt werden
	s.insert(2, "ABC");
	std::cout << "s.insert(2, \"ABC\") ==> " << s << std::endl;

	// Methode: append
	// Will "!!!" anhängen
	s.append("!!!");
	std::cout << "s.append(\"!!!\")    ==> " << s << std::endl;

	// Operatoren
	// operator:  Vergleich // ==
	std::string s1("12345");
	std::string s2("12345");
	std::string s3("123456");

	bool b1 = (s1 == s2);
	bool b2 = (s1 == s3);

	std::cout << "s1 == s2    ==> " << std::boolalpha << b1 << std::endl;
	std::cout << "s1 == s3    ==> " << std::boolalpha << b2 << std::endl;

	// Operatoren
    // operator:  Index-Operator []
	s[8] = '?';
	std::cout << "s[8] = '?'  ==> " << s << std::endl;

	// Methode: append
	std::string result;
	result = s1.append(s2);
	std::cout << "s1.append(s2)    ==> " << result << std::endl;

	// Operatoren
    // operator:  operator + : 2 Zeichenketten zusammenfügen // aneinander hängen
	result = s1 + s3;
	std::cout << "s1 + s3          ==> " << result << std::endl;

	// SPIELEREI:
	//result = operator+ (s1, s2);
	//std::cout << "s1 + s2          ==> " << result << std::endl;

}

