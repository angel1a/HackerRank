#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int ans = 0;
        cin >> s;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
