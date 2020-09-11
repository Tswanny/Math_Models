#include <iostream>
#include <cmath>
using namespace std;

// Bisection approximator
// Thomas Swanson
// 9/10/2020

int main() {
    long double f_it_up(long double x);
    long double a = 2;
    long double b = 3;
    long double p = a + (b - a)/2;
    long double f_a = -9999;
    long double f_b = -9999;
    long double f_p = -9999;

    cout << "-- Initial Values --" << endl;
    cout << "a: " <<  a << "   b: " << b << "   p: " <<  p << endl;
    for (int n = 1; n < 14; n++)
    {
        f_a = f_it_up(a);
        f_b = f_it_up(b);
        f_p = f_it_up(p);

        if ((f_p < 0 && f_a < 0) || (f_p > 0 && f_a > 0))
            a = p;
        else //if ((f_p > 0 && f_b > 0) || (f_p < 0 && f_b < 0))
            b = p;
        p = a + (b - a)/2;

        if (n == 1)
            cout << "Beginning bisection approximation process..." << endl;
        cout << a << "  " << b << "  " << f_a << "  " << f_b << " " <<  p << "  " << f_p <<  endl;
    }

    cout << "Final Values:" << endl;
    cout << "a: " << a << "\nb: " << b << "\nf_a: " << f_a << "\nf_b: " << f_b << "\np: " << p << "\nf_p: " << f_p << endl;
    return 0;
}

long double f_it_up(long double x)
{
    // function to be approximated
    long double y = pow(x, 3) - 25;

    return y;
}