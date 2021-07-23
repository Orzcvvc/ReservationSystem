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

	void applyOrder();		//申请预约
	void showMyOrder();		//查看我的预约
	void showAllOrder();	//查看所有预约
	void cancelOrder();		//取消预约
	string m_StudentId;		//学生学号
};