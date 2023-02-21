#include <iostream>

using namespace std;


int Factorial(int n)
{
    // Base case...
    if (n == 0)
        return 1;
    // Recursive relation...
    return n * Factorial(n-1);
}
 

int main()
{
    cout << "Enter the number: ";
    int num;
    cin >> num;
    cout <<  "Factorial of " << num << " is: " << Factorial(num) << endl;
    return 0;
}