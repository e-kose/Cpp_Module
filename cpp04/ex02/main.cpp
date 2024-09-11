#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int main() {

    // Animal animal;

    Animal* animal_1 = new Cat();
    Animal* animal_2 = new Dog();
	
    std::cout << std::endl;

    animal_1->makeSound();
    animal_2->makeSound();

    std::cout << std::endl;
    delete animal_1;
    delete animal_2;
    return 0;
}
