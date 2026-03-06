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

void display()
{
    cout << endl;
    cout << "=================================" << endl;
    cout << "element array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    
    for (int i = 0; i < n; i++)
    {
         cout << "Data ke - " << i << " : " << a[i] << endl;
    }
}

void bubbleSort()
{
    cout << "\n===============================" << endl;
    cout << "Hasil setiap Pass" << endl;
    cout << "===============================" << endl;
    for (int pass = 1; pass <n; pass++)
    {
        for (int j = 0; j <= n - 1 - pass; j++)

        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j +1];
                a[j + 1] = temp;
            }
        }