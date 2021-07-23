#include <iostream>
#include "home.h"
#include "student.h"
#include "teacher.h"
#include "admin.h"
using namespace std;

int main() {
	while (1) {
		homeMenu();
		int select;
		cin >> select;
		switch (select) {
		case 1:
			loginIn(STUDENT_FILE, 1);
			system("cls");
			break;
		case 2:
			loginIn(TEACHER_FILE, 2);
			system("cls");
			break;
		case 3:
			loginIn(ADMIN_FILE, 3);
			system("cls");
			break;
		case 0:
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新选择！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	return 0;
}