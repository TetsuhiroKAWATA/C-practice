#include "Memo.h"

Memo::Memo()//�R���X�g���N�^
{
	objName = "";
	DNum = 0;
}

Memo::~Memo()//�f�X�g���N�^
{
	std::cout << "�폜����܂���\n";
	for (int i = 0; i < DNum; i++) {
		delete data[i];
	}
}

void Memo::setObjName(std::string Name)
{
	objName = Name;
	std::cout << "�N���X���쐬�ł��܂����B" << Name << '\n';
}

void Memo::outPut()
{
	std::cout << "�o�͂ł������Ƃɂ��Ă�������\n";
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