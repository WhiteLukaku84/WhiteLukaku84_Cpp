#include <iostream>
#include<ctime>
using namespace std;

void generowanieLiczb(int tab[], int n)
{
    int i;
    for(i=0;i<n;i++)
      {
         tab[i]=rand()%256;
      }
}
void wypisanieLiczb(int tab[],int n)
{
   cout << "wygenerowane liczby: ";
  for (int i=0;i<n;i++)
    {
      cout << tab[i] << " ";
    }
}

int main() {

  srand(time(NULL));
  int zakres;
  cout << "podaj zakres: ";
  cin >> zakres;

  int tablica[zakres];

 generowanieLiczb(tablica,zakres);
 wypisanieLiczb(tablica,zakres);


  
}