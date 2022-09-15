#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  
    cout << 5 + 7 << endl;
    cout << 5 / 7 << endl;
    cout << 5 % 7 << endl;
    cout << 4 + 5 * 3 << endl;
    cout << (4 + 5) * 3 << endl;

    int wnum = 5;
    double dnum = 5.5;

    wnum++;
    cout << wnum << endl;

    wnum += 80;
    cout << wnum << endl;

    cout << 10.0 / 3.0 << endl;
    cout << 10 / 3 << endl;
    
    // Rise to the power of
    cout << pow(2, 5) << endl;

    // Square root
    cout << sqrt(36) << endl;

    // Round
    cout << round(4.3) << endl;

    // Round up
    cout << ceil(4.3) << endl;

    // Round down
    cout << floor(4.3) << endl;

    // Get the bigger number
    cout << fmax(3, 11) << endl;

    // Get the smaller number
    cout << fmin(3, 11) << endl;

    return 0;
}