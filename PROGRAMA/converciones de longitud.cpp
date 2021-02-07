#include<iostream>
#include<stdio.h>
#include<conio.h>
#include <windows.h>
    #define ESC 27

using namespace std;
////////////////////////////////VARIABLES
char tecla;
char conv;
int a; 
double Valor1,Valor2,Valor3,Valor4;
string LONGITUDORIGINAL,LONGITUDCONVERTIDA;
int uno=   10;
int dos=   100;
int tres=  1000;
int cuatro=10000;
int cinco= 100000;
int seis=  1000000;
int siete= 10000000;

///////////////////////////////VARIABLES
///FUNCION GOTOXY
void gotoxy(int x, int y) 
    { 
        HANDLE hCon; 
        COORD dwPos; 
     
        dwPos.X = x; 
        dwPos.Y = y; 
        hCon = GetStdHandle(STD_OUTPUT_HANDLE); 
        SetConsoleCursorPosition(hCon,dwPos); 
  }
///FUNCION GOTOXY
/////////PANTALLA PRICIPAL
void PANTALLA_PRINCIPAL(){
     ////////TITULO//////////
    gotoxy(20,5); 
    cout<<"CONVERCIONES DE UNIDADES DE LONGITUD"<<endl;
    ////////TITULO//////////
    cout<<""<<endl;
    ////////////////////////MUESTRA///////////
    gotoxy(29,8); 
    cout<<"KILOMETRO"<<"      "<<"Km"<<endl;
    gotoxy(29,9); 
    cout<<"HETOMETRO"<<"      "<<"Hm"<<endl;
    gotoxy(29,10); 
    cout<<"DIAMETROMETRO"<<"  "<<"Dm"<<endl;
    gotoxy(29,11); 
    cout<<"METRO"<<"          "<<"m"<<endl;
    gotoxy(29,12); 
    cout<<"BECIMETRO"<<"      "<<"Bm"<<endl;
    gotoxy(29,13); 
    cout<<"CENTIMETRO"<<"     "<<"Cm"<<endl;
    gotoxy(29,14); 
    cout<<"MILIMETRO"<<"      "<<"Mm"<<endl;
    ////////////////////////MUESTRA///////////
    
    /////////DIVICION/////
    gotoxy(16,11); 
    cout<<"DIVICION"<<endl;
    ///////////DIVICION
    ////////////////FLECHA DE DIVICION//////////
    gotoxy(10,8); 
    cout<<"±";
    gotoxy(8,9); 
    cout<<"<"<<"±±±"<<">"<<endl;
    gotoxy(10,10);
    cout<<"±"<<endl; 
    gotoxy(10,11);
    cout<<"±"<<endl; 
    gotoxy(10,12);
    cout<<"±"<<endl; 
    gotoxy(10,13);
    cout<<"±"<<endl;
    gotoxy(10,14);
    cout<<"±"<<endl; 
    ////////////////FLECHA DE DIVICION//////////
    
    //////OPCION(1)
    gotoxy(7,16);
    cout<<"OPCION (1)"<<endl; 
   //////OPCION (1)
  //////OPCION  (2)
    gotoxy(65,16);
    cout<<"OPCION (2)"<<endl; 
/////OPCION    (2)
/////////////////////ENTER///////
gotoxy(34,17);
cout<<"====="<<endl;
gotoxy(34,18);
cout<<"ENTER"<<endl;
gotoxy(34,19);
cout<<"====="<<endl;
    /////////////////////ENTER//////
    ///////////////MULTIPLICACION///////////////
    gotoxy(50,11);
    cout<<"MULTIPLICACION"<<endl;
       ///////////////MULTIPLICACION///////////////
       ///////////////FLECHA D MULTIPLICACION////////////
    gotoxy(68,8);
    cout<<"±"<<endl;
    gotoxy(68,9);
    cout<<"±"<<endl; 
    gotoxy(68,10);
    cout<<"±"<<endl; 
    gotoxy(68,11);
    cout<<"±"<<endl; 
    gotoxy(68,12);
    cout<<"±"<<endl;
    gotoxy(66,13); 
    cout<<"<"<<"±±±"<<">"<<endl;
    gotoxy(68,14); 
    cout<<"±";
///////////////FLECHA D MULTIPLICACION////////////
           }
//////////////////////////MARCO///////////////////
           void Marco(){  
         for(int i=2; i < 78; i++){
            gotoxy (i, 3); printf ("%c", 205);
            gotoxy(i, 23); printf ("%c", 205); 
            }
         for(int v=4; v < 23; v++){
            gotoxy (2,v);  printf ("%c", 186);
            gotoxy(77,v);  printf ("%c", 186);
             }
         gotoxy  (2,3);    printf ("%c", 201);
         gotoxy (2,23);    printf ("%c", 200);
         gotoxy (77,3);    printf ("%c", 187);
         gotoxy(77,23);    printf ("%c", 188); 
         }  
//////////////////////////MARCO///////////////////
/////////////////////////OCULTAR CURSOR//////////////////
void OcultaCursor() {
        CONSOLE_CURSOR_INFO cci = {100, FALSE};
     
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
        }
/////////////////////////OCULTAR CURSOR//////////////////
/////////////////CUERPO DE CONVERCIONES/////////////////////
    void CUERPO_DE_CONVERCIONES(){
         gotoxy(20,5); 
         cout<<"CONVERCIONES DE UNIDADES DE LONGITUD"<<endl; 
          gotoxy(20,7); 
                cout<<"SELECIONE UNA OPCION"<<endl;
                 gotoxy(20,8); 
                  cout<<"OPCION"<<"(1)"<<endl;
                 gotoxy(20,9); 
              cout<<"OPCION"<<"(2)"<<endl;
                 gotoxy(20,10); 
         cin>>conv;
        gotoxy(20,11); 
       cout<<"SELECIONO LA OPCION"<<" "<<a<<endl;
       system("cls");
       switch(conv){
       
      case'1':
                    ////////////////////////MUESTRA///////////
    gotoxy(47,8); 
    cout<<"KILOMETRO"<<"      "<<"Km"<<endl;
    gotoxy(47,9); 
    cout<<"HETOMETRO"<<"      "<<"Hm"<<endl;
    gotoxy(47,10); 
    cout<<"DIAMETROMETRO"<<"  "<<"Dm"<<endl;
    gotoxy(47,11); 
    cout<<"METRO"<<"          "<<"m"<<endl;
    gotoxy(47,12); 
    cout<<"BECIMETRO"<<"      "<<"Bm"<<endl;
    gotoxy(47,13); 
    cout<<"CENTIMETRO"<<"     "<<"Cm"<<endl;
    gotoxy(47,14); 
    cout<<"MILIMETRO"<<"      "<<"Mm"<<endl;
    ////////////////////////MUESTRA///////////
        gotoxy(29,1);
       cout<<"OPCION (1)"<<endl;
         gotoxy(29,2);
       cout<<"=========="<<endl;
        gotoxy(27,3);
       cout<<" ::DIVICION::"<<endl;
       cout<<"             "<<endl;
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
   Valor3=Valor1/Valor2;
    cout<<"LA CONVERCION DE"<<" "<<Valor1<<" "<<LONGITUDORIGINAL<<" "<<"="<<" "<<Valor3<<" "<<LONGITUDCONVERTIDA<<endl;
      

      
      
       break; 
       
       case'2':
                                ////////////////////////MUESTRA///////////
    gotoxy(47,8); 
    cout<<"KILOMETRO"<<"      "<<"Km"<<endl;
    gotoxy(47,9); 
    cout<<"HETOMETRO"<<"      "<<"Hm"<<endl;
    gotoxy(47,10); 
    cout<<"DIAMETROMETRO"<<"  "<<"Dm"<<endl;
    gotoxy(47,11); 
    cout<<"METRO"<<"          "<<"m"<<endl;
    gotoxy(47,12); 
    cout<<"BECIMETRO"<<"      "<<"Bm"<<endl;
    gotoxy(47,13); 
    cout<<"CENTIMETRO"<<"     "<<"Cm"<<endl;
    gotoxy(47,14); 
    cout<<"MILIMETRO"<<"      "<<"Mm"<<endl;
    ////////////////////////MUESTRA///////////
        gotoxy(29,1);
       cout<<"OPCION (2)"<<endl;
          gotoxy(29,2);
       cout<<"=========="<<endl;
         gotoxy(25,3); 
       cout<<"::MULTIPLICACION::"<<endl;
       cout<<"             "<<endl;
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

       break;
         }
         }
/////////////////CUERPO DE CONERCONES////////////////////////


      
     
     
     
     
     
  
int main (){
    system("color 06");
    OcultaCursor();
       while(tecla != ESC){
    /////////MARCO
    Marco();
    /////////MARCO

    /////////PANTALLA PRICIPAL
   PANTALLA_PRINCIPAL();
    /////////PANTALLA PRICIPAL
   system("PAUSE>Null");
   system("cls");
   /////////MARCO
    Marco();
    /////////MARCO
   //////////CUERPO DE CONVERCIONES
   CUERPO_DE_CONVERCIONES();
   /////////CUERPO DE CONVERCIONES
  
   system("PAUSE>Null");
   system("cls");
   }
    system("PAUSE>Null");

            }
           
    
