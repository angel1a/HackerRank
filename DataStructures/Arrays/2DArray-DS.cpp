#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int matrix[6][6], ans = -1000, tmp;
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            cin >> matrix[i][j];
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            tmp = matrix[i][j] + matrix[i][j + 1] + matrix[i][j + 2] + matrix[i + 1][j + 1];
            tmp += matrix[i + 2][j] + matrix[i + 2][j + 1] + matrix[i + 2][j + 2];
            ans = (ans > tmp ? ans : tmp);
        }
    }
    cout << ans << endl;
    return 0;
}
