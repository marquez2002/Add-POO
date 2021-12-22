/**
 * @file computer.h
 * @author Gonzalo Márquez (gmdetorres@gmail.com)
 * @brief definition class Computer
 * @version 0.1
 * @date 2021-12-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
#include <string>

class Computer{
    private:
        std::string nombre_;
        std::string modelo_;
        int precio_;
    public:
        Computer(std::string nombre, std::string modelo, int precio);
        bool setNombre(std::string nombre);
        bool setModelo(std::string modelo);
        bool setPrecio(int precio);
        inline std::string getNombre(){return nombre_;};
        inline std::string getModelo(){return modelo_;};
        inline int getPrecio(){return precio_;};
        inline std::string getNombreyModelo(){return (nombre_+", "+modelo_);};
};
#endif