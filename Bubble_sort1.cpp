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
    
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "====================" << endl;

      for (int i = 0; i < n; i++)
    {
    cout << "Masukkan Nilai ke- " << i + 1 << " : ";
    cin >> a[i];
    }
}
