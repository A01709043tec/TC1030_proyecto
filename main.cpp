/*
 * Proyecto Sistema de Biblioteca main
 * Yuna Chung
 * A01709043
 * 2022.06.17
 *
 * Este es un proyecto para la clase TC1030 Programación Orientado a
 * Objetos. Es un programa que guarda una lista de usuarios y libros
 * y lo despliega dependiendo del tipo de usuario. También, si el usuario
 * es un Staff, podrá agregar libro.
*/

#include <iostream> //para imprimir

#include "libro.h" //bibliotecas con objetos de mi proyecto

#include "usuario.h"

#include "sistemalib.h"

using namespace std;

int main(int argc, char * argv[]){
    int opcionprin = 9;
    int rustaff = 0;
    string decide = "k";
    string greeting;
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

    if (opcionprin == 1){ //Staff
        sistemalib.crea_usuario();
        sistemalib.crea_libro();
        cout << "Ingresa PIN del Staff:" << ' ';
        cin >> rustaff;
        if (rustaff == 2673){ //PIN del Staff
            cout << "Lista de Libro: " << endl;
            sistemalib.muestra_libro();
            cout << "Lista de Staff: " << endl;
            sistemalib.muestra_usuario("Staff"); //sobrecarga
            cout << "Lista de Lectores: " << endl;
            sistemalib.muestra_usuario("Lector"); //sobrecarga
            cout << "Desea agregar libros? [yes/no]" << endl;
            cin >> decide;
            if (decide == "yes"){
                cout << "Escribe algo para continuar: " << endl;
                cout << "\n\nTitulo: ";
                getline(cin, temp_titulo);
                cin.ignore();
                cout << "\n\nAutor: ";
                getline(cin, temp_autor);
                cin.ignore();
                cout << "\n\nGenero: ";
                getline(cin, temp_genero);
                cin.ignore();
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

    if (opcionprin == 2){ //Lector
        sistemalib.crea_libro();
        cout << "Bienvenido! Aqui le mostramos la lista de libros: " << endl;
        sistemalib.muestra_libro();
    }   
}

if (opcionprin == 0){ //Salir del sistema
        cout << "Adios" << endl;
    }
}