#include<stdio.h>
#include<math.h>
/**
1.菜单
2.加法
3.减法
4.乘法
5.除法
*/

void sum(){
	float m,n;
	printf("请输入两个数:"); 
	scanf("%f%f",&m,&n); 
	printf("计算结果为：%f",m+n);
} 
void sub(){
	float m,n;
	printf("请输入两个数:"); 
	scanf("%f%f",&m,&n); 
	printf("计算结果为：%f",m-n);
} 
void mul(){
	float m,n;
	printf("请输入两个数:"); 
	scanf("%f%f",&m,&n); 
	printf("计算结果为：%d",m*n);
} 
void div(){
	float m,n;
	printf("请输入两个数:"); 
	scanf("%f%f",&m,&n); 
	printf("计算结果为：%d",m/n);
} 
int main (){
	int temp;
	printf("请输入您的选择\n");
	printf("1.加法\n"); 
	printf("2.减法\n"); 
	printf("3.乘法\n"); 
	printf("4.除法\n"); 
	printf("5.推出\n"); 
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
