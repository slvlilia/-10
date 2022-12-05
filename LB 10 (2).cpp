#include <iostream>
#include <cmath>
void print()
{
	std::cout << "Обчислити медіану mc та бісектрису wa" << std::endl;
}
// Write point struct
struct Point {
	int x;
	int y;

	// Define a member function
	void print() const {
		std::cout << "Point(" << x << ", " << y << ")" << std::endl;
	}

	// Define a member function (to calculate distance)
	double distance(Point p) const {
		double dx = x - p.x;
		double dy = y - p.y;
		return sqrt(dx * dx + dy * dy);
	}

	// Define a member function (to calculate distance)
	double distance(Point const* p) const {
		double dx = x - p->x;
		double dy = y - p->y;
		return sqrt(dx * dx + dy * dy);
	}
};

// Triangle struct (with 3 points)
struct Triangle {
	Point p1;
	Point p2;
	Point p3;

	// Define a member function
	void print() const {
		std::cout << "Triangle: ";
		p1.print();
		p2.print();
		p3.print();
	}

	// Define a member function (to calculate perimeter)
	double perimeter() const {
		return p1.distance(p2) + p2.distance(p3) + p3.distance(p1);
	}


	// Getters and setters
	Point getP1() const { return p1; }
	Point getP2() const { return p2; }
	Point getP3() const { return p3; }

	void setP1(Point p) { p1 = p; }
	void setP2(Point p) { p2 = p; }
	void setP3(Point p) { p3 = p; }

	// Define a member function (to calculate perimeter)
	double perimeter2() const {
		return p1.distance(&p2) + p2.distance(&p3) + p3.distance(&p1);
	}


	// Find median point
	Point median() const {
		Point p{};
		p.x = (p1.x + p2.x + p3.x) / 3;
		p.y = (p1.y + p2.y + p3.y) / 3;
		return p;
	}


	// Find bisector
	Point bisector() const {
		Point p{};
		p.x = (p1.x + p2.x + p3.x) / 3;
		p.y = (p1.y + p2.y + p3.y) / 3;
		return p;
	}
};

int main() {
	int i = 1;
	Point a = { 0, 0 };
	Point b = { i, i - 1 };
	Point c = { i, i };

	Triangle t = { a, b, c };

	t.print();

	std::cout << "Perimetr: " << t.perimeter() << std::endl;

	std::cout << "Median: ";
	t.median().print();

	std::cout << "Bisector: ";
	t.bisector().print();
}
