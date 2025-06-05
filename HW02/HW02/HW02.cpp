#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

#include "animal.h"
#include "zoo.h"

using namespace std;

//동물 객체를 반환하는 함수
Animal* createRandomAnimal() {
    
    int randInt = rand() % 3; //모든 수를 3으로 나누면 0, 1, 2 중에서 나온다.

    if (randInt == 0) {
        return new Dog;
    }
    else if (randInt == 1) {
        return new Cat;
    }
    else if (randInt == 2) {
        return new Cow;
    }
}

int main()
{
    srand(time(0)); //초기화 한번 해줘야함

    ////////필수기능////////
    const int SIZE = 3;

    Animal* animals[SIZE] = {};

    Dog dog;
    Cat cat;
    Cow cow;

    //동물원 만들기
    Zoo zoo;

    zoo.addAnimal(createRandomAnimal());
    zoo.addAnimal(createRandomAnimal());
    zoo.addAnimal(createRandomAnimal());

    zoo.performActions();

    return 0;
}