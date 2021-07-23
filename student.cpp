#include "student.h"

Student::Student() {
}

Student::Student(string id, string userName, string password) {
	this->m_StudentId = id;
	this->m_UserName = userName;
	this->m_Password = password;
}

//学生系统菜单界面√√√
void Student::operMenu() {
	cout << "帐号类型：学生    学号：" << this->m_StudentId << endl;
	cout << "\t --------------------------------" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         1.申 请  预 约         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         2.查看我的预约         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         3.查看所有预约         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         4.取 消  预 约         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         0.退        出         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t --------------------------------" << endl;
	cout << endl << "请选择您的操作" << endl;
}

//申请预约
void Student::applyOrder() {
}

//查看我的预约
void Student::showMyOrder() {
}

//查看所有预约
void Student::showAllOrder() {
}

//取消预约
void Student::cancelOrder() {
}