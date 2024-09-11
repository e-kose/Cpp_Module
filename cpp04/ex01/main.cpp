#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int main() {

    // int numAnimals = 10;
    // Animal* animals[numAnimals];

    // for (int i = 0; i < numAnimals; ++i) {
	// 	if(i >= numAnimals / 2)
	// 		animals[i] = new Cat();
	// 	else
    //     	animals[i] = new Dog();
    // }
    
    // for (int i = 0; i < numAnimals; ++i) {
    //     std::cout << animals[i]->getType() << " makes sound: ";
    //     animals[i]->makeSound();
    // }

    // for (int i = 0; i < numAnimals; ++i) {
	// 	std::cout << std::endl;
	// 	if(i == numAnimals / 2)
	// 		std::cout << "-----------------\n" << std::endl;
    //     delete animals[i]; 
    // }

	Cat originalCat;
    originalCat.getBrain()->setIdea(0, "I want fish!");
    originalCat.getBrain()->setIdea(1, "I want to sleep!");
	
	std::cout << std::endl;

    Cat copiedCat(originalCat);

	std::cout << std::endl;

    std::cout << "Original Cat's first idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Original Cat's second idea: " << originalCat.getBrain()->getIdea(1) << std::endl;

    std::cout << "Copied Cat's first idea: " << copiedCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Cat's second idea: " << copiedCat.getBrain()->getIdea(1) << std::endl;

    originalCat.getBrain()->setIdea(0, "I want to climb a tree!");

    std::cout << "\nAfter changing the original Cat's first idea..." << std::endl;
    std::cout << "Original Cat's first idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Cat's first idea: " << copiedCat.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	
    return 0;
}
