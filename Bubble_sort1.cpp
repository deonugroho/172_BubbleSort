#include <iostream>
using namespace std;

int a[20];
int n;

void input()
{
    while (true)
    {
        cout << "masukkan panjang array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "Error : Maksimal input array adalah 20\n";
        }
    }
