//���ָ�����쳲���������
//1,1,2,3,5,8,13,21,....
//�������������,���û�����
//nΪ50��ʱ��,��BUG��,��Χ������,����Int�ķ�Χ��.�����
#include<iostream>
#include<Windows.h>
using namespace std;

int main(void){
	int n =0;
	long long a=1;
	long long b=1;
	long long value;
	cout<<"������쳲��������еĸ���:"<<endl;
	cin>>n;
	if(n<=0){
		cout<<"Ҫ���Ǵ���0������"<<endl;
		return 1;
	
	}
	if(n==1){
		cout<<1<<endl;
		system("pause");
		return 0;
	}
	if(n==2){
		cout<<"1 1"<<endl;
		system("pause");
		return 0;
	}
	cout<<"1 1 ";
	for(int i=3;i<=n;i++){
		value=a+b;
		a=b;
		b=value;
		cout<<value<<" ";
	}
	cout<<endl;
	system("pause");
	return 0;
}