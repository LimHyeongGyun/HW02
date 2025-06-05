#ifndef ZOO_H_
#define ZOO_H_
#include "animal.h"

class Zoo {
private:
    Animal* animals[10]; // ���� ��ü�� �����ϴ� ������ �迭
    int animalCount = 0;
public:
    void addAnimal(Animal* animal);
    void performActions();

    ~Zoo();
};

#endif