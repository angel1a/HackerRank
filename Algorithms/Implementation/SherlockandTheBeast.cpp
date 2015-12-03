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

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n, now;
        bool flag = true;
        cin >> n;
        now = n;
        while(now >= 3 || now == 0)
        {
            if (now % 3)
                now -= 5;
            else
            {
                for (int i = 0; i < now; i++)
                    cout << 5;
                for (int i = now; i < n; i++)
                    cout << 3;
                cout << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << -1 << endl;
    }
    return 0;
}
