#include "home.h"

//��ҳ�˵�����
void homeMenu() {
	cout << "===============��ӭʹ�û���ԤԼϵͳ===============" << endl;
	cout << "\t --------------------------------" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         1.ѧ        ��         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         2.��        ʦ         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         3.��   ��   Ա         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         0.��        ��         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t --------------------------------" << endl;
	cout << endl << "��ѡ���������" << endl;
}

//��¼�ӿ�
void loginIn(string fileName, int identityType) {
	ifstream ifs;
	ifs.open(fileName, ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	string id, userName, password;
	if (identityType == 1) {
		cout << "������ѧ��" << endl;
		cin >> id;
	}
	else if (identityType == 2) {
		cout << "������ְ�����" << endl;
		cin >> id;
	}
	cout << "�������û���" << endl;
	cin >> userName;
	cout << "����������" << endl;
	cin >> password;
	if (identityType == 1) {
		string fId, fUserName, fPassword;
		while (ifs >> fId && ifs >> fUserName && ifs >> fPassword) {
			if (fId == id && fUserName == userName && fPassword == password) {
				cout << "ѧ���ʺŵ�¼�ɹ�" << endl;
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
				cout << "��ʦ�ʺŵ�¼�ɹ�" << endl;
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
				cout << "����Ա�ʺŵ�¼�ɹ�" << endl;
				system("pause");
				system("cls");
				Identity* person = new Admin(userName, password);
				adminSystem(person);
				delete person;
				return;
			}
		}
	}
	cout << "�û������������������²���" << endl;
	system("pause");
}

//ѧ��ϵͳ
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
			cout << "�ʺ����˳���¼" << endl;
			system("pause");
			return;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}

//��ʦϵͳ
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
			cout << "�ʺ����˳���¼" << endl;
			system("pause");
			return;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}

//����Աϵͳ
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
			cout << "�ʺ����˳���¼" << endl;
			system("pause");
			return;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}