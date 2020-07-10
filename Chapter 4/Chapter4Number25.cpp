// Keep in mind only the starting time of the call is important
// so even if you start at 06:59 and keep talking for 20000 hours it will still be 0.05 per minute
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char choice;
	double montha=39.99;
	int minutesA=450;
	double extraA=.45;
	double monthb=59.99;
	int minutesB=900;
	double extraB=.40;
	double monthc=69.99;
	int minutes;
	int overage;
	double cost;
	
	cout << "Pick one of the three packages: \n";
	cout << "Package A: For $39.99 per month 450 minutes are provided. \n Additional minutes are $0.45 per minute.\n";
	cout << "Package B: For $59.99 per month 900 minutes are provided. \n Additional minutes are $0.40 per minute.\n";
	cout << "Package C: For $69.99 per month unlimited minutes are provided. \n";
	cin >> choice;
	if(choice!='a' && choice!='A' && choice!= 'B' && choice!='b' && choice!='C' && choice!='c')
	{
		cout << "Invalid choice retard! \n";
		return 0;
	}
	cout << "How many minutes were used? \n";
	cin >> minutes;
	if(minutes<0)
	{
		cout << "No such thing as negative minutes idiot! \n";
		return 0;
	}
	if(choice=='a' || choice=='A')
	{
		overage=minutes-minutesA;
		if(overage>0)
		{
			cost=montha+overage*extraA;
			cout << "Cost is $" << setprecision(2) << fixed  << cost << endl;
		}
		else
		{
			cost=montha;
			cout << "Cost is $" << setprecision(2) << fixed << cost << endl;
		}
		
	}
	if(choice=='b' || choice=='B')
	{
		overage=minutes-minutesB;
		if(overage>0)
		{
			cost=monthb+overage*extraB;
			cout << "Cost is $" << setprecision(2) << fixed << cost << endl;
		}
		else
		{
			cost=monthb;
			cout << "Cost is $" << setprecision(2) << fixed << cost << endl;
		}
	
	}
	if(choice=='c' || choice=='C')
	{
		cost=monthc;
		cout << "Cost is $" << setprecision(2) << fixed << cost << endl;
	
	}

}	
