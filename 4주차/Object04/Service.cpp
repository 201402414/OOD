#include "Service.h"

void Service::bookCreate()
{	
	int index = bookAllCheck();
	std::cout << "å ������ �Է��� �ּ��� : ";
	std::cin.getline(books[index].title, 500);
	std::cout << "���ڸ� �Է��� �ּ��� : ";
	std::cin.getline(books[index].name, 100);
	std::cout << "���� �⵵�� �Է��� �ּ��� : ";
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
		std::cout << a+1 << ") �� ���� �Դϴ�" << std::endl;
		a = a + 1;
	}*/

	for (int i = 0; i < 10; i++) {
		if (books[i].title[1] == '\0') {
			std::cout << i +1<< ") �� ���� �Դϴ�" << std::endl;
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
	std::cout << "å ������ �Է��� �ּ��� : ";
	std::cin.getline(books[change_index].title, 500);
	std::cout << "���ڸ� �Է��� �ּ��� : ";
	std::cin.getline(books[change_index].name, 100);
	std::cout << "���� �⵵�� �Է��� �ּ��� : ";
	std::cin.getline(books[change_index].year, 100);
}
void Service::bookDelete(int index)
{
	Dao dao;
	if (bookOneCheck(index)) {
		std::cout << "�̹� �� ���� �Դϴ�" << std::endl;
	}
	else {
		books[index - 1] = books[11];
	}
}
int Service::bookAllCheck() {
	//��ü ���� ��� �� �� ���� Ž��, <��ȯ�� �ε���>
	
	for (int j = 0; j < 10; j++) {
		if (books[j].title[1] == '\0') {
			return j;
		}
	}
}
bool Service::bookOneCheck(int index) {
	//���� ��� �� Ư�� ��ġ�� �� ���� ���� <��ȯ�� t/f>
	if (books[index - 1].name != '\0') { return false; }
	else { return true; }
	
}