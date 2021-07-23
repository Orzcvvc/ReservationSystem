#include "home.h"

//主页菜单界面
void homeMenu() {
	cout << "===============欢迎使用机房预约系统===============" << endl;
	cout << "\t --------------------------------" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         1.学        生         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         2.老        师         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         3.管   理   员         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         0.退        出         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t --------------------------------" << endl;
	cout << endl << "请选择您的身份" << endl;
}

//登录接口
void loginIn(string fileName, int identityType) {
	ifstream ifs;
	ifs.open(fileName, ios::in);
	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}
	string id, userName, password;
	if (identityType == 1) {
		cout << "请输入学号" << endl;
		cin >> id;
	}
	else if (identityType == 2) {
		cout << "请输入职工编号" << endl;
		cin >> id;
	}
	cout << "请输入用户名" << endl;
	cin >> userName;
	cout << "请输入密码" << endl;
	cin >> password;
	if (identityType == 1) {
		string fId, fUserName, fPassword;
		while (ifs >> fId && ifs >> fUserName && ifs >> fPassword) {
			if (fId == id && fUserName == userName && fPassword == password) {
				cout << "学生帐号登录成功" << endl;
				system("pause");
				system("cls");
				Identity* person = new Student(id, userName, password);
				studentSystem(person);
				delete person;
				return;
			}
		}
	}
	else if (identityType == 2) {
		string fId, fUserName, fPassword;
		while (ifs >> fId && ifs >> fUserName && ifs >> fPassword) {
			if (fId == id && fUserName == userName && fPassword == password) {
				cout << "教师帐号登录成功" << endl;
				system("pause");
				system("cls");
				Identity* person = new Teacher(id, userName, password);
				teacherSystem(person);
				delete person;
				return;
			}
		}
	}
	else if (identityType == 3) {
		string fUserName, fPassword;
		while (ifs >> fUserName && ifs >> fPassword) {
			if (fUserName == userName && fPassword == password) {
				cout << "管理员帐号登录成功" << endl;
				system("pause");
				system("cls");
				Identity* person = new Admin(userName, password);
				adminSystem(person);
				delete person;
				return;
			}
		}
	}
	cout << "用户名或密码有误，请重新操作" << endl;
	system("pause");
}

//学生系统
void studentSystem(Identity*& student) {
	while (1) {
		student->operMenu();
		Student* temp = (Student*)student;
		int select;
		cin >> select;
		switch (select) {
		case 1:
			temp->applyOrder();
			break;
		case 2:
			temp->showMyOrder();
			break;
		case 3:
			temp->showAllOrder();
			break;
		case 4:
			temp->cancelOrder();
			break;
		case 0:
			cout << "帐号已退出登录" << endl;
			system("pause");
			return;
			break;
		default:
			cout << "输入有误，请重新选择！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}

//教师系统
void teacherSystem(Identity*& teacher) {
	while (1) {
		teacher->operMenu();
		Teacher* temp = (Teacher*)teacher;
		int select;
		cin >> select;
		switch (select) {
		case 1:
			temp->showAllOrder();
			break;
		case 2:
			temp->validOrder();
			break;
		case 0:
			cout << "帐号已退出登录" << endl;
			system("pause");
			return;
			break;
		default:
			cout << "输入有误，请重新选择！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}

//管理员系统
void adminSystem(Identity*& admin) {
	while (1) {
		admin->operMenu();
		Admin* temp = (Admin*)admin;
		int select;
		cin >> select;
		switch (select) {
		case 1:
			temp->addPerson();
			system("pause");
			system("cls");
			break;
		case 2:
			temp->deletePerson();
			break;
		case 3:
			temp->showPerson();
			break;
		case 4:
			temp->showComputer();
			break;
		case 5:
			temp->clearFile();
			break;
		case 0:
			cout << "帐号已退出登录" << endl;
			system("pause");
			return;
			break;
		default:
			cout << "输入有误，请重新选择！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}