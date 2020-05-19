#include <iostream>
using namespace std;
int main()
{
    int tank=20;
    double CityMpg=23.5;
    double HighwayMpg=28.9;
    cout << "This car with " << tank << " gallons in its tank can go...\n";
    cout << CityMpg*tank << " miles when driving only on city roads and...\n";
    cout << HighwayMpg*tank << " miles when driving only on the highways.\n";
}
