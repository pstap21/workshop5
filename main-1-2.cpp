#include <iostream>
#include "Orchestra.h"



int main() {

    Orchestra orchestra(4);

    Musician m1("drum", 5);
    Musician m2("flute", 2);
    Musician m3("trumpet", 10);
    Musician m4("triangle", 9);
    Musician m5("horn", 1);


    //add musicians to the orchestra

    if (orchestra.add_musician(m1)) {
        std::cout << "Musician 1 added: " << m1.get_instrument() << std::endl;
    } else {
        std::cout << "Orchestra is full. Musician wasn't added. " << std::endl;
    
    }


    if (orchestra.add_musician(m2)) {
        std::cout << "Musician 2 added: " << m2.get_instrument() << std::endl;
    } else {
        std::cout << "Orchestra is full. Musician wasn't added. " << std::endl;
    
    }


    if (orchestra.add_musician(m3)) {
        std::cout << "Musician 1 added: " << m3.get_instrument() << std::endl;
    } else {
        std::cout << "Orchestra is full. Musician wasn't added. " << std::endl;
    
    }

    if (orchestra.add_musician(m4)) {
        std::cout << "Musician 1 added: " << m4.get_instrument() << std::endl;
    } else {
        std::cout << "Orchestra is full. Musician wasn't added. " << std::endl;
    
    }

    if (orchestra.add_musician(m5)) {
        std::cout << "Musician 1 added: " << m5.get_instrument() << std::endl;
    } else {
        std::cout << "Orchestra is full. Musician wasn't added. " << std::endl;
    
    }

    //printing number of members in the orchestra

    std::cout << "The current number of Orchestra members is: " << orchestra.get_currrent_number_of_members() << std::endl;


    //check if the Orchestra has a musician who plays the flute
    if (orchestra.has_instrument("flute")) {
        std::cout << "The Orchestra has a Flutist." << std::endl;

    } else {
        std::cout << "There is no Flutist in the Orchestra." << std::endl;

    }

    //chest if the Orchestra has a musician who plays the drums
    if (orchestra.has_instrument("drum")){
        std::cout << "The Orchestra has a drummer." <<std::endl;
        
    } else {
        std::cout << "There is no drummer." <<std::endl;
    }

    return 0;
}