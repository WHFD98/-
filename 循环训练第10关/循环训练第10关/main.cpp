//����һ���ַ���,Ȼ������ַ�����ת���
#include<iostream>
#include<windows.h>
#include<string>


using namespace std;



int main(void){
	string str;
	
	cout<<"�������ַ���:"<<endl;
	cin >> str;
	int i = 0;
	int j =  str.length()-1;
	while(i<j){
		char tmp ;
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	cout<<str<<endl;
	system("pause");
	return 0;
}