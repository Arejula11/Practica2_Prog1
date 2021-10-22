/* *************************
* AUTOR:Miguel Aréjula Aísa
***************************/
/*
 *Programa que pide las coordenadas de dos puntos, a partir de ellos el progrma indica la distancia euclídea a la que se encuentran
 */

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){

    double punto1x;  
    double punto1y;
    double punto2x;
    double punto2y;

    //Solicita los valores de los puntos
    cout<<"Introduzca las coordenadas de un punto: ";
    cin>>punto1x;
    cin>>punto1y;
    cout<<"Introduzca las coordenadas de otro punto: ";
    cin>>punto2x;
    cin>>punto2y;


    //Para hallar la distancia mediante el terorema de pitagóras el programa calcula el valor de los catetos para calcular la hipotenusa(distancia)
    double catetox=abs(punto2x-punto1x);
    double catetoy=abs(punto2y-punto1x);

    //Teorema de pitagoras(Hipotenusa^2 = cateto^2+cateto^2)
    double distancia= sqrt(catetox*catetox+catetoy*catetoy);

    cout<<fixed<<"La distancia entre los dos puntos es de "<<setprecision(4)<<distancia<<" unidades"<<endl;
    






    return 0;
}