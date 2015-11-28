#include <iostream>
#include <string>
using namespace std;

int main()
{
    string answer[10] = { "Greater than 9", "one", "two", "three", "four", 
                          "five", "six", "seven", "eight", "nine" };
    int n;
    cin >> n;
    if (n > 9)
        cout << answer[0] << endl;
    else
        cout << answer[n] << endl;
    return 0;
}

