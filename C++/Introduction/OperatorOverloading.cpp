#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix
{
public:
    vector< vector<int> > a;
    friend Matrix operator+ (const Matrix &x, const Matrix &y)
    {
        Matrix z;
        int n = (int)x.a.size();
        int m = (int)x.a[0].size();
        vector<int> tmp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                tmp.push_back(0);
            }
            z.a.push_back(tmp);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                z.a[i][j] = x.a[i][j] + y.a[i][j];
            }
        }
        
        return z;
    }
};

int main ()
{
    int cases, k;
    cin >> cases;
    for(k = 0; k < cases; k++)
    {
        Matrix x;
        Matrix y;
        Matrix result;
        int n, m, i, j;
        cin >> n >> m;
        for(i = 0; i < n; i++)
        {
            vector<int> b;
            int num;
            for(j = 0; j < m; j++)
            {
                cin >> num;
                b.push_back(num);
            }
            x.a.push_back(b);
        }
        for(i = 0; i < n; i++)
        {
            vector<int> b;
            int num;
            for(j = 0; j < m; j++)
            {
                cin >> num;
                b.push_back(num);
            }
            y.a.push_back(b);
        }
        result = x+y;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                cout << result.a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

