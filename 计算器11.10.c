#include<stdio.h>
#include<math.h>
/**
1.�˵�
2.�ӷ�
3.����
4.�˷�
5.����
*/

void sum(){
	float m,n;
	printf("������������:"); 
	scanf("%f%f",&m,&n); 
	printf("������Ϊ��%f",m+n);
} 
void sub(){
	float m,n;
	printf("������������:"); 
	scanf("%f%f",&m,&n); 
	printf("������Ϊ��%f",m-n);
} 
void mul(){
	float m,n;
	printf("������������:"); 
	scanf("%f%f",&m,&n); 
	printf("������Ϊ��%d",m*n);
} 
void div(){
	float m,n;
	printf("������������:"); 
	scanf("%f%f",&m,&n); 
	printf("������Ϊ��%d",m/n);
} 
int main (){
	int temp;
	printf("����������ѡ��\n");
	printf("1.�ӷ�\n"); 
	printf("2.����\n"); 
	printf("3.�˷�\n"); 
	printf("4.����\n"); 
	printf("5.�Ƴ�\n"); 
	scanf("%d",&temp);
	switch(temp){
		case 1:
			sum();
		case 2:
			sub();	
		case 3:
			mul();
		case 4:
			div();
		case 0:
		    return 0;
						
	}
}
