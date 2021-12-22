/**
 * @file computer_unittest.cc
 * @author Gonzalo Márquez (gmdetorres@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-12-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "computer.h"
#include "gtest/gtest.h"
#include <cstdlib>
#include <ctime>
#include <cmath>

// Tests Constructor
TEST(Computer, Constructor){
    Computer c("", "", 5);
    EXPECT_EQ(1, c.getPrecio());
    EXPECT_EQ("", c.getNombre());
    EXPECT_EQ("", c.getModelo());
}

// Tests Constructor2
TEST(Computer, Constructor2){
    Computer c("PDP", "7", 5);
    c.setPrecio(5);
    EXPECT_EQ(5, c.getPrecio());
    EXPECT_EQ("PDP", c.getNombre());
    EXPECT_EQ("7", c.getModelo());
    EXPECT_EQ("PDP, 7", c.getNombreyModelo());
}

//TEST Precio
TEST(Computer, Precio) {
  Computer c("", "", 5);
  c.setPrecio(5);
  EXPECT_EQ(5, c.getPrecio());
}

//TEST Nombre
TEST(Computer, Nombre){
    Computer c("", "", 1);
    EXPECT_FALSE(c.setNombre(""));
    c.setNombre("PDP");
    EXPECT_EQ("PDP", c.getNombre());
}

//TEST Modelo
TEST(Computer, Modelo){
    Computer c("", "", 1);
    EXPECT_FALSE(c.setModelo(""));
    c.setModelo("7");
    EXPECT_EQ("7", c.getModelo());
}

//TEST Nombre, modelo
TEST(Computer, nombremodelo){
    Computer c("", "", 1);
    EXPECT_EQ(", ", c.getNombreyModelo());
    EXPECT_TRUE(c.setNombre("Commodore"));
    EXPECT_EQ("Commodore, ", c.getNombreyModelo());
    EXPECT_TRUE(c.setModelo("Pet"));
    EXPECT_EQ("Commodore, Pet", c.getNombreyModelo());
}