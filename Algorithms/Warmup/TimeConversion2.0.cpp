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
    int hour, minute, second;
    char flag, blank;
    scanf("%d:%d:%d%c%c", &hour, &minute, &second, &flag, &blank);
    if (flag == 'A' && hour == 12)
        hour = 0;
    if (flag == 'P' && hour != 12)
        hour += 12;
    printf("%02d:%02d:%02d\n", hour, minute, second);
    return 0;
}