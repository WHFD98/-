/*����һ�仰,Ȼ�������ַ����Ե���Ϊ��λ,��ת���
���罫"Alice call Jack"ת��Ϊ"Jack call Alice"
ʵ���ٶ����,�ƶ�����
			123 45 678
	����1	����678 45 123												����2			��һ��:���Ե���Ϊ��λ��һ��,   321 54 876
			����876 54 321																�ڶ���:�ٰ����������ٷ�һ��.   678 45 123
			�ȷ�����,����ÿ������Ϊ��λ,�ٷ�һ��.
*/
#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;
//�÷���2
int main(void){
	char str[256];
	int i = 0;
	cout<<"������һ�仰(Ӣ��)"<<endl;
	gets_s(str,sizeof(str));
	while(str[i]){
		//����ǰ��Ŀո�
		//��ѭ��������,str[i]����һ�����ʵĵ�һ����ĸ
		while(str[i] == ' ')i++;
		int j = i;
		//��ѭ������֮��,str[j]��������ʺ������һ��λ��
		while(str[j] != ' ' && str[j])j++;
		//��ת�������
		for(int k1=i,k2=j-1;k1<k2;k1++,k2--){
			char tmp = str[k1];
			str[k1] = str[k2];
			str[k2] = tmp;
		}
		i = j;//��i������һ�����ʵ�λ��
	}
	for(int k1 = 0,k2=i-1;k1<k2;k1++,k2--){
			char tmp = str[k1];
			str[k1] = str[k2];
			str[k2] = tmp;
	}
	cout<<str<<endl;
	system("pause");
	return 0;
}
