#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter a number from 1-10 to get the Roman numeral version of that number. ";
	cin >> a;
	if(a<0)
	{
		cout << "Romans did not understand the concept of negative numbers. \n";
		cout << "Run the program again. \n";
	}
	if(a==0)
	{
		cout << "The Romans did not understand the concept of 0. \n";
		cout << "Run the program again. \n";
	}
	if(a==1)
	{
		cout << "I\n";
	}
	if(a==2)
	{
		cout << "II\n";
	}
	if(a==3)
	{
		cout << "III\n";
	}
	if(a==4)
	{
		cout << "IV\n";
	}
	if(a==5)
	{
		cout << "V\n";
	}
	if(a==6)
	{
		cout << "VI\n";
	}
	if(a==7)
	{
		cout << "VII\n";
	}
	if(a==8)
	{
		cout << "VIII\n";
	}
	if(a==9)
	{
		cout << "IX\n";
	}
	if(a==10)
	{
		cout << "X\n";
	}
	if(a>10)
	{
		cout << "This program only has numbers 1-10. \n";
		cout << "Run the program again. \n";
	}
}
		
	
