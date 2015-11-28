#include <iostream>
#include <string>
using namespace std;

int main()
{
    string answer[10] = { "", "one", "two", "three", "four",
                          "five", "six", "seven", "eight", "nine" };
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            cout << answer[i] << endl;
            continue;
        }
        if (i % 2)
            cout << "odd" << endl;
        else
            cout << "even" << endl;
    }
    return 0;
}

