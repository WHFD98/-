//��ӡ�˷��ھ���
#include<iostream>
#include<Windows.h>
#include<iomanip>
using namespace std;
int main(void){

	for(int i=1;i<=9;i++){
		for(int j=1;j<=i;j++){
			if(j==1){
				cout<<j<<"x"<<i<<"="<<setw(1)<<left<<i*j<<" ";
				
			
			}else{
			
				cout<<j<<"x"<<i<<"="<<setw(2)<<left<<i*j<<" ";//setw(2)ʹ�ú���Ŀ��Ϊ2
		
			}
		}
		cout<<endl;
	}
	system("pause");
	return 0;

}