#include <iostream>
using namespace std;
struct Estudiante{
    int edad;
    string nombre;
    string carnet;
    char genero;
    string carrera;
};
int main(){
    
    /*Estudiante estudiante1={20,"Juan","00126525",'M',"Informatica"};
    cout<<"Edad: "<<estudiante1.edad<<endl;
    cout<<"Nombre: "<<estudiante1.nombre<<endl;
    cout<<"Carnet: "<<estudiante1.carnet<<endl;
    cout<<"Genero: "<<estudiante1.genero<<endl;
    cout<<"Carrera: "<<estudiante1.carrera<<endl;*/

    int cantidad;
    cout<<"Ingrese la cantidad de estudiantes: "<<endl;
    cin>>cantidad;
    Estudiante estudiantes[cantidad];
    for (int i=0; i<cantidad; i++){
        cout<<"Ingrese la edad: "<<i+1<<endl;
        cin>>estudiantes[i].edad;
        cout<<"Ingrese el nombre del estudiante: "<<endl;
        cin>>estudiantes[i].nombre;
        cout<<"Ingrese el carnet del estudiainte: "<<endl;
        cin>>estudiantes[i].carnet;
        cout<<"Ingrese el genero del estudiante: "<<endl;
        cin>>estudiantes[i].genero;
        cout<<"Ingrese la carrera del estudiante: "<<endl;
        cin>>estudiantes[i].carrera;

    }for(int j=0; j<cantidad; j++){
        cout<<"Edad: "<<estudiantes[j].edad<<endl;
        cout<<"Nombre: "<<estudiantes[j].nombre<<endl;
        cout<<"Carnet: "<<estudiantes[j].carnet<<endl;
        cout<<"Genero: "<<estudiantes[j].genero<<endl;
        cout<<"Carrera: "<<estudiantes[j].carrera<<endl;
    }


    return 0;

}