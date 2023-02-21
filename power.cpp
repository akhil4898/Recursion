#include <iostream>

using namespace std;


int power(int n, int num_Power)
{
    if (num_Power == 0)
        return 1;
    return n * power(n, num_Power - 1);    
}   


int main()
{
    int numPower, num;
    cout << "Enter the num: ";
    cin >> num;
    cout << "Enter the power: ";
    cin >> numPower;
    cout << num << " Power " << numPower << " is: " << power(num, numPower) << endl;
    return 0;
}