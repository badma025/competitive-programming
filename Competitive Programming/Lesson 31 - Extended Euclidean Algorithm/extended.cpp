#include <iostream>
#include <cmath>

using namespace std;

int extendedEuclidean(int a, int b, int &x, int &y) {

    // base case
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int gcd = extendedEuclidean(b,a%b, x1, y1);

    x = y1;
    y = x1-y1*(a/b);

    return gcd;
}


int main()
{
    int a = 30,b = 10,x,y;

    int gcd = extendedEuclidean(a,b,x,y);
    cout << a << "x + " << b << "y = " << gcd << endl;
    cout << a << "(" << x << ")" << " + " << b << "(" << y << ")" << " = " << gcd << endl;
}
