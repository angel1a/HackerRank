#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t, a, b, ans;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        ans = floor(sqrt(b)) - ceil(sqrt(a)) + 1;
        cout << ans << endl;
    }
    return 0;
}
