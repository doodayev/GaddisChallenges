#include <iostream>
using namespace std;
int main()
{
	double wave;
	cout << "Enter the length of the waves you're dealing with and I'll tell you \n"
		 << "what it is. \n";
	cin >> wave;
	if(wave<=1e-11)
	{
		cout << "Gamma rays \n";
	}
	if(wave<=1e-8 && wave>1e-11)
	{
		cout << "X Rays \n";
	}
	if(wave<=4e-7 && wave>1e-8)
	{
		cout << "Ultraviolet \n";
	}
	if(wave<=7e-7 && wave>4e-7)
	{
		cout << "Visible Light \n";
	}
	if(wave<=1e-3 && wave>7e-7)
	{
		cout << "Infrared \n";
	}
	if(wave<=1e-2 && wave>1e-3)
	{
		cout << "Microwaves \n";
	}
	if(wave>1e-2)
	{
		cout << "Radio Waves \n";
	}
	return 0;
}
