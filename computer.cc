/**
 * @file computer.cc
 * @author Gonzalo Marquez (gmdetorres@gmail.com)
 * @brief definition methods of class Computer
 * @version 0.1
 * @date 2021-12-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "computer.h"
#include <cstdio>

Computer::Computer(std::string nombre, std::string modelo, int precio){
    precio=1;
    if(nombre==""){
        nombre="Ninguno";
    }
    else{
        setNombre(nombre);
    }

    if(modelo==""){
        modelo="Ninguno";
    }
    else{
        setModelo(modelo);
    }
    setPrecio(precio);
}

bool Computer::setNombre(std::string nombre){
    if(nombre==""){
        return false;
    }
    nombre_=nombre;
    return true;
}

bool Computer::setModelo(std::string modelo){
    if(modelo==""){
        return false;
    }
    modelo_=modelo;
    return true;
}

bool Computer::setPrecio(int precio){
    if(precio>0){
        precio_=precio;
        return true;
    }
    return false;
}