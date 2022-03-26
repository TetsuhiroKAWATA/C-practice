#pragma once
#include "Data.h"


class Memo
{
protected:
	std::string objName;
	Data* data[30];
	int DNum;
	std::string fileName;
public:
	Memo();
	void setObjName(std::string Name);
	int outPut();
	std::string putObjName();
	void setData(std::string dataName, int dataNum);
	void showData();
	~Memo();
};
