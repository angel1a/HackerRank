#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        bool appear[26], flag = false;
        cin >> s1 >> s2;
        memset(appear, 0, sizeof(appear));
        for (int i = 0; i < s1.size(); i++)
            appear[(int)(s1[i] - 'a')] = true;
        for (int i = 0; i < s2.size(); i++)
        {
            if (appear[(int)(s2[i] - 'a')])
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
