#pragma once
#include <iostream>
using namespace std;

class Identity {
public:
	~Identity() {};
	virtual void operMenu() = 0;	//菜单界面
	string m_UserName;				//用户名
	string m_Password;				//密码
};