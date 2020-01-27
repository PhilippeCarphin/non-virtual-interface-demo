//
// Created by Philippe Carphin on 2020-01-26.
//

#ifndef UNTITLED_ANIMAL_H
#define UNTITLED_ANIMAL_H


#include <iostream>

class Animal {
public:
    void make_sound_interface();
    std::string animal_type;
    bool stop_transform = false;
    void break_transform();
private:
    virtual void make_sound();
};


#endif //UNTITLED_ANIMAL_H
