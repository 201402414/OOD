// Test1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#include <iostream>

int main() {
	int num = 0;
	int i = 0;
	int end = 0;

	std::cout << "������ ���α׷� �Դϴ�. " << std::endl;
	
	while (end == 0) {               //end������ 1�� ���ϸ� ������.
		std::cout << "1~9�� �� ���ڸ� �Է��ϼ���. : ";
		std::cin >> num;
	if (num >= 1 && num <= 9) {
		for (i = 1; i < 10; i++) {
			std::cout << num << "*" << i << "=" << num*i << std::endl;
		}
	}
	else {
		std::cout << "���α׷��� �����մϴ�.";
		end = 1;
		}
	}
	return 0;
}

