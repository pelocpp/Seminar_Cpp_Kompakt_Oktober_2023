#include <iostream>

// Der Kürze halber:
// Klasse (Schnittstelle und Realisierung in einer Datei)

namespace Beispiel_Vererbung {

	class Rectangle
	{
		// friend class ColoredRectangle;  Ginge theoretisch , aber nicht sinnvoll

		friend bool operator== (Rectangle, Rectangle);

	private:
		int m_top;
		int m_left;
		int m_width;
		int m_height;

	protected:
		int m_area;

	public:
		// Konstruktor
		Rectangle(int top, int left, int width, int height)
		{
			m_top = top;
			m_left = left;
			m_width = width;
			m_height = height;

			m_area = 0;
		}

		// Realisierung: Hier der Kürze halber in der Klasse selbst
		void draw() {
			std::cout << "Rectangle::draw (Farben unbekannt)" << std::endl;
		}
	};

	class ColoredRectangle : public Rectangle
	{
	private:
		int m_color;   // eine Farbe soll in einem int-Wert abgelegt werden können

	public:
		// c'tor

		//ColoredRectangle(int top, int left, int width, int height, int color)
		//{
		//	m_top = top;
		//	m_left = left;
		//	m_width = width;
		//	m_height = height;
		//	m_color = color;
		//}


		ColoredRectangle(int top, int left, int width, int height, int color) 
			: Rectangle (top, left, width, height)
		{
			m_color = color;
		}

		// oder

		//ColoredRectangle(int top, int left, int width, int height, int color)
		//	: Rectangle(top, left, width, height) , m_color (color)
		//{}

		// Methoden
		void draw() {

			Rectangle::draw();
			
			std::cout << "ColoredRectangle::draw (Es wird farbig gemalt)" << std::endl;
		}
	};

}


void test_vererbung () {

	using namespace Beispiel_Vererbung;

	Rectangle r(5, 5, 40, 50);
	r.draw();
	
	ColoredRectangle cr (1, 1, 10, 20, 999);
	cr.draw();
}

// ======================================================

class Point
{
public:
	int m_x;
	int m_y;
};

// NEIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIN
class Line : public Point {
	// to be done ....

public:
	Point  m_end;   // has-a // hat-ein

	Line() {
	}
};

// ======================================================

