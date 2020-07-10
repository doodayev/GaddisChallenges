// Keep in mind only the starting time of the call is important
// so even if you start at 06:59 and keep talking for 20000 hours it will still be 0.05 per minute
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double time;
	int time2;
	double time3;
	int minutes;
	cout << "Enter the time you wish to make a call. (Enter time with decimal, not colon) ";
	cin >> time;
	time2=time+1;
	time3=time2-time;
	double cost;
	if(time<0)
	{
		cout << "INVALID TIME YOU IDIOT! \n";
		return 0;
	}
	if(time3<.41)
	{
		cout << "INVALID TIME YOU IMBECILE! \n";
		return 0;
	}
	if(time>23 || time<0)
	{
		cout << "INVALID TIME YOU TWAT! \n";
		return 0;
	}
	cout << "How many minutes will you be speaking for? \n";
	cin >> minutes;
	if(time<7)
	{
		cost=minutes*.05;
		cout << "This will cost you $ " << setprecision(2) << fixed << cost << ".\n";
	}
	if(time<19 && time>7)
	{
		cost=minutes*.45;
		cout << "This will cost you $ " << setprecision(2) << fixed << cost << ".\n";
	}
	if(time<24 && time>19)
	{
		cost=minutes*.20;
		cout << "This will cost you $ " << setprecision(2) << fixed << cost << ".\n";
	}
}	
