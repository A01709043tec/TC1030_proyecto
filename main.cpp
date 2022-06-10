#include <iostream>
#include "libro.h"
#include "usuario.h"
#include "sistemalib.h"

using namespace std;

int main(int argc, char * argv[]){
    int opcionprin = 9;
    int rustaff = 0;
    string decide = "k";
    string temp_autor;
    string temp_titulo;
    string temp_genero;

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
        sistemalib.crea_libro();
        cout << "Ingresa PIN del Staff:" << ' ';
        cin >> rustaff;
        if (rustaff == 2673){
            cout << "Lista de Libro: " << endl;
            sistemalib.muestra_libro();
            cout << "Lista de Staff: " << endl;
            sistemalib.muestra_usuario("Staff"); //sobrecarga
            cout << "Lista de Lectores: " << endl;
            sistemalib.muestra_usuario("Lector"); //sobrecarga
            cout << "Desea agregar libros? [yes/no]" << endl;
            cin >> decide;
            if (decide == "yes"){
                cout << "Agrega libro: " << endl;
                cout << "\n\nTitulo: ";
                cin >> temp_titulo;
                cout << "\n\nAutor: ";
                cin >> temp_autor;
                cout << "\n\nGenero: ";
                cin >> temp_genero;
                cout << temp_titulo << ", " << temp_autor << ", " << temp_genero;
                sistemalib.agrega_libro(temp_titulo, temp_autor, temp_genero);
                cout << "Nueva lista de Libro: " << endl;
                sistemalib.muestra_libro();
            }
            else if (decide == "no"){
                cout << "Ok, bye.";
            }
        }
        else {
            cout << "No eres Staff. Access denied";
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