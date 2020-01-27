//
// Created by Philippe Carphin on 2020-01-26.
//

#include "Animal.h"

void Animal::make_sound(){
    std::cout << "SHOULD NOT HAPPEN" << std::endl;
}

void transform_first_part(const std::string & animal_type) {
    std::cout << "TRANSFORM FIRST PART " << animal_type << std::endl;
}
void transform_last_part(const std::string & animal_type) {
    std::cout << "TRANSFORM LAST PART " << animal_type << std::endl;
}
void Animal::break_transform(){
    this->stop_transform = true;
}

void Animal::make_sound_interface() {
    transform_first_part(this->animal_type);
    for (int i = 0; i < 4; i++){
            if (this->stop_transform)
                break;

        this->make_sound();
    }

    transform_last_part(this->animal_type);

}
