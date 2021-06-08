#pragma once
#include "CGrade.h"
class CStudent
{
private:
	char *m_name; // 學生姓名
	char *m_num;  // 學生學號
	CGrade *c_grade; //學生成績
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

