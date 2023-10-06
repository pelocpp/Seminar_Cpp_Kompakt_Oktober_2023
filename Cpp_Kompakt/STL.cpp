#include <iostream>
#include <vector>
#include <algorithm>

void test_stl_01()
{
	std::vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
}

void test_stl_02()
{
	std::vector<int> vec;

	vec.reserve(90);

	for (int i = 0; i < 100; ++i) {

		vec.push_back(2 * i);

		std::cout 
			<< i << ": size=" << vec.size() 
			<< " - capacity=" << vec.capacity() << std::endl;
	}
}

void test_stl_03()
{
	std::vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

    // Very Simple
	// 1 Problem: operator [] nicht immer vorhanden

	for (int i = 0; i < vec.size(); i++) {

		std::cout << vec[i] << std::endl;
	}
}

void test_stl_04()
{
	std::vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	std::vector<int>::iterator pos;

	pos = vec.begin();   // die erste, Anfangsposition
	int value = *pos;    // gib mir Wert an der Position
	std::cout << value << std::endl;

	// nächstes Element
	++pos;               // gehe zur nächsten Position
	value = *pos;    // gib mir Wert an der Position
	std::cout << value << std::endl;

	// nächstes Element
	++pos;               // gehe zur nächsten Position
	value = *pos;    // gib mir Wert an der Position
	std::cout << value << std::endl;

	// nächstes Element
	++pos;               // gehe zur nächsten Position
	value = *pos;    // gib mir Wert an der Position
	std::cout << value << std::endl;
}

void test_stl_05()
{
	std::vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	std::vector<int>::iterator pos;
	std::vector<int>::iterator ende;

	pos = vec.begin();
	ende = vec.end();

	while (pos != ende) {

		int value = *pos;    // gib mir Wert an der Position
		std::cout << value << std::endl;
		++pos;               // gehe zur nächsten Position
	}
}

void gebeWertAus(int value) {
	std::cout << "Value: " << value << std::endl;
}

void test_stl_06()
{
	std::vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	std::for_each(
		vec.begin(),
		vec.end(),
		gebeWertAus
	);
}


void test_stl()
{
	test_stl_06();
}
