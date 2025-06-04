#include <iostream>

using namespace std;

class Animal{
public:
    Animal() {

    };
    virtual void makeSound() {

    }

    virtual ~Animal() {

    };
};

class Dog: public Animal {
    void makeSound() {
        cout << "강아지가 내는 소리: " << "월월" << endl;
    }
};

class Cat: public Animal {
    void makeSound() {
        cout << "고양이가 내는 소리: " << "미야옹" << endl;
    }
};

class Cow: public Animal {
    void makeSound() {
        cout << "소가 내는 소리: " << "음머어" << endl;
    }
};

void print(Animal* animal) {
    animal->makeSound();
}

int main()
{
    Animal* animals = new Animal[3];
    Dog dog;
    Cat cat;
    Cow cow;

    print(&dog);
    print(&cat);
    print(&cow);

    delete[] animals;

    return 0;
}