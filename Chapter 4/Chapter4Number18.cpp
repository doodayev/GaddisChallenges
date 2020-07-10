#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double calories;
	double grams;
	double calfat;
	double percentage;
	cout << "How many calories? ";
	cin >> calories;
	if(calories<0)
	{
		cout << "CAN'T HAVE NEGATIVE CALORIES \n";
		return 0;
	}
	cout << "How many grams? ";
	cin >> grams;
	if(grams<0)
	{
		cout << "CAN'T HAVE NEGATIVE GRAMS! \n";
	}
	if(grams*9>calories)
	{
		cout << "CHECK HOW MANY CALORIES YOU PUT! THERE'S TOO MANY FAT GRAMS! \n";
		return 0;
	}
	calfat=grams*9.0;
	percentage=(calfat/calories)*100.0;
	cout << "This food has " << calfat << " calories from fat. \n";
	cout << "The percentage of calories of fat is " << setprecision(2) << fixed << percentage << "% \n";
	if(percentage<30)
	{
		cout << "This food is low in fat! \n";
	}
}
	
	
	
	
