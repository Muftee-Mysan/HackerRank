#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int max(int a, int b, int c, int d);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a, b, c, d; 
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int maximum = max (a, b, c, d);
    cout << maximum;
     
    return 0;
}

int max(int a, int b, int c, int d)
{
    int maximum;
    if (a >= b && a >= c && a >= d)
    {
        maximum = a;
    }
    else if (b >=c && b >= d)
    {
        maximum = b;
    }
    else if  (c >= d)
    {
        maximum = c;
    }
    else {
    {
        maximum = d;
    }
    }
    
    return maximum;
}
