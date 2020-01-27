//
// Created by Philippe Carphin on 2020-01-26.
//

#include <iostream>
#include "Dog.h"

Dog::Dog(){
    this->animal_type = "Doggy";
}
void Dog::make_sound(){
    std::cout << "make 'bark' sound" << std::endl;
}

