#pragma once
#include <iostream>
#include <fstream>
#include "student.h"
#include "teacher.h"
#include "admin.h"
using namespace std;

void homeMenu();
void loginIn(string fileName, int identityType);
void studentSystem(Identity*& student);
void teacherSystem(Identity*& teacher);
void adminSystem(Identity*& admin);