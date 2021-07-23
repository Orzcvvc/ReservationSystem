#include "teacher.h"

Teacher::Teacher() {
}

Teacher::Teacher(string id, string userName, string password) {
	this->m_TeacherId = id;
	this->m_UserName = userName;
	this->m_Password = password;
}

//教师系统菜单界面√√√
void Teacher::operMenu() {
	cout << "帐号类型：教师    职工编号：" << this->m_TeacherId << endl;
	cout << "\t --------------------------------" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         1.查 看  预 约         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         4.审 核  预 约         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         0.退        出         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t --------------------------------" << endl;
	cout << endl << "请选择您的操作" << endl;
}

//查看预约
void Teacher::showAllOrder() {
}

//审核预约
void Teacher::validOrder() {
}