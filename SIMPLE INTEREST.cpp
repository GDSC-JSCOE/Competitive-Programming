#include <iostream>
using namespace std;
int main(){
    int p, t, r, SI;
    
    // Asking for input
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the time period(in years): ";
    cin >> t;
    cout << "Enter the rate of interest: ";
    cin >> r;
    
    // Calculating simple interest
    SI = (p*r*t) / 100;
    
    // Displaying output
    cout << "Simple Interest: " << SI << endl;
    return 0;
}
