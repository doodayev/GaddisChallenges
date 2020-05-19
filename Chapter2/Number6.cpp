#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double payAmount=2200.00;
    int payPeriods=26;
    double annualPay=payAmount*payPeriods;
    cout << "The annual pay is $"<< setprecision(2) << fixed << annualPay << endl;
    return 0;
}
