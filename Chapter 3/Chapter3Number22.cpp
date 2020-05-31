#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	// y=sin(x)
	// y=cos(x)
	// y=tan(x)
	double angle, angleSin, angleCos, angleTan;
	cout << "Enter an angle in radians and the Sine, Cosine, and Tangent of that angle will \n";
	cout << "will be returned. ";
	cin >> angle;
	angleSin=sin(angle);
	angleCos=cos(angle);
	angleTan=tan(angle);
	cout << " Sin: " << setprecision(4) << fixed << angleSin << endl;
	cout << " Cos: " << setprecision(4) << fixed << angleCos << endl;
	cout << " Tan: " << setprecision(4) << fixed << angleTan << endl;
	return 0;
}
	
