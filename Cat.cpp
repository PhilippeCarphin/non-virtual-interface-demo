//
// Created by Philippe Carphin on 2020-01-26.
//

#include <iostream>
#include "Cat.h"

void Cat::make_sound(){
    std::cout << "make 'meow' sound" << std::endl;
}

Cat::Cat(){
    this->animal_type = "Cat";
}
