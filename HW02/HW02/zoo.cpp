#include<iostream>

#include "zoo.h"

using namespace std;

void Zoo::addAnimal(Animal* animal) {
	animals[animalCount] = animal;
	animalCount++;
}

void Zoo::performActions() {
	for (int i = 0; i < animalCount; i++) {
		animals[i]->makeSound();
	}
}

Zoo::~Zoo() {
	for (int i = 0; i < animalCount; i++) {
		delete animals[i];
	}
}