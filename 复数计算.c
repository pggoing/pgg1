#include <stdio.h>
int main (){
	int s1,s2;
	int x1,x2;
	printf("�������һ��������ʵ����");
	scanf("%d",&s1); 
	printf("�������һ��������ʵ����");
	scanf("%d",&s2); 
	printf("�������һ���������鲿��");
	scanf("%d",&x1); 
	printf("�������һ���������鲿��");
	scanf("%d",&x2); 
	printf("��ֵ�׶����\n������м���׶�\n");
	int fun;
	 printf("1.�ӷ�����\n");
	 printf("2.��������\n");
	 printf("��������ѡ��ļ��㣺");  
	scanf("%d",&fun);
	if(fun==1)
	printf("%d+%di",s1+s2,x1+x2);
	else
	printf("%d+%di",s1-s2,x1-x2);
    
	return 0;
	}			
	
	
	
	
	
	
	
	
	

 
