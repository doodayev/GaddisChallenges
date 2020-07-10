#include <iostream>
using namespace std;
int main()
{
	int minute=60;
	int hour=3600;
	int day=86400;
	int seconds, minutes, hours, days;
	cout << "Enter the amount of seconds. \n";
	cin >> seconds;
	if(seconds<0)
	{
		cout << "Retard. \n";
	}
	if(seconds<60 && seconds>=0)
	{
		cout << "The amount of time you entered is " << seconds << " seconds. \n";
	}
	if(seconds>=60 && seconds<3600)
	{
		minutes=seconds/minute;
		seconds=seconds-minutes*minute;
		cout << "The amount of time you entered is: \n" << minutes << " minutes and " << seconds << " seconds.\n";
	}
	if(seconds>=3600 && seconds<86400)
	{
		hours=seconds/hour;
		seconds=seconds-hours*hour;
		minutes=seconds/minute;
		seconds=seconds-minutes*minute;
		cout << "The amount of time you entered is: \n"
		<< hours << " hours, " <<  minutes << " minutes, and " << seconds << " seconds.\n";
	}
	if(seconds>=86400)
	{
		days=seconds/day;
		seconds=seconds-days*day;
		hours=seconds/hour;
		seconds=seconds-hours*hour;
		minutes=seconds/minute;
		seconds=seconds-minutes*minute;
		cout << "The amount of time you entered is: \n"
		<< days << " days, " << hours << " hours, " <<  minutes << " minutes, and " << seconds << " seconds.\n";
	}
}
	
