#include "student.h"

Student::Student() {
}

Student::Student(string id, string userName, string password) {
	this->m_StudentId = id;
	this->m_UserName = userName;
	this->m_Password = password;
}

//ѧ��ϵͳ�˵�����̡̡�
void Student::operMenu() {
	cout << "�ʺ����ͣ�ѧ��    ѧ�ţ�" << this->m_StudentId << endl;
	cout << "\t --------------------------------" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         1.�� ��  Ԥ Լ         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         2.�鿴�ҵ�ԤԼ         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         3.�鿴����ԤԼ         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         4.ȡ ��  Ԥ Լ         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         0.��        ��         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t --------------------------------" << endl;
	cout << endl << "��ѡ�����Ĳ���" << endl;
}

//����ԤԼ
void Student::applyOrder() {
}

//�鿴�ҵ�ԤԼ
void Student::showMyOrder() {
}

//�鿴����ԤԼ
void Student::showAllOrder() {
}

//ȡ��ԤԼ
void Student::cancelOrder() {
}