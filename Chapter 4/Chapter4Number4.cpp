#include <iostream>
using namespace std;
int main()
{
	double length1, length2, width1, width2;
	cout << "Enter the length of the first rectangle. \n";
	cin >> length1;
	cout << "Enter the width of the first rectangle. \n";
	cin >> width1;
	cout << "Enter the length of the second rectangle. \n";
	cin >> length2;
	cout << "Enter the width of the second rectangle. \n";
	cin >> width2;
	
	double area1=length1*width1;
	double area2=length2*width2;
	
	if(area1==area2)
	{
		cout << "The areas of the rectangles are the same. \n";
	}
	if(area1>area2)
	{
		cout << "The area of the first rectangle is larger. \n";
	}
	if(area2>area1)
	{
		cout << "The area of the second rectangle is larger. \n";
	}
	return 0;
}
