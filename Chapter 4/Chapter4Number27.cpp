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
	double minutes;
	int overage;
	double cost;
	int month;
	
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
	cout << "What month is it? Enter the number of the month (not the name). \n";
	cin >> month;
	if(month>12 || month<1)
	{
		cout << "No such thing as month " << month << " you cringelord! \n";
		return 0;
	}
	if(month==1 && minutes>(744*60))
	{
		cout << "You entered more minutes than there are minutes in the month you crackhead! \n";
		cout << "(There are only " << 744*60 << " minutes in the month of January.) \n";
		return 0;
	}
	if(month==2 && minutes>(672*60))
	{
		cout << "You entered more minutes than there are minutes in the month you coomer! \n";
		cout << "(There are only " << 672*60 << " minutes in the month of January.) \n";
		return 0;
	}
	if(month==3 && minutes>(744*60))
	{
		cout << "You entered more minutes than there are minutes in the month you coke addict! \n";
		cout << "(There are only " << 744*60 << " minutes in the month of March.) \n";
		return 0;
	}
	if(month==4 && minutes>(720*60))
	{
		cout << "You entered more minutes than there are minutes in the month you pothead! \n";
		cout << "(There are only " << 720*60 << " minutes in the month of April.) \n";
		return 0;
	}
	if(month==5 && minutes>(744*60))
	{
		cout << "You entered more minutes than there are minutes in the month you ,methhead! \n";
		cout << "(There are only " << 744*60 << " minutes in the month of May.) \n";
		return 0;
	}
	if(month==6 && minutes>(720*60))
	{
		cout << "You entered more minutes than there are minutes in the month you cotton muncher! \n";
		cout << "(There are only " << 720*60 << " minutes in the month of June.) \n";
		return 0;
	}
	if(month==7 && minutes>(744*60))
	{
		cout << "You entered more minutes than there are minutes in the month you fatass! \n";
		cout << "(There are only " << 744*60 << " minutes in the month of July.) \n";
		return 0;
	}
	if(month==8 && minutes>(744*60))
	{
		cout << "You entered more minutes than there are minutes in the month you boomer! \n";
		cout << "(There are only " << 744*60 << " minutes in the month of August.) \n";
		return 0;
	}
	if(month==9 && minutes>(720*60))
	{
		cout << "You entered more minutes than there are minutes in the month you zoomer! \n";
		cout << "(There are only " << 720*60 << " minutes in the month of September.) \n";
		return 0;
	}
	if(month==10 && minutes>(744*60))
	{
		cout << "You entered more minutes than there are minutes in the month you gommunist! \n";
		cout << "(There are only " << 744*60 << " minutes in the month of October.) \n";
		return 0;
	}
	if(month==11 && minutes>(720*60))
	{
		cout << "You entered more minutes than there are minutes in the month you capitalist! \n";
		cout << "(There are only " << 720*60 << " minutes in the month of November.) \n";
		return 0;
	}
	if(month==12 && minutes>(744*60))
	{
		cout << "You entered more minutes than there are minutes in the month you simp! \n";
		cout << "(There are only " << 744*60 << " minutes in the month of December.) \n";
		return 0;
	}
		
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
		if(cost>monthb)
		{
			double overage2=minutes-minutesB;
			double cost2=monthb+overage2*extraB;
			if(overage2>0)
			{
				cout << "Had you upgraded to Package B, you would've saved $ " << setprecision(2) << fixed << cost-cost2 << ".\n";
			}
			else
			{
				cout << "Had you upgraded to Package B, you would've saved $ " << setprecision(2) << fixed << cost-monthb << ".\n";
			}
				
		}
		if(cost>monthc)
		{
			cout << "Had you upgraded to Package C, you would've saved $ " << setprecision(2) << fixed << cost-monthc << ".\n";
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
		if(cost>monthc)
		{
			cout << "Had you upgraded to Package C, you would've saved $ " << setprecision(2) << fixed << cost-monthc << ".\n";
		}
		
	
	}
	if(choice=='c' || choice=='C')
	{
		cost=monthc;
		cout << "Cost is $" << setprecision(2) << fixed << cost << endl;
	
	}

}	
