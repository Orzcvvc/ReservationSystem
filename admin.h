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
	void addPerson();		//添加帐号
	void deletePerson();	//删除帐号
	void showPerson();		//查看帐号
	void showComputer();	//查看机房信息
	void clearFile();		//清空预约记录
};