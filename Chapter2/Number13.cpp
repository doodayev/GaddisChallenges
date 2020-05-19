#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double profitMargin=.35;
    double board=14.95;
    double Cost=(profitMargin+1)*board;
    cout << "The cost of the board is $" << setprecision(2) << fixed << Cost << endl;
    return 0;
}
