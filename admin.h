#pragma once
#include <iostream>
#include <fstream>
#include "identity.h"
#include "globalFile.h"
using namespace std;

class Admin :public Identity {
public:
	Admin();
	Admin(string userName, string password);
	virtual void operMenu();
	void addPerson();		//����ʺ�
	void deletePerson();	//ɾ���ʺ�
	void showPerson();		//�鿴�ʺ�
	void showComputer();	//�鿴������Ϣ
	void clearFile();		//���ԤԼ��¼
};