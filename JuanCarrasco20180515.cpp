#include <iostream>
using namespace std;

typedef struct
{
   string nombre;
   string nacionalidad;
   float altura;
   string conyuge;
   string nacimiento;
   string premios;
   int edad;
}datos1;//con el typedef se pone aqui el nombre de la estructura

int mostrardatos(datos1 person);
datos1 capturardatos(void);

#define numero_de_personas 1

int main(void)
{
    //con el deftype se ahorra structes como un alias
    //ahora hacemos un arreglo de varible personas
    datos1 persona[numero_de_personas];

    cout<<"Programa base de datos de actrices"<<endl;

    //captura de todos los datos
    for(int k=0; k<numero_de_personas; k++)
    {
    //pones ahora con arreglo
    persona[k] = capturardatos();
    }

    //Salida de todos ls datos
    for(int k=0; k<numero_de_personas; k++)
    {
    mostrardatos(persona[k]);
    }

    cin.get();
    return 0;
}

int mostrardatos(datos1 person)
{
    cout<<"\n\nEl nombre es: "<<person.nombre<<endl;
    cout<<"de "<<person.edad<<" anios de edad"<<endl;;
    cout<<"de nacionalidad: "<<person.nacionalidad<<endl;
    cout<<"de altura: "<<person.altura<<endl;
    cout<<"de conyuge"<<person.conyuge<<endl;
    cout<<"nacio el:"<<person.nacimiento<<endl;
    cout<<"sus premios"<<person.premios<<endl;
    return 0;
}
datos1 capturardatos(void)
{
    //declaras esto dentro de la funcion por q el void no recibe
    datos1 person;

    cout<<"\nNombre: ";
    cin>>person.nombre; cin.ignore(256, '\n' );

    cout<<"Edad: ";
    cin>>person.edad;cin.ignore(256, '\n' );

    cout<<"Nacionalidad: ";
    cin>>person.nacionalidad;cin.ignore(256, '\n' );

    cout<<"Altura mts: ";
    cin>>person.altura;cin.ignore(256, '\n' );

    cout<<"Conyuge: ";
    cin>>person.conyuge;cin.ignore(256, '\n' );

    cout<<"Nacimiento: ";
    cin>>person.nacimiento;cin.ignore(256, '\n' );

    cout<<"Premios: ";
    cin>>person.premios;cin.ignore(256, '\n' );


    return person;
}
