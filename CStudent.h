#pragma once
#include "CGrade.h"
class CStudent
{
private:
	char *m_name; // �ǥͩm�W
	char *m_num;  // �ǥ;Ǹ�
	CGrade *c_grade; //�ǥͦ��Z
public:
	CStudent(void);
	virtual ~CStudent(void);
	/*void student_name(void);
	void student_num(void);
    void searchstudent(CStudent & );*/
	CGrade* gotgrade();
	char* getname(void);
    char* getm_num(void);
};

