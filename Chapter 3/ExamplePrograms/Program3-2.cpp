#include <iostream>
using namespace std;

int main()
{
	int length, width, area;
	
	cout << "This program calculates the area of a";
	cout << "rectangle.\n";
	cout << "Enter the length and width of a rectangle ";
	cout << "separated by a space.\n";
	cin >> length >> width;
	area=length*width;
	cout << "The area of the rectangle is " << area << endl;
	return 0;
}
