#include <iostream>

using namespace std;


void sayDigit(int n, string arr[])
{
    // Base case..
    if( n == 0)
        return;

    // Processing 
    
    int digit = n % 10;
    n = n / 10;


    // Recursive Relation..
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}


int main()
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int n;
    cout << "Enter num: ";
    cin >> n;
    cout << "Say your Digit: ";
    sayDigit(n, arr);
    cout << endl;
    return 0;
}