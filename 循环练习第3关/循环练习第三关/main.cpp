#include<iostream>
#include<Windows.h>
using namespace std;

int main(void){
	int row;
	cout<<"����������:"<<endl;
	cin>>row;
	/*��һ�ַ���for(int i=0;i<row;i++){
		for(int j=row;j>i;j--){
			cout<<"*";
		}
	cout<<endl;
	}*/
	//�ڶ��ַ���
	for (int i=0;i<row;i++){
	for(int j=0;j<row-i;j++){
	cout<<"*";
	}
	cout<<endl;
}
	system("pause");
	return 0;
}
