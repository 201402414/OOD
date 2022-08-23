// Test1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>

int main() {
	int num = 0;
	int i = 0;
	int end = 0;

	std::cout << "구구단 프로그램 입니다. " << std::endl;
	
	while (end == 0) {               //end변수가 1로 변하면 끝난다.
		std::cout << "1~9중 한 숫자를 입력하세요. : ";
		std::cin >> num;
	if (num >= 1 && num <= 9) {
		for (i = 1; i < 10; i++) {
			std::cout << num << "*" << i << "=" << num*i << std::endl;
		}
	}
	else {
		std::cout << "프로그램을 종료합니다.";
		end = 1;
		}
	}
	return 0;
}

