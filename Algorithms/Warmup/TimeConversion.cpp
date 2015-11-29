#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int toInt(string str)
{
    return ((str[0] - '0') * 10 + (str[1] - '0'));
}

int main()
{
    string time, tmp;
    int hour;
    cin >> time;
    if (time[time.length() - 2] == 'A')
    {
        tmp = time.substr(0, 2);
        hour = toInt(tmp);
        if (hour == 12)
            cout << "00" << time.substr(2, 6) << endl;
        else
            cout << time.substr(0, 8) << endl;
    }
    else
    {
        tmp = time.substr(0, 2);
        hour = toInt(tmp);
        if (hour != 12)
            hour += 12;
        cout << hour << time.substr(2, 6) << endl;
    }
    return 0;
}