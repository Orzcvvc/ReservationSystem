#include "admin.h"

Admin::Admin() {
}

Admin::Admin(string userName, string password) {
	this->m_UserName = userName;
	this->m_Password = password;
}

//����Աϵͳ�˵�����̡̡�
void Admin::operMenu() {
	cout << "�ʺ����ͣ�����Ա" << endl;
	cout << "\t --------------------------------" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         1.�� ��  �� ��         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         2.ɾ ��  �� ��         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         3.�� ��  �� ��         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         4.�鿴������Ϣ         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         5.���ԤԼ��¼         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         0.��        ��         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t --------------------------------" << endl;
	cout << endl << "��ѡ�����Ĳ���" << endl;
}

//����ʺš̡̡�
void Admin::addPerson() {
	cout << "��ѡ����Ҫ��ӵ��˺�����" << endl;
	cout << "1.ѧ��" << endl;
	cout << "2.��ʦ" << endl;
	int select;
	cin >> select;
	while (select != 1 && select != 2) {
		cout << "�޴˲��������ʧ��" << endl;
		return;
	}
	ofstream ofs;
	string id, userName, password;
	if (select == 1) {
		ofs.open(STUDENT_FILE, ios::out | ios::app);
		cout << "������ѧ��ѧ��" << endl;
	}
	else {
		ofs.open(TEACHER_FILE, ios::out | ios::app);
		cout << "�������ʦְ�����" << endl;
	}
	cin >> id;
	cout << "������������˺ŵ��û���" << endl;
	cin >> userName;
	cout << "������������˺ŵ�����" << endl;
	cin >> password;
	ofs << id << " " << userName << " " << password << endl;;
	cout << "�˺���ӳɹ�" << endl;
	ofs.close();
}

//ɾ���ʺ�
void Admin::deletePerson() {
}

//�鿴�ʺ�
void Admin::showPerson() {
}

//�鿴������Ϣ
void Admin::showComputer() {
}

//���ԤԼ��¼
void Admin::clearFile() {
}