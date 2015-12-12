#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int t, ans, count1[26], count2[26];
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s.size() % 2)
        {
            cout << -1 << endl;
            continue;
        }
        ans = 0;
        memset(count1, 0, sizeof(count1));
        memset(count2, 0, sizeof(count2));
        for (int i = 0; i < s.size() / 2; i++)
            count1[(int)(s[i] - 'a')]++;
        for (int i = (int)s.size() / 2; i < s.size(); i++)
            count2[(int)(s[i] - 'a')]++;
        for (int i = 0; i < 26; i++)
        {
            int tmp = count1[i] - count2[i];
            if (tmp < 0)
                tmp *= -1;
            ans += tmp;
        }
        cout << ans / 2 << endl;
    }
    return 0;
}
