/* *************************
* AUTOR:Miguel Aréjula Aísa
***************************/
/*
 *Programa que pide al usuario un número del 1 al 10 y este le informa de su equivalencia en numeros romanos
 */
#include<iostream>

using namespace std;
int main(){

    unsigned numero;
    int aux;
    cout<<"Escriba un numero entero entre 1 y 10: "<<endl;
    cin>>numero;
    if (numero<1 || numero>10)
    {
        cout<<"El número no pertenece al intervalo[1,10]";
        return 1;
    }
    else{
        if (numero<4){
        aux=1;
        cout<<numero<<" = I";
        while (aux<numero)
        {
            aux++;
            cout<<"I";
        }
        cout<<endl;
       ;
    }
    else if (numero==4){

        cout<<numero<<" = IV"<<endl;
    }
    else if (numero==5){

        cout<<numero<<" = V"<<endl;
    }
    else if (numero==9){

        cout<<numero<<" = IX"<<endl;
    }
    else if (numero==10){

        cout<<numero<<" = X"<<endl;}

    else{
        
        aux=5;
        cout<<numero<<" = V";
        while (aux<numero)
            {
            
            cout<<"I";
            aux++;
            }
            
        cout<<endl;
    }
    


    return 0;
    }
    
    

}