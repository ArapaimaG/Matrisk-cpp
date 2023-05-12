#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    int k, i, ank, sal, sw;
    string sald, salain, lagi = "y";
    string angka[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    while (lagi == "y")
    {
        cout << "isi saldo : ";
        getline(cin, sald);
        k = sald.length();
        sw = 0;
        for (i = 0; i < k; i++)
        {
            salain = sald.substr(i, 1);
            for (ank = 0; ank < 10; ank++)
            {
                if (salain == angka[ank])
                {
                    sw++;
                }
            }
        }
        if (sw != k)
        {
            cout << "Bukan Angka\n";
            getch();
        }
        cout << "Lagi = ";
        getline(cin, lagi);
        if (lagi == "y")
        {
            lagi = "y";
        }
    }
}
