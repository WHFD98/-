#include<iostream>
#include<windows.h>



using namespace std;

//��������,��һ����һ��,�ڶ���������,������������...
int main(void){
	int row;
	int column;
	cout << "����������:"<<endl;
	cin >> row;

	for(int i=1;i<=row;i++){
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}