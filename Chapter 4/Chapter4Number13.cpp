#include <iostream>
using namespace std;
int main()
{
	int books;
	cout << "How many books did you purchase this month? ";
	cin >> books;
	if(books==0)
	{
		cout << "ZERO POINTS. \n";
	}
	if(books==1)
	{
		cout << "You got five points. \n";
	}
	if(books==2)
	{
		cout << "You've collected fifteen points. \n";
	}
	if(books==3)
	{
		cout << "You've earned thirty points! \n";
	}
	if(books>=4)
	{
		cout << "Congratulations! You've earned 60 points! \n";
	}
}
