#include <iostream>

using namespace std;
/*

void Merge(int cadena[],int tamano_inicial,int tamano_medio, int tamano_total)
{
    int n1=tamano_medio-tamano_inicial;
    int n2=tamano_total-tamano_medio;
    int L[n1],R[n2];
    for(int i=0;i<n1;++i){
        L[i]=cadena[i];
    }
    for(int j=0;j<n2;++j){
        R[j]=cadena[tamano_medio+j];
    }

    int i=0;
    int j=0;
    for (int k=tamano_inicial;k<tamano_total;++k){
        if(L[i]<=R[j]){
            cadena[k]=L[i];
            ++i;
        }
        else{
            cadena[k]=R[j];
            ++j;
        }
    }
}
void mergesort(int cadena[],int tamano_inicial, int tamano_total)

{

    int tamano_medio;

    if (tamano_inicial < tamano_total)

    {

        int tamano_medio=(tamano_inicial+tamano_total)/2;

        mergesort(cadena,tamano_inicial,tamano_medio);

        mergesort(cadena,tamano_medio+1,tamano_total);

        Merge(cadena,tamano_inicial,tamano_medio,tamano_total);

    }

    return;

}
int main()
{
    int n,p,q,r;
    cout<<"Ingresa el tamano:";
    cin>>n;
    cout<<"Ingresa los"<<" "<<n<<" "<<"terminos"<<endl;
    int arreglo[n];
    for(int i=0;i<n;i++)
        cin>>arreglo[i];
    mergesort(arreglo,0,n);
    for(int i=0;i<n;i++)
        cout<<arreglo[i];


}
*/
