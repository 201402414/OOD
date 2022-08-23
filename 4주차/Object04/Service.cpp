#include "Service.h"

void Service::bookCreate()
{	
	int index = bookAllCheck();
	std::cout << "책 제목을 입력해 주세요 : ";
	std::cin.getline(books[index].title, 500);
	std::cout << "저자를 입력해 주세요 : ";
	std::cin.getline(books[index].name, 100);
	std::cout << "출판 년도를 입력해 주세요 : ";
	std::cin.getline(books[index].year, 100);
}
void Service::bookRead()
{
	/*int a = bookAllCheck();
	for (int j = 0; j< bookAllCheck() ; j++) {
		std::cout << j+1 << ") ";
		books[j].print_bookInfo();
	}
	for (int i = 0; i < 10 - bookAllCheck(); i++) {
		std::cout << a+1 << ") 빈 공간 입니다" << std::endl;
		a = a + 1;
	}*/

	for (int i = 0; i < 10; i++) {
		if (books[i].title[1] == '\0') {
			std::cout << i +1<< ") 빈 공간 입니다" << std::endl;
		}
		else {
			std::cout << i + 1 << ") ";
			books[i].print_bookInfo();
		}
	}
}
void Service::bookUpdate(int index)
{
	int change_index = index-1;
	while (getchar() != '\n');
	std::cout << "책 제목을 입력해 주세요 : ";
	std::cin.getline(books[change_index].title, 500);
	std::cout << "저자를 입력해 주세요 : ";
	std::cin.getline(books[change_index].name, 100);
	std::cout << "출판 년도를 입력해 주세요 : ";
	std::cin.getline(books[change_index].year, 100);
}
void Service::bookDelete(int index)
{
	Dao dao;
	if (bookOneCheck(index)) {
		std::cout << "이미 빈 공간 입니다" << std::endl;
	}
	else {
		books[index - 1] = books[11];
	}
}
int Service::bookAllCheck() {
	//전체 도서 목록 중 빈 공간 탐색, <반환값 인덱스>
	
	for (int j = 0; j < 10; j++) {
		if (books[j].title[1] == '\0') {
			return j;
		}
	}
}
bool Service::bookOneCheck(int index) {
	//도서 목록 중 특정 위치의 빈 공간 유무 <반환값 t/f>
	if (books[index - 1].name != '\0') { return false; }
	else { return true; }
	
}