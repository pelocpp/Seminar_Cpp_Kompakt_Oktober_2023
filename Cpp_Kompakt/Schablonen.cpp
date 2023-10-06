#include <iostream>

// Wieder aus Zeitgründen: Realisierung und Klasse in einer Datei

//class Calculator
//{
//public:
//	static int add(int x, int y) { return x + y; }
//	static int sub(int x, int y) { return x - y; }
//	static int mul(int x, int y) { return x * y; }
//	static int div(int x, int y) { return x / y; }
//};

//class DoubleCalculator
//{
//public:
//	static double add(double x, double y) { return x + y; }
//	static double sub(double x, double y) { return x - y; }
//	static double mul(double x, double y) { return x * y; }
//	static double div(double x, double y) { return x / y; }
//};

//namespace Calculator
//{
//	int add(int x, int y) { return x + y; }
//	int sub(int x, int y) { return x - y; }
//	int mul(int x, int y) { return x * y; }
//	int div(int x, int y) { return x / y; }
//};

// Schablone // Template
// Klassen-Schablone // Class Template

template <typename T>
class Calculator
{
public:
	static T add(T x, T y) { 
		return x + y;
	}
	static T sub(T x, T y) { return x - y; }
	static T mul(T x, T y) { return x * y; }
	static T div(T x, T y) { return x / y; }
};

void test_schablonen () {

	// Eine Schablone wird instanziiert ===> Reale Klasse 
    // Eine Klasse wird instanziiert ===> Objekt 

	int result = Calculator<int>::add(3, 4);
	double dresult = Calculator<double>::add(3.3, 4.4);
}
