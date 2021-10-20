/* *************************
* AUTOR:Miguel Aréjula Aísa
***************************/

/*
 *Programa que pide una cantidad de dinero NO negativa de euros y el programa deesglosa en euros y centimos, además infomra del equivalente a pesetas
 */

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    cout<<"Escriba una cantidad no negativa de dinero en euros: "<<endl;
    const double PESETAS_POR_EURO = 166.386;
    double dinero;

    cin>>dinero;
if (dinero<0)
    {
        cout<<"El valor introducio no es positivo"<<endl;
        return 1;
    }
    else{
        int centimos = int(100*dinero+0.5)%100;
        int euro= int(dinero+0.005);

        cout<<fixed<<"Son "<< setprecision(0)<<euro<<" euros y "<<centimos<< " céntimos que equivalen a " << dinero * PESETAS_POR_EURO<<" pesetas"<<endl;


        return 0;
    }
}