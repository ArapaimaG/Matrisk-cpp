#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char huruf[100];
    string lagi = "y";
    int i, k, l = 0;

    while (lagi == "y")
    {

        cout << "Masukan Kalimatnya : ";
        cin.getline(huruf, sizeof(huruf));
        k = strlen(huruf);
        for (i = k - 1; i >= 0; i--)
        {
            cout << huruf[i];
        }
        for (i = 0; i <= k; i++)
        {
            if (huruf[i] == ' ')
            {
                l = l + 1;
            }
        }
        cout << endl;
        cout << "Jumlah Spasi = " << l;
        cout << endl;
        cout << "Lagi = ";
        getline(cin, lagi);
        if (lagi == "y")
        {
            lagi = "y";
        }
    }
}