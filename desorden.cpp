#include <iostream>

using namespace std;

void cambio(float x, float y, char z)
{
    switch(z)
    {
        case '+':
        cout<<x+y<<endl;
        break;
        case '-':
        cout<<x-y<<endl;
        break;
        case '*':
        cout<<x*y<<endl;
        break;
        case '/':
        cout<<x/y<<endl;
        break;
        default:
        cout<<"No es una operacion basica"<<endl;
        break;
    }
}
int main()
{
    int x,y;
    char z;
    cout<<"Ingrese x: ";
    cin>>x;
    cout<<"Ingrese y: ";
    cin>>y;
    cout<<"Ingrese z: ";
    cin>>z;
    cambio(x,y,z);
}

