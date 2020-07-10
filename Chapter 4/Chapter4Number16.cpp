#include <iostream>
#include <string>
using namespace std;
int main()
{
	double time1, time2, time3;
	string run1, run2, run3;
	cout << "Write the name for the first runner. ";
	cin >> run1;
	cout << "Write the name for the second runner. ";
	cin >> run2;
	cout << "Write the name for the third runner. ";
	cin >> run3;
	cout << "Write the time for the first runner. ";
	cin >> time1;
	if(time1<0)
	{
		cout << "NO NEGATIVE TIMES ALLOWED! \n";
		return 0;
	}
	cout << "Write the time for the second runner. ";
	cin >> time2;
	if(time2<0)
	{
		cout << "NO NEGATIVE TIMES ALLOWED! \n";
		return 0;
	}
	cout << "Write the time for the third runner. ";
	cin >> time3;
	if(time3<0)
	{
		cout << "NO NEGATIVE TIMES ALLOWED! \n";
		return 0;
	}
	if(time1<time2 && time1<time3)
	{
		cout << run1 << " came first! \n";
		if(time2<time3)
		{
			cout << run2 << " came second! \n";
			cout << run3 << " came third! \n";
		}
		if(time3<time2)
		{
			cout << run3 << " came second! \n";
			cout << run2 << " came third! \n";
		}
	}
	if(time2<time1 && time2<time3)
	{
		cout << run2 << " came first! \n";
		if(time1<time3)
		{
			cout << run1 << " came second! \n";
			cout << run3 << " came third! \n";
		}
		if(time3<time1)
		{
			cout << run3 << " came second! \n";
			cout << run1 << " came third! \n";
		}
	}
	if(time3<time1 && time3<time2)
	{
		cout << run3 << " came first! \n";
		if(time1<time2)
		{
			cout << run1 << " came second! \n";
			cout << run2 << " came third! \n";
		}
		if(time2<time1)
		{
			cout << run2 << " came second! \n";
			cout << run1 << " came third! \n";
		}
	}
}
