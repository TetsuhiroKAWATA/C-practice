#include "Data.h"

Data::Data(std::string dataName, int dataNum)
{
	Name = dataName;
	n = dataNum;
	Num = std::to_string(n);
}

Data::~Data()
{

}

void Data::show()
{
	std::cout << "E" << Name << ':' << Num << '\n';
}

void Data::appendNum(int x)
{
	std::string tmp = std::to_string(x);
	Num += '+';
	Num += tmp;
}

std::string Data::getName()
{
	return Name;
}

std::string Data::getNum()
{
	return Num;
}