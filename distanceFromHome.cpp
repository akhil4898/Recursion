#include <iostream>

using namespace std;

void reachHome(int src, int dest)
{
    cout << "Source: " << src << " Destination: " << dest << endl;

    // Base case...
    if(src == dest)
    {
        cout << "Pahuch Gya" << endl;
        return ;
    }

    // processing...

    src++;


    // Recursive Relation...

    reachHome(src, dest);


}

int main()
{

    int source, destination;
    cout << "Enter source: "; 
    cin >> source;

    cout << "Enter destination: ";
    cin >> destination;

    reachHome(source, destination);
    return 0;
}