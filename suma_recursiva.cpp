#include <iostream>

using namespace std;

int suma(int x[], int tamano)
{
    if (tamano==1)
        return x[0];
    else
        return x[tamano-1]+suma(x,tamano-1);
}
int main()
{
    int n;
    cout<<"Ingresa el tamano:";
    cin>>n;
    cout<<"Ingresa los"<<" "<<n<<" "<<"terminos"<<endl;
    int arreglo[n];

    for(int i=0;i<n;i++)
        cin>>arreglo[i];

    cout<<suma(arreglo,n);
}
