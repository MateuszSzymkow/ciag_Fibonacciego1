#include <iostream>
#include <iomanip>//bo chcemy zeby nam liczby bez e sie wyswietla³y

using namespace std;
int ilosc;
long double fib[100000];//ta liczba to tak zeby bylo duzo
int c;

int main()
{
    cout << "Ile liczb chcesz wyznaczyc?" << endl;
    cin>>ilosc;

    fib[0]=1;
    fib[1]=1;

    for(int i=2; i<ilosc; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];

    }
    cout<<setprecision(10000000); //mowimy komputerowi ze chocby liczba miala 10tys znakow to ma nam ja cala pokazac na ekranie

    //for(int i=0; i<ilosc; i++)
    //{
    //    cout<<endl<<"Wyraz nr "<<i+1<<": "<<fib[i];
    //}

        cout<<"Wyraz nr "<<": "<<fib[ilosc-1];


    return 0;
}
