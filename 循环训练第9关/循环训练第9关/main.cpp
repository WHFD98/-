//����һ��2��������,����ת��Ϊ10�������
//������޷�ֱ�������������,�������ַ�������ķ�������

#include<iostream>
#include<windows.h>
#include<string>
using namespace std;


int main(void){
	string str;
	int p = 1;
	int s = 0;
	cout<<"������һ����������:"<<endl;
	cin>>str;
	for(int i=str.length()-1;i>=0;i--){
		int x = str[i]-'0';//'0'-'0'=0;'1'-'0'=1;���ַ�ת��Ϊ����
		s += x * p;
		p *= 2;
	}
	cout<<s<<endl;
	system("pause");
	return 0;
}