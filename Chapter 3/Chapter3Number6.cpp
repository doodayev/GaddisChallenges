#include <iostream>
using namespace std;

int main()
{
	/*Two options will be displayed because the question doesn't make much sense
	either you can only make cookies in groups of 48 or you can make any
	specific amount. This question doesn't specify. So I just answered both cases.*/
	double sugar=1.5;
	double butter=1;
	double flour=2.75;
	int cookies;
	int groups;
	cout << "How many cookies do you want to make? ";
	cin >> cookies;
	cout << "If you can only make cookies in groups of 48 then you will need: \n";
	if(cookies%48>0)
	{
		groups=cookies/48+1;
	}
	else
	{
		groups=cookies/48;
	}
	double ratio=cookies+0.00;				//This is hacky, but whatever it works.
	ratio=ratio/48;							//I added the 0.00 to make sure ratio doesn't get demoted to
											//an integer because before that it would get demoted and
											//putting a number like 47 would tell me 0 cups of everything
	cout << groups*sugar << " cups of sugar.\n";
	cout << groups*butter << " cups of butter.\n";
	cout << groups*flour << " cups of flout.\n\n\n";
	cout << "If you can make any amount then you will need: \n";
	cout << ratio*sugar << " cups of sugar.\n";
	cout << ratio*butter << " cups of butter.\n";
	cout << ratio*flour << " cups of flour.\n";
	return 0;
}
