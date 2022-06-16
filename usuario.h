/*
 * Proyecto Sistema de Biblioteca clase Usuario
 * Yuna Chung
 * A01709043
 * 2022.06.17
 * Versión: 5
 * Esta clase define objeto de tipo Usuario que contiene
 * las clases heredadadas Staff y Lector
 */

#ifndef USUARIO_H_
#define USUARIO_H_

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Usuario { //clase usuario
    protected:
    string nombre;
    int id;
    string tipo;

    public:
    //constructor por default
    Usuario(): id(0), nombre(""), tipo(""){};
    Usuario(int id_num, string nom, string tip):
    id(id_num), nombre(nom), tipo(tip){};

    int get_id(){
        return id;
    }
    string get_nombre(){
        return nombre;
    }
    string get_tipo(){
        return tipo;
    }
    virtual int verificar_usuario() = 0; //Metodo abstracto que va a ser sobreescrito
    virtual string to_string() = 0;
};

class Lector: public Usuario { //Herencia desde clase usuario a clase lector
    private:
    int libro_rentado;
    public:
    Lector(): Usuario(0, "", "Lector") {};
    Lector(int id, string nombre, int librent): 
    Usuario(id, nombre, "Lector"), libro_rentado(librent){};

    int get_id(){
        return id;
    }
    string get_nombre(){
        return nombre;
    }
    int verificar_usuario(){ //sobreescritura
        return libro_rentado; //el contenido es distinto
    }
    string to_string();
};

/*
 * to_string convierte a atributos a string.
 * Conectan todos los valores de los atributos en un string 
 * para ser impreso
 */

string Lector::to_string(){
    stringstream aux;
    aux << "Id es:" << ' ' << id << ' '<< "rol es:" << ' ' << tipo << ' ' 
    << "su nombre es:" << ' ' << nombre << ' ' << "usted ha rentado:" 
    << ' ' << libro_rentado << " libros" << "\n";
    return aux.str();
}

class Staff:public Usuario { //herencia desde clase usuario a clase staff
    private:
    int pin;
    public:
    Staff():Usuario(0,"","Staff"){};
    Staff(int id, string nombre, int _pin):Usuario(id, nombre, "Staff"), pin(_pin){};

    int verificar_usuario(){ //sobreescritura
        return pin; //el contenido es distinto
    }
    string to_string();
};

/*
 * to_string convierte a atributos a string.
 * Conectan todos los valores de los atributos en un string 
 * para ser impreso
 */

string Staff::to_string(){
    stringstream aux;
    aux << "Id es:" << ' ' << id << ' ' << "rol es:" << ' ' << tipo << ' ' 
    << "su nombre es:" << ' ' << nombre << ' ' << "su ID es:" << ' ' << pin << "\n";
    return aux.str();
}

#endif // USUARIO_H_