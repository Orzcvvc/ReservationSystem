#pragma once
#include <iostream>
#include "identity.h"
using namespace std;

class Teacher :public Identity {
public:
	Teacher();
	Teacher(string id, string userName, string password);
	virtual void operMenu();

	void showAllOrder();	//�鿴ԤԼ
	void validOrder();		//���ԤԼ
	string m_TeacherId;		//ְ�����
};