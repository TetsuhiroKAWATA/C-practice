#include "Memo.h"

Memo::Memo()//コンストラクタ
{
	objName = "";
	DNum = 0;
}

Memo::~Memo()//デストラクタ
{
	std::cout << "削除されました\n";
	for (int i = 0; i < DNum; i++) {
		delete data[i];
	}
}

void Memo::setObjName(std::string Name)
{
	objName = Name;
	std::cout << "クラスが作成できました。" << Name << '\n';
}

void Memo::outPut()
{
	std::cout << "出力できたことにしてください\n";
}

std::string Memo::putObjName()
{
	return objName;
}

void Memo::setData(std::string dataName, int dataNum) {
	data[DNum++] = new Data(dataName, dataNum);
}

void Memo::showData()
{
	for (int i = 0; i < DNum; i++) {
		data[i]->show();
	}
}