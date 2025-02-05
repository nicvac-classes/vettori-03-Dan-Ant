#include <iostream>
using namespace std;

int main() {
float n, i, ind;
cout << "Quanti studenti ci sono in classe?" << endl;
cin >> n;
string nomi[n];
float voti[n];
float v;
i=0;
while (i<n)
{
    cout << "Qual è il tuo nome?" << endl;
    cin >> nomi[i];
    cout << "Qual è il tuo voto?" << endl;
    cin >> voti [i];
    if(i=0)
    {
        v=voti[i];
    }
    else 
    {
        if (v<voti[i])
        {
            v=voti[i];
        }
    }
    i=i+1;
}
cout << "I datii della classe sono i seguenti: " << endl;
i=0;
while (i<n)

{
 cout << "Nome: " << nomi[i] << " voto: " << voti[i];
 i=i+1;
}
i=0;
while (i<n)
{
    if (voti[i]=v)
    {
        ind=i;
    }
    i=i+1;
}
if(ind>=0)
{"Nome: " << nomi[ind] <<
" voto: " << voti[ind];
}



}


