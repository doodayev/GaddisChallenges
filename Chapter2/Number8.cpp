#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double item1=15.95;
    double item2=24.95;
    double item3=6.95;
    double item4=12.95;
    double item5=3.95;
    double subtotal=item1+item2+item3+item4+item5;
    double salesTax=subtotal*.07;
    double total=subtotal+salesTax;
    
    cout  << "The price of item 1 is $" << item1 << endl;
    cout  << "The price of item 2 is $" << item2 << endl;
    cout  << "The price of item 3 is $" << item3 << endl;
    cout  << "The price of item 4 is $" << item4 << endl;
    cout  << "The price of item 5 is $" << item5 << endl;
    cout  << "The subtotal is $" << subtotal << endl;
    cout <<  "The sales tax is $" << setprecision(2) << fixed << salesTax << endl;
    cout << "The total is $" << setprecision(2) << fixed << total << endl;
    return 0;
}
   
    
