#include <iostream>

using namespace std;

void cambio(char *x, int tamano,char *y)
{
    bool pal=true;
    for(int i=0;i<(tamano/2);++i){
        if (*x!=' '&&*y!=' '){
            if(*x==*y){
                pal=true;
            }
            else
                pal=false;
            ++x;
            --y;
        }
        if (*x==' ')
            ++x;
        if(*y==' ')
            --y;

    }

    if(pal==true)
        cout<<"Es palindrome";
    else
        cout<<"No es palindrome";

}
int main()
{
    char arreglo[]="Allí si María avisa y así va a ir a mi silla"; //Dábale arroz a la zorra el abad//La ruta nos aportó otro paso natural//
    int cont;
    for(cont=0;arreglo[cont]!='\0';++cont);
    cambio(arreglo,cont,&arreglo[cont-1]);

}
