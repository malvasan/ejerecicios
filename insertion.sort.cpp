#include <iostream>

using namespace std;

void insertion_sort(int cadena[],int tamano)
{
    int key;
    for(int j=1;j<tamano;++j){
        key=cadena[j];
        int i=j-1;
        while(i>0 && cadena[i]){
            cadena[i+1]=cadena[i];
            --i;
        }
        cadena[i+1]=key;
    }
    for(int i=0;i<tamano;i++)
        cout<<cadena[i];
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
    insertion_sort(arreglo,n);

}
