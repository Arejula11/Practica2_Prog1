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

    cout<<"Escriba el valor de un ángulo (grados, minutos y segundos ): "<<endl;
    cin>>grados;
    cin>>minutos;
    cin>>segundos;
   

    grados_decimal=grados+minutos/60.0+segundos/3600.0;
    radianes=PI*grados_decimal/180;

    
    cout<<fixed<<setprecision(3)<<"Valor del ángulo en radianes: "<<radianes<<" radianes"<<endl;
    cout<<"sen "<<radianes<<" = "<<setprecision(4)<<sin(radianes)<<endl;
    cout<<setprecision(3)<<"cos "<<radianes<<" = "<<setprecision(4)<<cos(radianes)<<endl;
    cout<<setprecision(3)<<"tg "<<radianes<<" = "<<setprecision(4)<<tan(radianes)<<endl;



    return 0;
}
