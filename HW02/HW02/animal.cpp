#include<iostream>

#include "animal.h"

using namespace std;

void Dog::makeSound() {
	cout << "�������� ���� �Ҹ�: " << "����" << endl;
}
void Cat::makeSound() {
	cout << "����̰� ���� �Ҹ�: " << "�̾߿�" << endl;
}
void Cow::makeSound() {
	cout << "�Ұ� ���� �Ҹ�: " << "���Ӿ�" << endl;
}