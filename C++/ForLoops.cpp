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
int main() {
    int a,b;
    cin >> a;
    cin >> b;
    string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = a; i <= b; i ++)
    {
        if (i < 10)
        {
            cout << numbers[i-1] << "\n";
        }
        else if (i % 2 == 0)
        {
            cout << "even" << '\n';
        }
        else {
        {
            cout << "odd" << "\n";
        }
        }
    }
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
