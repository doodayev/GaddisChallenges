#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double air=1100;
	double water=4900;
	double steel=16400;
	int choice;
	double distance;
	double time;
	cout << "Pick one of these (use numbers) \n";
	cout << "1) Air \n";
	cout << "2) Water \n";
	cout << "3) Steel \n";
	cin >> choice;
	if(choice !=1 && choice !=2 && choice !=3)
	{
		cout << "NOT A VALID CHOICE... RETARD! \n";
		return 0;
	}
	if(choice==1)
	{
		cout << "Enter distance (feet). \n";
		cin >> distance;
		if(distance<0)
		{
			cout << "IMPOSSIBLE... RETARD! \n";
			return 0;
		}
		time=distance/air;
		cout << "Time it will take " << setprecision(4) << fixed << time << " seconds. \n";
	}
	if(choice==2)
	{
		cout << "Enter distance (feet). \n";
		cin >> distance;
		if(distance<0)
		{
			cout << "IMPOSSIBLE... RETARD! \n";
			return 0;
		}
		time=distance/water;
		cout << "Time it will take " << setprecision(4) << fixed << time << " seconds. \n";
	}
	if(choice==3)
	{
		cout << "Enter distance (feet). \n";
		cin >> distance;
		if(distance<0)
		{
			cout << "IMPOSSIBLE... RETARD! \n";
			return 0;
		}
		time=distance/steel;
		cout << "Time it will take " << setprecision(4) << fixed << time << " seconds. \n";
	}
}
