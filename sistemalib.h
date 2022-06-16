/*
 * Proyecto Sistema de Biblioteca clase Usuario
 * Yuna Chung
 * A01709043
 * 2022.06.17
 * Versión: 4
 * Esta clase define objeto de tipo Sistemadebiblioteca que contiene
 * todo el proceso para hacer altas de ususarios y para agregar
 * un nuevo libro. Esta clase es utilizada por la función princial del
 * programa y es parte del proyecto Sistema de Biblioteca.
 */

#ifndef SISTEMALIB_H_
#define SISTEMALIB_H_

#include <string>

#include <iostream>

#include <sstream>

#include "usuario.h" //biblioteca con mis objetos a usar

#include "libro.h"

using namespace std;

const int MAX = 1000; //constante de tamaño de arreglos
const int LIBROS = 1000;

class Sistemadebiblioteca{
    
    //se declara las variables privadas de instancia
    private:

    Usuario * sis[MAX]; //apuntador para usar polimorfismo
    int lista;

    Libro * sys[LIBROS];
    int lib;
    
    //se declara constructor por default y métodos públicos
    public:

    Sistemadebiblioteca(): lista(0), lib(0){}; //constructor por default

    void crea_usuario();
    void crea_libro();
    void muestra_usuario(string tipo);
    void muestra_libro();
    void agrega_libro(string titulo, string autor, string genero);
};

/*
 * crea_usuario genera objetos en Usuario[]
 *
 * genera objetos de tipo Staff y Lector, y los guarda en la
 * variable de instancia en sis[] (arreglo de sistema para usuarios)
 * para poder hacer pruebas. No usar esta función si se va a usar el
 * programa en prouducción, ya que los datos son falsos.
 * 
 * @param
 * @return
 */

void Sistemadebiblioteca::crea_usuario(){

    //new crea el objeto en tiempo de ejecución para usar polimorfismo
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

/*
 * crea_libro genera objetos en Libro[]
 *
 * genera objetos del libro, y los guarda en la variable de instancia
 * en sys[] (arreglo de sistema para libros) para poder hacer
 * pruebas. No usar esta función si se va a usar el programa en
 * prouducción, ya que los datos son falsos.
 * 
 * @param
 * @return
 */

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

/*
 * agrega_libro crea un objeto Libro y lo agrega al arreglo de libros
 *
 * crea un objeto Libro y lo agrega a arreglo de libros usando como
 * índice el número de id, lo cual después incrementa en 1.
 * 
 * @param string titulo, string autor y string genero del libro
 * @return
 */

void Sistemadebiblioteca::agrega_libro(string titulo, string autor, string genero){
    sys[lib] = new Libro(lib, titulo, autor, genero);
    lib++;
}

/*
 * muestra_usuario imprime usuarios que coinciden con tipo
 *
 * utiliza el arreglo sis[] y el número de lista, para recorrer todo
 * el arreglo imprimiendo cada uno de los objetos que coinciden con el
 * string tipo ("staff o lector").
 * 
 * @param string tipo debe ser: 'staff' o 'lector'
 * @return
 */

void Sistemadebiblioteca::muestra_usuario(string tipo){
    //Ciclo for para recorrer y imprimir los objetos del arreglo
    for (int i = 0; i < lista; i++)
        if (sis[i] -> get_tipo() == tipo)
            cout << sis[i] -> to_string();
}

/*
 * muestra_libro imprime libros
 *
 * utiliza el arreglo sys[] y el número de libros, para recorrer todo
 * el arreglo imprimiendo cada uno de los objetos con su método
 * to_string().
 * 
 * @param
 * @return
 */

void Sistemadebiblioteca::muestra_libro(){
    for (int i = 0; i < lib; i++)
        cout << sys[i] -> to_string();
}

#endif // SISTEMALIB_H_