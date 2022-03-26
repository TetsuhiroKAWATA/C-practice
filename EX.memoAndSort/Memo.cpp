#include "Memo.h"

Memo::Memo()//コンストラクタ
{
	objName = "";
	DNum = 0;
	fileName = "out.txt";
}

Memo::~Memo()//デストラクタ
{
	//std::cout << "削除されました\n";
	for (int i = 0; i < DNum; i++) {
		delete data[i];
	}
}

void Memo::setObjName(std::string Name)
{
	objName = Name;
	std::cout << "クラスが作成できました。" << Name << '\n';
}

int Memo::outPut()
{
	std::ofstream fout;

	fout.open(fileName, std::ios_base::app);
	if (fout.fail()) {
		std::cout << "ファイルが開けませんでした\n";
		return 1;
	}

	fout << objName << '\n';

	for (int i = 0; i < DNum; i++) {
		fout << data[i]->getName() << ':' << data[i]->getNum() << '\n';
	}
	fout << '\n';

	fout.close();
}

std::string Memo::putObjName()
{
	return objName;
}

void Memo::setData(std::string dataName, int dataNum) {
	int TF = -1;
	for (int i = 0; i < DNum; i++) {
		if (data[i]->getName() == dataName) {
			TF = i;
			break;
		}
	}
	if (TF>=0) {
		data[TF]->appendNum(dataNum);
	}
	else {
		data[DNum++] = new Data(dataName, dataNum);
	}
}

void Memo::showData()
{
	for (int i = 0; i < DNum; i++) {
		data[i]->show();
	}
	std::cout << '\n';
}