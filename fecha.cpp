/* *************************
* AUTOR:Miguel Aréjula Aísa
***************************/

/*
 *Programa que pide una una fecha al usuario en formato aaaammdd y el programa la rescribe en fomrato dd/mm/aaaa 
 */

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<"Escriba una fecha con formato de 8 cifras [aaaammdd]: "<< endl;

    int fecha;
    
    cin >> fecha;
    if (fecha<0)
    {
        cout<<"El valor introducio no es positivo";
        return 1;
    }
    else{
    cout <<setfill('0') <<"La fecha escrita es: "
    <<setw(2)<<fecha%100<< "/" 
    <<setw(2)<<setprecision(0)<<fecha%10000/100<< "/" 
    <<setprecision(0)<<fecha/10000<<endl;

    return 0;
    }
}