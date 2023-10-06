#include <iostream>

namespace Variant_Product {

	void tueWasWichtiges() {

		std::cout << "Dies ist meine Realisierung" << std::endl;
	}
}

namespace Variant_Product_Test {

	void tueWasWichtiges() {

		std::cout << "Dies ist meine Realisierung mit TEST-Daten" << std::endl;
	}
}

//void test_namespaces()
//{
//	Variant_Product_Test::tueWasWichtiges();
//}

void test_namespaces()
{
	// using namespace Variant_Product_Test;
	// oder
	using namespace Variant_Product;

	tueWasWichtiges();

	Variant_Product_Test::tueWasWichtiges();
}
