#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>


using namespace std;

  struct datosPersonales
  {
    string Nombre;
    int Nacimiento;
    char tiposangre;
    int sexo;
    char CURP[20];
    int signo;
    string nacionalidad;
    string direccion;
    int tel;
    float estatura;
    float peso;
  };

int main()
{
  //FILE *archivo;
  //ofstream guardar("data.txt");
  //guardar<<"holas"
  //archivo = fopen("datos.txt", "w");
  ofstream archivo;
  archivo.open("datos.txt");
    // objeto de la clase ofstream
  struct datosPersonales sujeto;

  cout<<"Mande datos"<<endl;
  cout<<"Mande nombre"<<endl;
  archivo << sujeto.Nombre << endl;
  archivo << "Segunda línea de texto" << endl;
  archivo << "Última línea de texto" << endl;
  //cin>>sujeto.Nombre;
  //string aux= sujeto.Nombre;
  cout<<"Mande nacimiento"<<endl;
  //cin>>sujeto.Nacimiento;
  //fprintf(archivo, "aux" ,1 );
  //delete []archivo;







    archivo.close();

}
