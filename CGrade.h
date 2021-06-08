#pragma once
class CGrade
{
private:
	int *m_grade;
	
public:
	CGrade(void);
	virtual ~CGrade(void);
	/*void setgrade(void);
	void searchgrade(CGrade &);*/
	int* getgrade(void);
    int num(void);
	int last;
};

