#include<iostream>
#include<Windows.h>
using namespace std;
int main(void){
	//��ӡ������
	int row;
	cout<<"����������:"<<endl;
	cin >> row;
	
	for(int i=1;i<=row;i++){
		//��ӡ�ո�
		for(int j=0;j<row-i;j++){
		cout<<" ";
		}
		//��ӡ�Ǻ�
		for(int j=0;j<2*i-1;j++){
			cout<<"*";	
		}
		cout<<endl;
	}
	system("pause");
	return 0;

}