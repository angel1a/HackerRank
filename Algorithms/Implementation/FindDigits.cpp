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

int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;
        int ans = 0, tmp = n;
        while (tmp >= 10)
        {
            if ((tmp % 10 != 0) && (n % (tmp % 10) == 0))
                ans++;
            tmp /= 10;
        }
        if (tmp != 0 && n % tmp == 0)
            ans++;
        cout << ans << endl;
    }
    return 0;
}