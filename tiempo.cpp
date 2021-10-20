/* *************************
* AUTOR:Miguel Aréjula Aísa
***************************/
/*
 *Programa que pide al usuario que exprese el tiempo de duración de un deter- minado evento como una cantidad natural 
 expresada en segundos, para informar a continuación por la pantalla de la equivalencia del tiempo introducido en
  días, horas, minutos y segundos.
 */

#include<iostream>

using namespace std;
int main(){
    int tiempo;

    cout<< "Duranción en segundos: "<<endl;
    cin>> tiempo;

    const int DIAS_SEGUNDOS=86400;
    const int HORAS_SEGUNDOS=3600;
    const int MINUTOS_SEGUNDOS=60;

    if (tiempo>0)
    {
        int dias = tiempo/DIAS_SEGUNDOS;
        int horas= (tiempo-dias*DIAS_SEGUNDOS)/HORAS_SEGUNDOS;
        int minutos=(tiempo-(dias*DIAS_SEGUNDOS+horas*HORAS_SEGUNDOS))/MINUTOS_SEGUNDOS;    
        int segundos=(tiempo-(dias*DIAS_SEGUNDOS+horas*HORAS_SEGUNDOS+minutos*MINUTOS_SEGUNDOS));

        cout<<"Este tiempo equivale a "<< dias<<" dias "<<horas<< " horas "<< minutos<<" minutos y "<<segundos<<" segundos"<<endl;


    return 0;
    }
    
    else{
        cout<<"El valor introducio no es positivo"<<endl;
        return 1;
    }

    
}   