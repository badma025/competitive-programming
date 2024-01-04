#include <iostream>
#include <cmath>

using namespace std;

int extendedEuclidean(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1,y1;
    int gcd = extendedEuclidean(b,a%b,x1,y1);

    x = y1;
    y = x1-y1*(a/b);

    return gcd;

}


int main()
{
    int a,b,x,y;
    cin >> a >> b;

    cout << "gcd: " << extendedEuclidean(a,b,x,y);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}
