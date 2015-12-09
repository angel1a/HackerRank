#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        string s1, s2;
        cin >> s1;
        s2 = s1;
        reverse(s2.begin(), s2.end());
        for (int i = 1; i < s1.size(); i++)
        {
            int a1 = s1[i] - s1[i - 1];
            int a2 = s2[i] - s2[i - 1];
            if (a1 <= 0)
                a1 *= -1;
            if (a2 <= 0)
                a2 *= -1;
            if (a1 != a2)
            {
                cout << "Not Funny" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "Funny" << endl;
    }
    return 0;
}
