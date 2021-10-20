/* *************************
* AUTOR:Miguel Aréjula Aísa
***************************/
/*
 *Programa que informa de la cantidad de billetes que devolverá el cajero al retirar la cantidad de dinero solicitada
 */

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int dinero;
    cout<<"Cantidad a retirar en euros [Positiva y multiplo de 10]: "<<endl;
    cin>>dinero;

    if (dinero<0 && dinero%10!=0){
        cout<<"El valor introducio no es positivo ni multiplo de 10"<<endl;
        return 1;
    }
    else if (dinero<0){
        cout<<"El valor introducio no es positivo"<<endl;
        return 1;
    }
    else if(dinero%10!=0){
        cout<<"El valor introducio no es multiplo de 10"<<endl;
        return 1;
    }
    else{
        int billetes_50=dinero/50;
        int billetes_20=(dinero-billetes_50*50)/20;
        int billetes_10=(dinero-(billetes_50*50+billetes_20*20))/10;
    

        cout<<right<<setw(8)<<"Billetes"<<setw(8)<< "Euros"<<endl;
        cout <<setw(8)<<"========" <<setw(8)<< "====="<< endl;
    
        cout<<setw(8)<<int(billetes_10)<<setw(8)<<"10"<<endl;
        cout<<setw(8)<<int(billetes_20)<<setw(8)<<"20"<<endl;
        cout<<setw(8)<<int(billetes_50)<<setw(8)<<"50"<<endl;
        return 0;

    }
    
}