#pragma once
#include <iostream>
#include "identity.h"
#include "globalFile.h"
using namespace std;

class Student : public Identity {
public:
	Student();
	Student(string id, string userName, string password);
	virtual void operMenu();

	void applyOrder();		//����ԤԼ
	void showMyOrder();		//�鿴�ҵ�ԤԼ
	void showAllOrder();	//�鿴����ԤԼ
	void cancelOrder();		//ȡ��ԤԼ
	string m_StudentId;		//ѧ��ѧ��
};