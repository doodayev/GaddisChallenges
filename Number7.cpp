#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double rise=1.5;
    cout << "The ocean wil be " << setprecision(2) << fixed << 5*rise << " millimeters higher than the current level in 5 years." << endl; 
    cout << "The ocean wil be " << setprecision(2) << fixed << 7*rise << " millimeters higher than the current level in 7 years." << endl; 
    cout << "The ocean wil be " << setprecision(2) << fixed << 10*rise << " millimeters higher than the current level in 10 years." << endl; 
    return 0;
}
