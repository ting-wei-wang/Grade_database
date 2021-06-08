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
		cout << "請輸入學生姓名:";
		p[fin]=new CStudent;
		//p[fin]->getname() = new char[14];
		cin >> p[fin]->getname();
		
	     //delete[]p[fin]->m_name;
		
		cout << "請輸入學生學號:";
		//p[fin]->getm_num() = new char[5];
		cin >> p[fin]->getm_num();
		
	    fin++;
	}
	if(choice == 2){
		char j[14];
		int i;
		cout << "請輸入學生姓名:";
		cin >> j;
		
		for(i =0 ;i < fin ;i++){
		if(strcmp(j ,p[i]->getname()) == 0){
		cout << "請輸入成績:";
		cin >> p[i] ->gotgrade() ->getgrade()[p[i]->gotgrade()->num()];
		
		//(p[i]->gotgrade()->num())++;
		(p[i]->gotgrade()->last)++;
		if((p[i]->gotgrade()->num())>= 6){
			cout << "成績輸入過多"<< endl;
			 }
		  }
		}
		
	  }
	if(choice == 3){
		char h[14];
		int y,m,sum = 0;
		cout << "請輸入學生姓名:";
		cin >> h;
		for(y = 0;y < fin ;y++){
			if(strcmp(h ,p[y]->getname()) == 0){
				cout << "姓名:" << p[y]->getname() << endl;
				cout << "學號:" << p[y]->getm_num() << endl;
			    cout << "成績:";
				for(m =0;m < p[y]->gotgrade()->num() ;m++){
					cout << p[y]->gotgrade()->getgrade()[m]<<" " ;
			}
			cout << endl << "平均成績:";
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
		cout << "請輸入學生姓名:";
		cin >> h;
		for(y = 0;y < fin ;y++){
			if(strcmp(h ,p[y]->getname()) == 0){
				cout << "姓名:" << p[y]->getname() << endl;
				cout << "學號:" << p[y]->getm_num() << endl;
			cout << "成績:";
			for(m =0;m < p[y]->gotgrade()->num() ;m++){
				cout << p[y]->gotgrade()->getgrade()[m] <<" ";
			}
		  cout << endl << "請問要修改哪個成績呢?" << endl;
		  cin >> num;
		  cout << "請輸入成績:";
		  cin >> grade;
		  p[y]->gotgrade()->getgrade()[num-1] = grade;
			}
		
			}
	}
	if(choice == 5){
		 char h[14];
		 int y,m,i;
		 cout << "請輸入學生姓名:";
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
		
			cout << "姓名:" << p[y]->getname() << endl;
			cout << "學號:" << p[y]->getm_num() << endl;
			cout << "成績:";
			for(m =0;m < p[y]->gotgrade()->num() ;m++){
				cout << p[y]->gotgrade()->getgrade()[m]<<" " ;
			}
			cout << endl << "平均成績:";
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
	int choice0 =0;   //指令選擇0
	char *doc;      //檔案名稱
	//char *big_doc;  // 上層檔
	int choice1=0;    //指令選擇1
	doc = new char[100];
	/*cout << "請選擇下列功能:" << endl;
	cout << "1:輸入資料庫檔案名稱" << endl;
	cout << "2:結束操作" <<endl;*/
	/*cin >> doc;
	ofstream outfile(doc);*/
	while( choice1 !=8){
	 if(choice1!=7)
	 {cout << "請選擇下列功能:" << endl;
	 cout << "1:輸入資料庫檔案名稱" << endl;
	 cout << "2:結束操作" <<endl;
	 cin >> choice0;}     
		
	//outfile << choice0 << endl;
	if(choice0 == 2) break;
	if(choice0 == 1){
		doc = new char[100];
		cout << "請輸入檔案名稱:" ;
		cin >> doc;
		ofstream outfile(doc,ios::binary);
		//outfile << doc << endl;
		while(choice0 == 1){
		cout << "<" << doc << ">" << "請選擇下列以下功能:"  << endl;
		cout << "1:增加一新學生" << endl;
		cout << "2:對一學生增加一新成績" << endl;
		cout << "3:查詢一學生之所有成績" << endl;
		cout << "4:更改一學生成績" << endl;
		cout << "5:刪除某一學生" << endl;
		cout << "6:列印顯示所有資料庫中之資料" << endl;
		cout << "7:存檔並關閉" << doc << "檔案" << endl;
		cout << "8:結束操作" << endl;
		cin >> choice1;
		//outfile << choice1 << endl;
		/*if(choice1 == 7){ 
			cout << "請選擇下列功能:" << endl;
	      cout << "1:輸入資料庫檔案名稱" << endl;
	      cout << "2:結束操作" <<endl;
	      cin >> choice0;
			//選擇=7，結束
			//關檔
			break;
		}*/
		 if(choice1 == 8){           //選擇=8，結束
			//system("pause");
			return 0;
		}
		else{
		command(choice1,doc,outfile);
		if(choice1 == 7){ 
			cout << "請選擇下列功能:" << endl;
	      cout << "1:輸入資料庫檔案名稱" << endl;
	      cout << "2:結束操作" <<endl;
	      cin >> choice0;
			//選擇=7，結束
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