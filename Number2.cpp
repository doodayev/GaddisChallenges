#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double sales=8600000;
    double percent=.58;
    cout << "East company makes $" << setprecision(10) << sales*percent << " per year \n";
    return 0;
}
