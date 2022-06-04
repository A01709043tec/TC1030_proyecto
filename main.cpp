#include <iostream>
#include "libro.h"
#include "usuario.h"
#include "sistemalib.h"

using namespace std;

int main(int argc, char * argv[]){
    int opcionprin = 9;
    int rustaff = 0;
    string temp_nombre;
    string temp_titulo;
    int temp_librorent;

    Sistemadebiblioteca sistemalib;

while (opcionprin != 0){ //opciones para el usuario pueda seleccionar
    cout << "\nSISTEMA DE BIBLIOTECA\n\n";
    cout << "\n1. Staff";
    cout << "\n2. Lector";
    cout << "\n0. Salir";
    cout << "\n\nIngrese su opcion: ";
    cin >> opcionprin;

    if (opcionprin == 1){
        sistemalib.crea_usuario();
        cout << "Ingresa PIN del Staff:" << ' ';
        cin >> rustaff;
        if (rustaff == 2673){
            cout << "Lista de Staff: " << endl;
            sistemalib.muestra_usuario("Staff"); //sobrecarga
            cout << "Lista de Lectores: " << endl;
            sistemalib.muestra_usuario("Lector"); //sobrecarga
        }
        else {
            cout << "Access Denied" << endl;
            return 0;
        }
    }

    if (opcionprin == 2){
        sistemalib.crea_libro();
        cout << "Bienvenido! Aqui le mostramos la lista de libros: " << endl;
        sistemalib.muestra_libro();
    }   
}

if (opcionprin == 0){
        cout << "Adios" << endl;
    }
}