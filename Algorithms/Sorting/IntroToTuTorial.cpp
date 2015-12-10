#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 11111
using namespace std;

int main()
{
    int v, n, data[MAX];
    cin >> v >> n;
    for (int i = 0; i < n; i++)
        cin >> data[i];
    sort(data, data + n);
    for (int i = 0; i < n; i++)
    {
        if (data[i] == v)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
