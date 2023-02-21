#include "iostream"

using namespace std;

int Fib(int n)
{
    // Base case...
    if(n == 0 || n == 1)
        return n;

    // Recursive Relation...
    else
        return Fib(n-1) + Fib(n-2);
    cout << n;
}



int main()
{

    int num;

    cout << "Enter num: ";
    cin >> num;

    cout << "Fibonnacci Series is: ";
    for (int i = 0; i < num; i++)
    {
        cout << Fib(i) << " ";
    }
    cout << endl;
    return 0;
}