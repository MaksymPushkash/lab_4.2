#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x, xp, xk, dx, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(10) << "y" << " |" << endl;
    cout << "---------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        if (x <= -1) {
            y = exp(2 + x); 
        } 
        else if (x > -1 && x < 1) {
            y = 2 * abs(5 - x) - pow(sin(1.0 / abs(2 + x)), 2); 
        } 
        else { 
            y = pow(cos(x), 2) / (1 + abs(sin(x)));
        }

        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(5) << y
             << " |" << endl;
        x += dx;
    }

    cout << "---------------------------------" << endl;
    return 0;
}


