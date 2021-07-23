#include "admin.h"

Admin::Admin() {
}

Admin::Admin(string userName, string password) {
	this->m_UserName = userName;
	this->m_Password = password;
}

//管理员系统菜单界面√√√
void Admin::operMenu() {
	cout << "帐号类型：管理员" << endl;
	cout << "\t --------------------------------" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         1.添 加  帐 号         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         2.删 除  帐 号         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         3.查 看  帐 号         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         4.查看机房信息         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         5.清空预约记录         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         0.退        出         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t --------------------------------" << endl;
	cout << endl << "请选择您的操作" << endl;
}

//添加帐号√√√
void Admin::addPerson() {
	cout << "请选择需要添加的账号类型" << endl;
	cout << "1.学生" << endl;
	cout << "2.教师" << endl;
	int select;
	cin >> select;
	while (select != 1 && select != 2) {
		cout << "无此操作，添加失败" << endl;
		return;
	}
	ofstream ofs;
	string id, userName, password;
	if (select == 1) {
		ofs.open(STUDENT_FILE, ios::out | ios::app);
		cout << "请输入学生学号" << endl;
	}
	else {
		ofs.open(TEACHER_FILE, ios::out | ios::app);
		cout << "请输入教师职工编号" << endl;
	}
	cin >> id;
	cout << "请输入所添加账号的用户名" << endl;
	cin >> userName;
	cout << "请输入所添加账号的密码" << endl;
	cin >> password;
	ofs << id << " " << userName << " " << password << endl;;
	cout << "账号添加成功" << endl;
	ofs.close();
}

//删除帐号
void Admin::deletePerson() {
}

//查看帐号
void Admin::showPerson() {
}

//查看机房信息
void Admin::showComputer() {
}

//清空预约记录
void Admin::clearFile() {
}