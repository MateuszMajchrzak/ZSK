#include <iostream>

using namespace std;

int main()
{
    int liczba;
    int ilosc;
    int licznik=1;
    int lider=1;

    cout <<"Podaj ile liczb chcesz podac: ";
    cin>>ilosc;
    int *T = new int[ilosc];
    for(int i=1;i<=ilosc; i++)
    {
        cout << "Podaj "<<i<<" liczbe: ";
        cin >> liczba;
        T[i]=liczba;
    }

  for(int i=1; i<=ilosc; i++)
  {
      T[i] = lider;
      for(int n=2; n<=ilosc; n++)
      {
          if(T[n]==lider)
          {
              licznik++;
          }

      }
      if((licznik/ilosc)>2)
      {
        cout<<"Liderem jest: "<<lider;
        return 0;
      }

  }




    return 0;
}
