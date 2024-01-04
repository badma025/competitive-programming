#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c;
    int ans;
    int maxAns = 0;

    cin >> a >> b >> c;

    ans = a+b*c;
    maxAns = max(ans, maxAns);

    ans = a*(b+c);
    maxAns = max(ans, maxAns);

    ans = a*b*c;
    maxAns = max(ans, maxAns);

    ans = (a+b)*c;
    maxAns = max(ans, maxAns);

    ans = a+b+c;
    maxAns = max(ans, maxAns);

    cout << maxAns;
}
