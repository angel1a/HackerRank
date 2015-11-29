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
    int n, num1 = 0, num2 = 0, num3 = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
        cin >> arr[arr_i];
        if (arr[arr_i] == 0)
            num3++;
        else if (arr[arr_i] > 0)
            num1++;
        else
            num2++;
    }
    cout << (float)num1 / n << endl;
    cout << (float)num2 / n << endl;
    cout << (float)num3 / n << endl;
    return 0;
}