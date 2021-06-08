#pragma once
#include"CStudent.h"
#include <fstream>
using namespace std;
class CClass
{
private:
	CStudent*p[100];
	int fin;
public:
	
	CClass(void);
	virtual ~CClass(void);
    int  classmain();
	void command(int ,char *,ofstream &);
	
};

