#include <iostream>

using namespace std;

void cambio(int *x, int *y)
{
    int temporal;
    temporal=*x;
    *x=*y;
    *y=temporal;
}
int main()
{
    int x,y;
    cout<<"Ingrese x: ";
    cin>>x;
    cout<<"Ingrese y: ";
    cin>>y;
    cambio(&x,&y);
    cout<<"Ahora x es: "<<x<<" Y y es: "<<y<<endl;
}
 
