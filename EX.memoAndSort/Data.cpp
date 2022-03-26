#include "Data.h"

Data::Data(std::string dataName, int dataNum)
{
	Name = dataName;
	Num = dataNum;
}

Data::~Data()
{

}

void Data::show()
{
	std::cout << Name << ':' << Num << '\n';
}

void Data::appendNum(int x) {

}