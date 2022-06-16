/*
 * Proyecto Sistema de Biblioteca clase Libro
 * Yuna Chung
 * A01709043
 * 2022.06.17
 * Versión: 4
 * Esta clase define objetos de la clase libro para la lista de libros. 
 */

#ifndef LIBRO_H_
#define LIBRO_H_

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Libro { //clase libro
    private:
    
    int id;
    string titulo;
    string autor;
    string genero;

    public:
    //constructor por default
    Libro(): id(0), titulo(""), autor(""), genero("") {};
    Libro(int id_num, string title, string author, string genre): 
    id(id_num), titulo(title), autor(author), genero(genre) {};

    int get_id(){
        return id;
    }

    string get_titulo() {
        return titulo;
    }
    string get_autor() {
        return autor;
    }
    string get_genero(){
        return genero;
    }

    string to_string();
};

/*
 * to_string convierte a atributos a string.
 * Conectan todos los valores de los atributos en un string 
 * para ser impreso
 */

string Libro::to_string(){
    stringstream aux;
    aux << "Id es:" << ' ' << id << ' ' << " titulo es:" << ' ' 
    << titulo << ' ' << " escrito por:" << ' ' << autor << 
    ' ' << " y se clasifica en el genero " << ' ' << genero << "\n";
    return aux.str();
}

#endif // LIBRO_H_