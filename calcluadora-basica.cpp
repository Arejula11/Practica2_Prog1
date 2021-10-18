/* *************************
* AUTOR:Miguel Aréjula Aísa
***************************/
/*
 *Programa que pide una operación y este opera y resulve
 */

#include<iostream>
using namespace std;

int main(){

    int numero1;
    int numero2;
    char operador;
    int resultado;
    int aux= 1;
    int potencia;


    std::cout<<"Escriba una operación entre entero: "<<endl;

    cin>>numero1;
     
    if (numero1==0)
    {
        
        return 0;
    }
    else{
        cin>>operador;
        cin>>numero2;


        switch (operador)
        {
        case '+':
            resultado=numero1+numero2;
            break;

        case '-':
            resultado=numero1-numero2;
            break;
        case '*':
            resultado=numero1*numero2;
            break;
        
        case '/':
            resultado=numero1/numero2;
            break;
        case '%':
            resultado=numero1%numero2;
            break;
        
        case '^':
            resultado=numero1;
            while (aux<numero2)
            {
                resultado*=numero1;     
                aux++;
            }      
            break;
        
        default:
            break;
        }
        
        
    }
    

    cout<<numero1<<" "<<operador<<" "<<numero2<<" = "<<resultado<<endl;


    return 0;
}