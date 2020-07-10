// "WE AINT DOIN GEOMETRY!" - Chad Warden
#include <iostream>
using namespace std;
int main()
{
	double area;
	double length;
	double width;
	double radius;
	double pi=3.14159;
	int choice;
	
	cout << "1. Calculate the Area of a Circle \n";
	cout << "2. Calculate the Area of a Rectangle \n";
	cout << "3. Calculate the Area of a Triangle \n";
	cout << "4. Quit \n\n";
	cout << "Enter your choice (1-4): ";
	cin >> choice;
	if(choice>4 || choice<1)
	{
		cout << "THAT IS NOT A VALID OPTION... RETARD! \n";
		return 0;
	}
	if(choice==1)
	{
		cout << "What's the radius of the circle? ";
		cin >> radius;
		area=radius*radius*pi;
		cout << "The area is " << area << endl;
	}
	if(choice==2)
	{
		cout << "What's the length? ";
		cin >> length;
		cout << "What's the width? ";
		cin >> width;
		area=width*length;
		cout << "The area is " << area << endl;
	}
	if(choice==3)
	{
		cout << "What's the base? ";
		cin >> length;
		cout << "What's the height? ";
		cin >> width;
		area=width*length*.5;
		cout << "The area is " << area << endl;
	}
	if(choice==4)
	{
		cout << "Bye retard. \n";
		return 0;
	}
}
	
	
