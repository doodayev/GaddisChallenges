#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double score1;
	double score2;
	double score3;
	double score4;
	double score5;
	
	cout << " Enter the first score ";
	cin >> score1;
	cout << " Enter the second score ";
	cin >> score2;
	cout << " Enter the third score ";
	cin >> score3;
	cout << " Enter the fourth score ";
	cin >> score4;
	cout << " Enter the fifth score ";
	cin >> score5;
	
	double average=(score1+score2+score3+score4+score5)/5;
	
	cout << " The average of the five test scores is " << setprecision(1) << fixed << average << endl;
	return 0;
}
