#pragma once
#include <iostream>
using namespace std;

class Identity {
public:
	~Identity() {};
	virtual void operMenu() = 0;	//�˵�����
	string m_UserName;				//�û���
	string m_Password;				//����
};