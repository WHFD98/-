#include<iostream>
#include<Windows.h>
using namespace std;

int main(void){
//�û�ѡ����������������:5��8��
	int row;
	int column;
	cout<<"����������Ҫ������:"<<endl;
	cin>>row;
	cout<<"����������Ҫ������:"<<endl;
	cin>>column;
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
		
			cout<<"*";
		}	
		cout<<endl;
	}

	system("pause");
	return 0;
}