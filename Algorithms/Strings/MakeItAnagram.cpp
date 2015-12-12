#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string s1, s2;
    int count1[26], count2[26], ans = 0;
    memset(count1, 0, sizeof(count1));
    memset(count2, 0, sizeof(count2));
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
        count1[(int)(s1[i] - 'a')]++;
    for (int i = 0; i < s2.size(); i++)
        count2[(int)(s2[i] - 'a')]++;
    for (int i = 0; i < 26; i++)
    {
        int tmp = count1[i] - count2[i];
        if (tmp < 0)
            tmp *= -1;
        ans += tmp;
    }
    cout << ans << endl;
    return 0;
}
