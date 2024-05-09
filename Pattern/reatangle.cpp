#include <iostream>
using namespace std;

int main()
{
    int l, b;
    cout << "Enter Length : ";
    cin >> l;
    cout << "Enter Breadth :";
    cin >> b;
    if (l == b)
    {
        cout << "Printing Square \n";
    }
    for (int i = 0; i < l; i++)
    {

        for (int j = 0; j < b; j++)
        {

            cout << "* ";
        }
        cout << "\n";
    }
}
