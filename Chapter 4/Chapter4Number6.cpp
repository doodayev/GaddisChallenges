#include <iostream>
using namespace std;
int main()
{
	double mass, weight;
	cout << "Enter the mass of the object. \n";
	cin >> mass;
	weight=mass*9.8;
	if(weight>1000)
	{
		cout << "Object is too heavy! \n";
	}
	if(weight<10)
	{
		cout << "Object is too light! \n";
	}
	if(weight>10 && weight<1000)
	{
		cout << "The weight of this object is " << weight << " newtons. \n";
	}
	return 0;
} 
