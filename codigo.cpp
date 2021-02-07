#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
double Valor1,Valor2,Valor3,Valor4;
string LONGITUDORIGINAL,LONGITUDCONVERTIDA;
int uno=   10;
int dos=   100;
int tres=  1000;
int cuatro=10000;
int cinco= 100000;
int seis=  1000000;
int siete= 10000000;
int main (){ 
cout<<"CALCULO"<<endl;
cout<<"UNIDAD EN QUE CONVERTIR      ";
cin>>LONGITUDORIGINAL;
cout<<"UNIDAD EN QUE SE CONVERTIRA  ";
cin>>LONGITUDCONVERTIDA;
 cout<<"             "<<endl;
   cout<<"VALOR A CONVERTIR            ";
    cin>>Valor1;
   cout<<"ESPACIOS ENTRE LOS VALORES   ";
  cin>>Valor4;
                  if(Valor4 == 1 ){
         Valor2=uno;           
                   }
                   if(Valor4 == 2 ){
         Valor2=dos;          
                   }
                   if(Valor4 == 3 ){
         Valor2=tres;          
                   }
                   if(Valor4 == 4 ){
         Valor2=cuatro;          
                   }
                   if(Valor4 == 5 ){
         Valor2=cinco;          
                   }
                   if(Valor4 == 6 ){
         Valor2=seis;
                   }
                   if(Valor4 ==7 ){
         Valor2=siete;          
                   }
    cout<<"             "<<endl;
    cout<<"             "<<endl;
   Valor3=Valor1*Valor2;
    cout<<"LA CONVERCION DE"<<" "<<Valor1<<" "<<LONGITUDORIGINAL<<" "<<"="<<" "<<Valor3<<" "<<LONGITUDCONVERTIDA<<endl;
    
   
    system("pause");
    
    }
