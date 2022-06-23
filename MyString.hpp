#pragma once
#include <string> 
#include <iostream>

//immutable
class MyString
{
	char* arr;
public:
	MyString();
	MyString(char* input);
	void print();
	//albo append zwraca nowy obiekt typu MyString
	MyString append(char* input); //to spelnia cechy immutability
	//albo append zmienia aktualny obiekt MyString
	void appendToSame(char* input); //to nie spelnia cech immutability

	MyString append(MyString input);
	void appendToSame(MyString input);

	MyString firstWord();
};






