#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include <string>
#include "Musician.h"




class Orchestra {
private:
Musician* members;
int max_size;
int current_size;

public:

Orchestra();

Orchestra(int size);

~Orchestra();

int get_currrent_members();

bool has_instrument(std::string instrument);

Musician* get_members();

bool add_musician(Musician new_musician);

};




#endif