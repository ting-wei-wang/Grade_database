#include <stdlib.h>
#include <iostream>
#include <fstream>
#include "CClass.h"
#include "CStudent.h"
#include "CGrade.h"
using namespace std;


CClass::CClass(void)
{
	fin =0;
}


CClass::~CClass(void)
{
}


//1~6
void CClass::command(int choice,char *doc, ofstream &os){
	CStudent a;
	CGrade ag;
	if(choice == 1){
		cout << "�п�J�ǥͩm�W:";
		p[fin]=new CStudent;
		//p[fin]->getname() = new char[14];
		cin >> p[fin]->getname();
		
	     //delete[]p[fin]->m_name;
		
		cout << "�п�J�ǥ;Ǹ�:";
		//p[fin]->getm_num() = new char[5];
		cin >> p[fin]->getm_num();
		
	    fin++;
	}
	if(choice == 2){
		char j[14];
		int i;
		cout << "�п�J�ǥͩm�W:";
		cin >> j;
		
		for(i =0 ;i < fin ;i++){
		if(strcmp(j ,p[i]->getname()) == 0){
		cout << "�п�J���Z:";
		cin >> p[i] ->gotgrade() ->getgrade()[p[i]->gotgrade()->num()];
		
		//(p[i]->gotgrade()->num())++;
		(p[i]->gotgrade()->last)++;
		if((p[i]->gotgrade()->num())>= 6){
			cout << "���Z��J�L�h"<< endl;
			 }
		  }
		}
		
	  }
	if(choice == 3){
		char h[14];
		int y,m,sum = 0;
		cout << "�п�J�ǥͩm�W:";
		cin >> h;
		for(y = 0;y < fin ;y++){
			if(strcmp(h ,p[y]->getname()) == 0){
				cout << "�m�W:" << p[y]->getname() << endl;
				cout << "�Ǹ�:" << p[y]->getm_num() << endl;
			    cout << "���Z:";
				for(m =0;m < p[y]->gotgrade()->num() ;m++){
					cout << p[y]->gotgrade()->getgrade()[m]<<" " ;
			}
			cout << endl << "�������Z:";
			for(m =0;m < p[y]->gotgrade()->num() ;m++){
				sum = sum + p[y]->gotgrade()->getgrade()[m];
			}
			cout << sum / p[y]->gotgrade()->num() << endl;

     }
		}
	}
	if(choice == 4){
	    char h[14];
		int y,m,num,sum = 0,grade;
		cout << "�п�J�ǥͩm�W:";
		cin >> h;
		for(y = 0;y < fin ;y++){
			if(strcmp(h ,p[y]->getname()) == 0){
				cout << "�m�W:" << p[y]->getname() << endl;
				cout << "�Ǹ�:" << p[y]->getm_num() << endl;
			cout << "���Z:";
			for(m =0;m < p[y]->gotgrade()->num() ;m++){
				cout << p[y]->gotgrade()->getgrade()[m] <<" ";
			}
		  cout << endl << "�аݭn�ק���Ӧ��Z�O?" << endl;
		  cin >> num;
		  cout << "�п�J���Z:";
		  cin >> grade;
		  p[y]->gotgrade()->getgrade()[num-1] = grade;
			}
		
			}
	}
	if(choice == 5){
		 char h[14];
		 int y,m,i;
		 cout << "�п�J�ǥͩm�W:";
		 cin >> h;
		 for(y = 0;y < fin ;y++){
			 if(strcmp(h ,p[y]->getname()) == 0){
          i = y;
           for(y = i;y < fin-1 ;y++){
		      p[y] = p[y+1];
		   }
		 }
		 }
		 fin--;
}
	
	if(choice == 6){
		char h[14];
		int y,m,sum = 0;
		
		
		for(y = 0;y < fin ;y++){
		
			cout << "�m�W:" << p[y]->getname() << endl;
			cout << "�Ǹ�:" << p[y]->getm_num() << endl;
			cout << "���Z:";
			for(m =0;m < p[y]->gotgrade()->num() ;m++){
				cout << p[y]->gotgrade()->getgrade()[m]<<" " ;
			}
			cout << endl << "�������Z:";
			for(m =0;m < p[y]->gotgrade()->num() ;m++){
				sum = sum + p[y]->gotgrade()->getgrade()[m];
			}
			cout << sum / p[y]->gotgrade()->num() << endl;
			sum =0;
         }
		
	}
	if (choice ==7){
		
		int y,m;
		for(y = 0;y< fin;y++){
			os << p[y]->getname()<<endl;
			os << p[y]->getm_num()<<endl;
			for(m =0;m < p[y]->gotgrade()->num() ;m++){
				os << p[y]->gotgrade()->getgrade()[m] ;
			}
		}
		
	}
	}




int CClass::classmain()
{
	int choice0 =0;   //���O���0
	char *doc;      //�ɮצW��
	//char *big_doc;  // �W�h��
	int choice1=0;    //���O���1
	doc = new char[100];
	/*cout << "�п�ܤU�C�\��:" << endl;
	cout << "1:��J��Ʈw�ɮצW��" << endl;
	cout << "2:�����ާ@" <<endl;*/
	/*cin >> doc;
	ofstream outfile(doc);*/
	while( choice1 !=8){
	 if(choice1!=7)
	 {cout << "�п�ܤU�C�\��:" << endl;
	 cout << "1:��J��Ʈw�ɮצW��" << endl;
	 cout << "2:�����ާ@" <<endl;
	 cin >> choice0;}     
		
	//outfile << choice0 << endl;
	if(choice0 == 2) break;
	if(choice0 == 1){
		doc = new char[100];
		cout << "�п�J�ɮצW��:" ;
		cin >> doc;
		ofstream outfile(doc,ios::binary);
		//outfile << doc << endl;
		while(choice0 == 1){
		cout << "<" << doc << ">" << "�п�ܤU�C�H�U�\��:"  << endl;
		cout << "1:�W�[�@�s�ǥ�" << endl;
		cout << "2:��@�ǥͼW�[�@�s���Z" << endl;
		cout << "3:�d�ߤ@�ǥͤ��Ҧ����Z" << endl;
		cout << "4:���@�ǥͦ��Z" << endl;
		cout << "5:�R���Y�@�ǥ�" << endl;
		cout << "6:�C�L��ܩҦ���Ʈw�������" << endl;
		cout << "7:�s�ɨ�����" << doc << "�ɮ�" << endl;
		cout << "8:�����ާ@" << endl;
		cin >> choice1;
		//outfile << choice1 << endl;
		/*if(choice1 == 7){ 
			cout << "�п�ܤU�C�\��:" << endl;
	      cout << "1:��J��Ʈw�ɮצW��" << endl;
	      cout << "2:�����ާ@" <<endl;
	      cin >> choice0;
			//���=7�A����
			//����
			break;
		}*/
		 if(choice1 == 8){           //���=8�A����
			//system("pause");
			return 0;
		}
		else{
		command(choice1,doc,outfile);
		if(choice1 == 7){ 
			cout << "�п�ܤU�C�\��:" << endl;
	      cout << "1:��J��Ʈw�ɮצW��" << endl;
	      cout << "2:�����ާ@" <<endl;
	      cin >> choice0;
			//���=7�A����
			//outfile.close();
			break;
		}
		}
		}
	   delete[]doc;
	}
	}
    
	//delete[]big_doc;
	
	return 0;
}