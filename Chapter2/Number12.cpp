#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int acre=43560;
    int landGiven=391875;
    double AmountOfAcres=landGiven/acre;
    
    cout << "The land given is a total of " << setprecision(2) << fixed << AmountOfAcres << " acres. \n";
    return 0;
}
