#include "CStudent.h"
#include <stdlib.h>
#include <iostream>

using namespace std;
CStudent::CStudent(void)
{
	c_grade = new CGrade ;
	m_name = new char[14];
	m_num = new char[5];
}


CStudent::~CStudent(void)
{
}

//


//



/*void CStudent::searchstudent(CStudent &b )
{
	CStudent c;
	if(strcmp(c.m_name , b.m_name) == 0){
		cout << "姓名:" << b.m_name << endl;
		cout << "學號:" << b.m_num << endl;
		//cout << "成績:"
	}
	else{
		cout << "資料庫找不到該學生" << endl;
	}
	
}*/
CGrade* CStudent:: gotgrade(){
	return c_grade;
}


char* CStudent::getname(void)
{
	return m_name;
}


char* CStudent::getm_num(void)
{
	return m_num;
}
