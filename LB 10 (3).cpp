#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>
void print()
{
	std::cout << "𝑧1=(cos𝛼−cos𝛽)2−(sin𝛼−sin𝛽)2 𝑧2=−4sin2𝛼−𝛽2∙cos(𝛼+𝛽)" << std::endl;
}

using namespace std;

int main()
{

	int a, b;
	double z1, z2, m;

	cout << "Enter the value а:";
	cin >> a;

	cout << "Enter the value b:";
	cin >> b;

	m = (a - b) / 2;

	z1 = pow(cos(a) - cos(b), 2) - pow(sin(a) - sin(b), 2);
	cout << "The value of the first expression :" << z1 << endl;

	z2 = (-4) * sin(m) * sin(m) * cos(a + b);
	cout << "The value of the second expression :" << z2 << endl;
}