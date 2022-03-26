#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <algorithm>

class Data
{
private:
	std::string Name;
	int Num;
public:
	Data(std::string dataName, int dataNum);
	void show();
	void appendNum(int x);
	~Data();
};