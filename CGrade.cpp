#include "CGrade.h"
#include "CStudent.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
CGrade::CGrade(void)
{
	//CGrade a;
	m_grade = new int[6];
	last =0;
}


CGrade::~CGrade(void)
{
}


/*void CGrade::setgrade(void)
{
	//CGrade a;
	//CStudent b;
	int i;
	//a.m_grade = new int[6];
	cin >> i;
	m_grade[last]=i;
	last++;
	cout << last <<endl;
	if(last >= 6){
		cout << "��J�Ӧh���Z�F" << endl;
	}
	
}


/*void CGrade::searchgrade(CGrade &bg)
{
	CGrade cg;
	if(cg.m_grade == bg.m_grade){
		cout << "���Z:" << bg.m_grade����<< endl;
		cout << ":" << bg.m_grade���� << endl;
	}
	else{
		cout << "��Ʈw�䤣��Ӿǥ�" << endl;
	}
}
*/

int* CGrade::getgrade(void)
{
	return m_grade;
}


int CGrade::num(void)
{
	return last;
}
