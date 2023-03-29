#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        int ans = n * 1000;
        int sol = ans / 2;
        cout << sol / 5 << endl;
    }
    return 0;
}