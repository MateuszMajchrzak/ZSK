#include <iostream>
#include <cstdlib>

using namespace std;

void szukaj( double T[], int n)
{
    double lider=T[0];
    int pom=1, ilosc=0;
    for (int i=1; i<n; i++)
    if(pom==0)
    {
        lider=T[i];
        pom=1;
    }
    else if(T[i]==lider) pom++;
        else  pom--;
    if(pom==0) cout<<"W zbiorze nie ma lidera"<<endl;
    else
    {
        for(int i=0; i<n; i++)
            if(T[i]==lider) ilosc++;
        if(ilosc>n/2) cout<<"liczba "<<lider<<" jest liderem"<<endl;
        else cout<<"w zbiorze nie ma lidera"<<endl;
    }
}


int main()
{
    double T[] = { 3, 3, 2, 2, 2, 3, 3, 3};
    szukaj(T, 5);
}
