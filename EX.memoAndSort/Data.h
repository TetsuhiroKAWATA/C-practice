#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <fstream>

class Data
{
private:
	std::string Name;
	int n;
	std::string Num;
public:
	Data(std::string dataName, int dataNum);
	void show();
	void appendNum(int x);
	std::string getName();
	std::string getNum();
	~Data();
};