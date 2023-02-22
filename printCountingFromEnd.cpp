#include <iostream>

using namespace std;

void Counting(int n)
{
    // Base case...
    if(n == 0)
    {
        return;
    }
    // Proceesing... 
    cout << n << endl;
    // Recursive Relation...
    Counting(n-1);
}


int main()
{

    int n;
    cout << "Enter num: ";
    cin >> n;
    Counting(n);
    return 0;
}