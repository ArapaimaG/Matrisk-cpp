#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n,x,a,b;
    cout <<"Masukan Kolom 1 Baris 1 :";
    cin >> n;
    cout <<"Masukan Kolom 1 Baris 2 :";
    cin >> x;
    cout <<"Masukan Kolom 2 baris 1 :";
    cin >> a;
    cout <<"Masukan Kolom 2 baris 2 :";
    cin >> b;
    int matriksa [2][2] = {{n,x},{a,b}};
    for (n = 0; n < 2; n++)
    {
        for (x = 0; x < 2; x++)
        {
            cout << matriksa [n] [x];
            cout << " ";
        }
        cout <<endl;
    }

    getch();

    return 0;
}