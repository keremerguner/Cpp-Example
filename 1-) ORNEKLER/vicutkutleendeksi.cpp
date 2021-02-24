#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int kilo,endex;
    float boy;

    cout << "Kilonuzu giriniz : ";
    cin >> kilo;

    cout << "Boyunuzu Giriniz : ";
    cin >> boy;

    endex = (kilo/(boy*boy));
    if (endex <= 18)
    {
       cout << "Cok zayifsin\n";
    }
    else if(endex > 18 && endex <24)
    {
        cout << "Normal\n";
    }
    else if (endex > 24){
        cout << "OBEZ misin biraccik sanki\n";
    }
    else {
        cout << "Hatali giris yaptiniz\n";
    }

    cout << "Endex : " << endex;
    getch();
    return 0;
}