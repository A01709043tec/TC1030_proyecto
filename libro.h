/*
Proyecto TC1030.301
Clase Libro
Yuna Chung
A01709043
*/

#ifndef LIBRO_H_
#define LIBRO_H_

#include <string>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <iomanip>
#include <process.h>
#include <conio.h>
#include <iostream>

using namespace std;

class Libro { //clase libro
    protected:
    string titulo;
    string autor;
    int publifecha;
    string descripcion;

    public:
    Libro(): titulo(""), autor(""), publifecha(0), descripcion("") {};
    Libro(string title, string author, int date, string desc): titulo(title), autor(author), publifecha(date), descripcion(desc) {};

    string get_titulo() {
        return titulo;
    }
    string get_autor() {
        return autor;
    }
    int get_publifecha() {
        return publifecha;
    }
    string get_descripcion() {
        return descripcion;
    }
    void crea_libro(){
        cout << "\nAgregar nuevo libro: \n";
        cout << "\nTítulo: ";
        cin >> titulo;
        cout << "\nAutor: ";
        cin >> autor;
        cout << "\nFecha de publicación: ";
        cin >> publifecha;
        cout << "\nDescripción: ";
        cin >> descripcion;
    }
    void muestra_libro(){
        cout << "\nTítulo: " << titulo;
        cout << "\nAutor: " << autor;
        cout << "\nFecha de publicación: " << publifecha;
        cout << "\nDescripción: " << descripcion;
    }
    void actualiza_libro(){
        cout << "Modificar título: ";
        cin >> titulo;
        cout << "Modificar autor: ";
        cin >> autor;
        cout << "Modificar fecha de publicación: ";
        cin >> publifecha;
        cout << "Modificar descripción: ";
        cin >> descripcion;
    }
};


#endif // LIBRO_H_