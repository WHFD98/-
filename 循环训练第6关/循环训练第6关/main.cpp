//�������ˮ�ɻ���
//ˮ�ɻ���:3Ϊ����,��λ������֮��,�������������
//˵��:�ϸ��˵ֻ��3λ������,�ſ�����ˮ�ɻ���
#include<iostream>
#include<Windows.h>
using namespace std;




int main(void){

	int a, b, c;
	for(int i=100;i<=999;i++){
	
		a=i%10;
		b=i/10%10;
		c=i/100%10;

		if(a*a*a+b*b*b+c*c*c==i){
			cout<<i<<endl;
		}

	}

	system("pause");
	return 0;
}
