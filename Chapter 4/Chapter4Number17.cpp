// Yes this is a fucking copypaste of number 16. that's why i'm not renaming these variables
// If they actually cared about effort they wouldn't repeat the same shitty question
//Good day sir!

#include <iostream>
#include <string>
using namespace std;
int main()
{
	double time1, time2, time3;
	string run1, run2, run3;
	cout << "Write the name for the first vaulter. ";
	cin >> run1;
	cout << "Write the name for the second vaulter. ";
	cin >> run2;
	cout << "Write the name for the third vaulter. ";
	cin >> run3;
	cout << "Write the time for the first vaulter. ";
	cin >> time1;
	if(2>time1 && time1<5)
	{
		cout << "NO HEIGHTS BELOW 2 AND ABOVE 5 ALLOWED! \n";
		return 0;
	}
	cout << "Write the time for the second vaulter. ";
	cin >> time2;
	if(2>time2 && time2<5)
	{
		cout << "NO HEIGHTS BELOW 2 AND ABOVE 5 ALLOWED! \n";
		return 0;
	}
	cout << "Write the time for the third vaulter. ";
	cin >> time3;
	if(2>time3 && time3<5)
	{
		cout << "NO HEIGHTS BELOW 2 AND ABOVE 5 ALLOWED! \n";
		return 0;
	}
	if(time1>time2 && time1>time3)
	{
		cout << run1 << " came first! \n";
		if(time2>time3)
		{
			cout << run2 << " came second! \n";
			cout << run3 << " came third! \n";
		}
		if(time3>time2)
		{
			cout << run3 << " came second! \n";
			cout << run2 << " came third! \n";
		}
	}
	if(time2>time1 && time2>time3)
	{
		cout << run2 << " came first! \n";
		if(time1>time3)
		{
			cout << run1 << " came second! \n";
			cout << run3 << " came third! \n";
		}
		if(time3>time1)
		{
			cout << run3 << " came second! \n";
			cout << run1 << " came third! \n";
		}
	}
	if(time3>time1 && time3>time2)
	{
		cout << run3 << " came first! \n";
		if(time1>time2)
		{
			cout << run1 << " came second! \n";
			cout << run2 << " came third! \n";
		}
		if(time2>time1)
		{
			cout << run2 << " came second! \n";
			cout << run1 << " came third! \n";
		}
	}
}
