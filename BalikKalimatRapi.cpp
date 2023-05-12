#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char huruf[100];
    string lagi = "y";

    while (lagi == "y")
    {
        cout << "Masukan Kalimatnya : ";
        cin.getline(huruf, sizeof(huruf));
        int x = strlen(huruf);
        cout<<"nilai : "<<x<<endl;
        for (int i = x - 1; i >= -1; i--)
        {
            if (huruf[i] == ' ' || i < 0)
            {
                int j = i;
                while (j + 1 <= x)
                {
                    cout << huruf[j + 1];
                    j++;
                }
                x = x - (x - i);
            }
        }

        cout << endl;
        cout << "Lagi = ";
        getline(cin, lagi);
        if (lagi == "y")
        {
            lagi = "y";
        }
    }
}