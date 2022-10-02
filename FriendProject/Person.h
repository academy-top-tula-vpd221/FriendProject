#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
class Person
{
	char* name;
	int age;
public:
	Person() : name{ nullptr }, age{ 0 } {}
	Person(char* name, int age) : age{ age }
	{
		this->name = new char(strlen(name) + 1);
		strcpy(this->name, name);
	}
	char* GetName();
	int GetAge();
	void SetName(char*);
	void SetAge(int age);
};

