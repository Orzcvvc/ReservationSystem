#include "teacher.h"

Teacher::Teacher() {
}

Teacher::Teacher(string id, string userName, string password) {
	this->m_TeacherId = id;
	this->m_UserName = userName;
	this->m_Password = password;
}

//��ʦϵͳ�˵�����̡̡�
void Teacher::operMenu() {
	cout << "�ʺ����ͣ���ʦ    ְ����ţ�" << this->m_TeacherId << endl;
	cout << "\t --------------------------------" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         1.�� ��  Ԥ Լ         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         4.�� ��  Ԥ Լ         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|         0.��        ��         |" << endl;
	cout << "\t|                                |" << endl;
	cout << "\t --------------------------------" << endl;
	cout << endl << "��ѡ�����Ĳ���" << endl;
}

//�鿴ԤԼ
void Teacher::showAllOrder() {
}

//���ԤԼ
void Teacher::validOrder() {
}