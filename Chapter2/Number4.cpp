#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double charge=88.67;
    double tax=.0675*charge;
    double tip=(charge+tax)*.2;
    cout << "Meal cost " << setprecision(2) << fixed << charge << endl;
    cout << "Tax cost " << setprecision(2) << fixed << tax << endl;
    cout << "Tip cost " << setprecision(2) << fixed << tip << endl;
    cout << "Total cost " << setprecision(2) << fixed << tip+tax+charge << endl;
    return 0;
}
