#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> vec;
    int tmp;
    char blank;
    stringstream ss(str);
    ss >> tmp >> blank;
    vec.push_back(tmp);
    while (blank == ',')
    {
        blank = ' ';
        ss >> tmp >> blank;
        vec.push_back(tmp);
    }
    return vec;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }
    return 0;
}