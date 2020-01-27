#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

void function_taking_animal_star(Animal *a){
    a->make_sound_interface();
}

int main(){
    auto *cat = reinterpret_cast<Animal*>(new Cat);
    auto *dog = reinterpret_cast<Animal*>(new Dog);
    function_taking_animal_star(cat);
    function_taking_animal_star(dog);
    return 0;
}