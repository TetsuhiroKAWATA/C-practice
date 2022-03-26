#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

class Data
{
private:
	std::string Name;
	std::string Num;
public:
	Data(std::string dataName, int dataNum);
	void show();
	~Data();
};