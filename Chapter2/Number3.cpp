#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double sales=95;
    double stateTax=.04;
    double countyTax=.02;
    double SalesTax=(countyTax+stateTax)*sales;
    cout << "The total sales tax is $" << setprecision(2) << fixed << SalesTax << endl;
    return 0;
}
