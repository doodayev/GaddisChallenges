#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int customers=16500;
    int PerWeek=.15*customers;
    int PerWeekCitrusPreference=PerWeek*.58;
    
    cout << PerWeek << " customers purchase one or more energy drinks per week. \n";
    cout << PerWeekCitrusPreference << noshowpoint << " of those customers prefer citrus-flavored energy drinks. \n";
    return 0;
}
