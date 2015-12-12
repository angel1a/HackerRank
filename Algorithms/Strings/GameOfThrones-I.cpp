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
    cin >> s;
    int flag = 0, count[26], aberrant = 0;
    memset(count, 0, sizeof(count));
    for (int i = 0; i < s.size(); i++)
        count[int(s[i] - 'a')]++;
    for (int i = 0; i < 26; i++)
        if (count[i] % 2 == 1)
            aberrant++;
    if ((s.size() % 2 == 0) && (aberrant == 0))
        flag = 1;
    if ((s.size() % 2 == 1) && (aberrant == 1))
        flag = 1;
    if (flag == 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
