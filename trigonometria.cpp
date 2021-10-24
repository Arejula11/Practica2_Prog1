/* *************************
* AUTOR:Miguel Aréjula Aísa
***************************/
/*
 *Programa que pide un ángulo escrito en grados, minutos y segundos y este devuelve la equivalencia en radianes y el valor de su seno, coseno y tangente.
 */

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){

    int grados;
    int minutos;
    int segundos;
    double grados_decimal;
    double radianes;
    const double PI=3.14159265359;
    /*Declaro las variables y la constante PI*/

    cout<<"Escriba el valor de un ángulo (grados, minutos y segundos ): ";
    cin>>grados;
    cin>>minutos;
    cin>>segundos;
   
    if (grados==90 && minutos==0 && segundos==0)/*Caso especial en el que el valor de la tangente está indefinido*/
    {
        grados_decimal=grados+minutos/60.0+segundos/3600.0;
        radianes=PI*grados_decimal/180;
        double coseno =0; /*He tenido que darle el valor al coseno debido a que el valor que devolvia el ordeanador era -0.0000, 
        debido a que se obtenia un número negativo infinitesimal. Además de esta forma es más eficiente*/
        double seno = 1; /*Vuelvo a poner el valor del seno ya que es un caso seguro y así es más eficiente que tener que realizar la operación*/
    

        cout<<fixed<<setprecision(3)<<"Valor del ángulo en radianes: "<<radianes<<" radianes"<<endl;
        cout<<"sen "<<radianes<<" = "<<setprecision(4)<<seno<<endl;
        cout<<fixed<<setprecision(3)<<"cos "<<radianes<<" = "<<setprecision(4)<<coseno<<endl;
        cout<<setprecision(3)<<"tg "<<radianes<<" = "<<"Error matemático, valor indefinido"<<endl;
    }
    
    else if (grados==270 && minutos==0 && segundos==0)/*Caso especial en el que el valor de la tangente está indefinido*/
    {
        grados_decimal=grados+minutos/60.0+segundos/3600.0;
        radianes=PI*grados_decimal/180;

        double coseno= 0;
        double seno=1;
    
        cout<<fixed<<setprecision(3)<<"Valor del ángulo en radianes: "<<radianes<<" radianes"<<endl;
        cout<<"sen "<<radianes<<" = "<<setprecision(4)<<seno<<endl;
        cout<<setprecision(3)<<"cos "<<radianes<<" = "<<setprecision(4)<<coseno<<endl;
        cout<<setprecision(3)<<"tg "<<radianes<<" = "<<"Error matemático, valor indefinido"<<endl;
    }
    
    else{

    
        grados_decimal=grados+minutos/60.0+segundos/3600.0;
        radianes=PI*grados_decimal/180;
        double coseno= cos(radianes);
        double seno= sin(radianes);
        double tangente= tan(radianes);
    
        cout<<fixed<<setprecision(3)<<"Valor del ángulo en radianes: "<<radianes<<" radianes"<<endl;
        cout<<"sen "<<radianes<<" = "<<setprecision(4)<<seno<<endl;
        cout<<setprecision(3)<<"cos "<<radianes<<" = "<<setprecision(4)<<coseno<<endl;
        cout<<setprecision(3)<<"tg "<<radianes<<" = "<<setprecision(4)<<tangente<<endl;
    }


    return 0;
}
