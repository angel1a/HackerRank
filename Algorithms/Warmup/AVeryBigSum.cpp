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
    long long int ans = 0;
    int n;
    cin >> n;
    vector<long> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
        cin >> arr[arr_i];
        ans += arr[arr_i];
    }
    cout << ans << endl;
    return 0;
}