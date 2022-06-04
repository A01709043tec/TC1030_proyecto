/*
Proyecto TC1030.301
Clase Sistema de Biblioteca
Yuna Chung
A01709043
*/

#ifndef SISTEMALIB_H_
#define SISTEMALIB_H_

#include <string>
#include <iostream>
#include <sstream>
#include "usuario.h"
#include "libro.h"
using namespace std;

const int MAX = 1000;
const int LIBROS = 1000;

class Sistemadebiblioteca{
    private:

    Usuario * sis[MAX]; //apuntador para usar polimorfismo
    int lista;

    Libro * sys[LIBROS];
    int lib;

    public:

    Sistemadebiblioteca(): lista(0), lib(0){};

    void crea_usuario();
    void crea_libro();
    void muestra_usuario(string tipo);
    void muestra_libro();
};

// new crea el objeto en tiempo de ejecucion para usar polimorfismo
void Sistemadebiblioteca::crea_usuario(){
    sis[lista] = new Lector(lista, "John", 5);
    lista++;
    sis[lista] = new Lector(lista, "Steve", 9);
    lista++;
    sis[lista] = new Lector(lista, "Karen", 0);
    lista++;
    sis[lista] = new Staff(lista, "Ariel", 1234);
    lista++;
    sis[lista] = new Staff(lista, "Kevin", 4567);
    lista++;
    sis[lista] = new Staff(lista, "David", 8910);
    lista++;
}

void Sistemadebiblioteca::crea_libro(){
    sys[lib] = new Libro(lib, "Harry Potter", "J.K.Rowling","Fantasy");
    lib++;
    sys[lib] = new Libro(lib, "Red Pyramid", "Rick Riordan", "Fantasy");
    lib++;
    sys[lib] = new Libro(lib, "Red White and Royal Blue", "Casey McQuiston", "Young-Adult");
    lib++;
    sys[lib] = new Libro(lib, "The Fault in Our Stars", "John Green", "Young-Adult");
    lib++;
    sys[lib] = new Libro(lib, "The Inheritance Games", "Jennifer Lynn", "Mystery");
    lib++;
    sys[lib] = new Libro(lib, "One of Us Is Lying", "Karen M. McManus", "Mystery");
    lib++;
}

//Imprime Usuarios que coinciden con tipo. 
//Con el arreglo sis[], imrpime los objetos que coninciden con el string tipo ("Staff" o "Lector")
void Sistemadebiblioteca::muestra_usuario(string tipo){
    //Ciclo for para recorrer y imprimir los objetos del arreglo
    for (int i = 0; i < lista; i++)
        if (sis[i] -> get_tipo() == tipo)
            cout << sis[i] -> to_string();
}

//Imprime todos los libros.
void Sistemadebiblioteca::muestra_libro(){
    for (int i = 0; i < lib; i++)
        cout << sys[i] -> to_string();
}

#endif // SISTEMALIB_H_