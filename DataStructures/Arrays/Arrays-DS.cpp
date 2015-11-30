#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;

int main()
{
    int n, a[MAX];
    cin >> n;
    for (int i = 0;  i < n; i++)
        cin >> a[i];
    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << ' ';
    cout << endl;
    return 0;
}
