//����һ��10���Ƶ�������,����ת��Ϊ2�������
//ʹ�õ�����
#include<iostream>
#include<Windows.h>


using namespace std;
int main(void){
	int ret[32];
	int n;
	int i;
	cout<<"������һ��������:"<<endl;
	cin>>n;
	if(n<=0){
		cout<<"����!����ȷ����һ��������:"<<endl;
		system("pause");
		return 0;
	}
	i=0;
	while(n!=0){
		ret[i]=n%2;
		n=n/2;
		i++;
	}
	for(i--;i>=0;i--){//֮������i--����Ϊǰ��ѭ����,i++��������һ��,����Ҫi--���˻���
	
	cout<<ret[i];
	
	}
	cout<<endl;
	system("pause");
	return 0;

}