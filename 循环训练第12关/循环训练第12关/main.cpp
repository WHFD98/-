/*
����һ��Ӣ���ַ���(һ�仰),ͳ������ĵ��ʸ���
*/
#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;
//���������ո� �����ǿո���� ���������ո�
int main(void){

	char line[256];
	int i = 0;
	int count = 0;
	cout<<"������һ�仰:";
	gets_s(line,sizeof(line));
	//����ǰ��Ŀո�
	while(line[i] == ' '){
		i++;
	}
	//���������ո�
	while(line[i]!='\0'){//'0'=0,��仰��Ч��while(line[i])��Ϊ�㲻����'\0'���൱�ڲ�����0
		//�ǲ����Ƿ���,���Կ�����ôд.
		//���������Ķ���ǿո����(���ǵ���)
		while(line[i]!='\0'&&line[i]!= ' '){//Ҳ������ôд,while(line[i]&&line[i]!=' 'ԭ��ͬ��)
			i++;
		}
		while(line[i] == ' '){
			i++;
	    }	
		count++;
	}
	cout<<"һ����:"<<count<<"������"<<endl;
	system("pause");
	return 0;
}