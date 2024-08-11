/******************************************************************************

ACTIVIDAD 1. CALCULOS DE EDAD EN C++ 
ELABORADO POR: ABEL HERNANDEZ

*******************************************************************************/

#include <iostream>
#include <stdio.h>

int main()
{
    int edad;
    std::cout <<"ingrese su edad: ";
    std::cin >> edad; 
    
    if (edad >=18) {
        std::cout <<"usted es mayor de edad." <<std::endl;
    } else {
        std::cout <<"usted es menor de edad." <<std::endl;
    }
    
    
    return 0;
    
}