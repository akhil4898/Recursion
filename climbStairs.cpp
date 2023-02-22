#include <iostream>

using namespace std;

int climbStairs(int n)
{
    // Base case..

    if(n < 0)
        return 0;
    
    if(n == 0)
        return 1;

    // Recursive relation..

    return climbStairs(n-1) + climbStairs(n-2);
}

int main()
{

    int n;
    cout << "Enter num: ";
    cin >> n;
    cout << "Ways to reach " << n << "th stair: " << climbStairs(n) << endl;
    return 0;
}