#include <iostream> 
#include <iomanip>
#include <cmath>

#include "dod.h" 
#include "sum.h" 
#include "var.h" 

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(10) << "arcctg(x)" << "   |"
        << setw(7) << "s" << "      |"
        << setw(5) << "n" << "   |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    Pi = 4 * atan(1.0);

    x = xp;
    while (x <= xk)
    {
        sum();
        cout << "|" << setw(7) << setprecision(2) << x << "   |"
            << setw(10) << setprecision(5) << Pi / 2 - atan(x) << "   |"
            << setw(10) << setprecision(5) <<(Pi/2+s) << "   |"
            << setw(5) << n << "   |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;

    cin.get();
    return 0;
}