#include <iostream>
using namespace std;

int main()
{
    int shares=750;
    int price=35;
    double commissionPercentage=.02;
    int NoCommission=shares*price;
    double Commission=NoCommission*commissionPercentage;
    double TotalCost=NoCommission+Commission;
    
    cout << "The amount paid for the stock alone: $" << NoCommission << endl;
    cout << "The amount of the commission: $" << Commission << endl;
    cout << "The total amount paid: $" << TotalCost << endl;
    return 0;
}
