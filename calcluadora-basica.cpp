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


    cout<<"Escriba una operación entre entero: "<<endl;

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
            /* code */
            break;

        case '-':
            /* code */
            break;
        case '*':
            /* code */
            break;
        
        case '/':
            /* code */
            break;
        case '%':
            /* code */
            break;
        
        case '^':
            /* code */
            break;
        
        default:
            break;
        }
        
        resultado=numero1+numero2;
    }
    else if (operdador=="-")
    {
        resultado=numero1-numero2;
    }
    else if (operdador=="*")
    {
        resultado=numero1*numero2;
    }
     else if (operdador=="/")
    {
        resultado=numero1/numero2;
    }
     else if (operdador=="%")
    {
        resultado=numero1%numero2;
    }
     else if (operdador=="^")
    {
        while (aux<=numero2)
        {
            resultado=numero1*numero1;     
            aux++;
        }
        
    }
    
        
    }





    cout<<numero1<<" "<<operdador<<" "<<numero2<<" = "<<resultado<<endl;


    return 0;
}