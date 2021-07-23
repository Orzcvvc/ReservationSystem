#pragma once
#include <iostream>
#include "identity.h"
using namespace std;

class Teacher :public Identity {
public:
	Teacher();
	Teacher(string id, string userName, string password);
	virtual void operMenu();

	void showAllOrder();	//查看预约
	void validOrder();		//审核预约
	string m_TeacherId;		//职工编号
};