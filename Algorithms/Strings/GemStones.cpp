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
    string s;
    int n, count[26], ans = 0;
    bool appear[26];
    memset(count, 0, sizeof(count));
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        memset(appear, 0, sizeof(appear));
        for (int j = 0; j < s.size(); j++)
            appear[(int)(s[j] - 'a')] = true;
        for (int j = 0; j < 26; j++)
            if (appear[j])
                count[j]++;
    }
    for (int i = 0; i < 26; i++)
        if (count[i] == n)
            ans++;
    cout << ans << endl;
    return 0;
}
