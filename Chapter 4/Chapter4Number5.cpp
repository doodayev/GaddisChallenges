#include <iostream>
using namespace std;
int main()
{
	double weight, BMI, height;
	cout << "Enter your weight in pounds. \n";
	cin >> weight;
	cout << "Enter your height in inches. \n";
	cin >> height;
	BMI=(weight*703)/(height*height);
	if(BMI>18.5 && BMI<25)
	{
		cout << "You have an optimal BMI of " << BMI << endl;
	}
	if(BMI<18.5)
	{
		cout << "Eat some protein-rich fast food or something. \n";
		cout << "You're underweight as you have a BMI of " << BMI << endl;
	}
	if(BMI>25)
	{
		cout << "Fatass. Lose some weight. You have a BMI of " << BMI << endl;
	}
} 
