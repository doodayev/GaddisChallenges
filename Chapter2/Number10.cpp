#include <iostream>
using namespace std;

int main()
{
    int tank=15;
    int range=375;
    double MPG=range/tank;
    cout << "A car that can hold " << tank << " gallons of gas in its tank \n";
    cout << "and can go " << range << " miles before being out of gas \n";
    cout << "has a fuel efficiency of " << MPG << " Miles Per Gallon. \n";
    return 0;
}
