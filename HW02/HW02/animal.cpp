#include<iostream>

#include "animal.h"

using namespace std;

void Dog::makeSound() {
	cout << "강아지가 내는 소리: " << "월월" << endl;
}
void Cat::makeSound() {
	cout << "고양이가 내는 소리: " << "미야옹" << endl;
}
void Cow::makeSound() {
	cout << "소가 내는 소리: " << "음머어" << endl;
}