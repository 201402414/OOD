#pragma once
#ifndef DAO_H_
#define DAO_H_
#include <iostream>

class Dao
{
public:
	char title[500] = { 0, };
	//도서 이름
	char name[100] = { 0, };
	//도서 저자
	char year[100] = { 0, };
	//출판 년도
	void print_bookInfo();
	//도서 정보 출력 함수
};
#endif
