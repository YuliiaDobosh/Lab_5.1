// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double f(const double a, const double b, const double c); // прототип
int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double m = (f(1,t*t, s) + f(t, s*s,1))/( 1+ f(1,t*s,1)* f(1, t * s, 1));
	cout << "m = " << m << endl;
	return 0;
}
double f(const double a, const double b, const double c) // визначення
{
	return (sin (a*b*c)*sin(a * b * c)) / ((a*a)+(b*b)+(c*c));
}