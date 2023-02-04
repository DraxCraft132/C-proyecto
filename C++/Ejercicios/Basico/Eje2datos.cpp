#include<iostream>
using namespace std;

    int main(){
        char sexo[10];
        int Edad;
        float Altura;
        char Nombre[10];
        char Apellido[10];
    cout<<"Bienvenido!! Contesta estas preguntas: ";


    cout<<"\nCual es tu nombre? ";
    cin>>Nombre;
    
    cout<<"\nCual es tu apellido? ";
    cin>>Apellido;

    cout<<"\nDe que sexo eres? ";
    cin>>sexo;
    cout<<"\nCuantos años tienes? ";
    cin>>Edad;
    cout<<"\nCuanto mides? ";
    cin>>Altura;

    cout<<"Los datos que proporcionaste son estos: \n";
    cout<<"Tu Nombre es: "<<Nombre<<"\n";
    cout<<"Tu apellido es: "<<Apellido<<"\n";
    cout<<"Tu sexo es: "<<sexo<<"\n";
    cout<<"Tu Edad es: "<<Edad<<"\n";
    cout<<"Tu Altura es: "<<Altura<<"\n";


        system("pause");
            return 0;
    }