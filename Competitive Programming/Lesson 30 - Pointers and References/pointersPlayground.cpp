#include <iostream>

using namespace std;

void squareVariable(int* n) {
    *n *= *n;
}

int main()
{
    int n = 5;
    int *pN = &n;

    cout << *pN << endl;
    squareVariable(&n);

    cout << n;
}
