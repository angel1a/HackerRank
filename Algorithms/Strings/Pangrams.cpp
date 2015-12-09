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
    char ss[11111];
    string s;
    int count = 0;
    bool appear[1111];
    memset(appear, 0, sizeof(appear));
    cin.getline(ss, 100000, '\n');
    s = ss;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] <= 'z' && s[i] >= 'a' && !appear[s[i]])
        {
            appear[s[i]] = true;
            count++;
        }
        if (count == 26)
        {
            cout << "pangram" << endl;
            return 0;
        }
    }
    cout << "not pangram" << endl;
    return 0;
}
