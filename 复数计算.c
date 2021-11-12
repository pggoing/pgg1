#include <stdio.h>
int main (){
	int s1,s2;
	int x1,x2;
	printf("请输入第一个复数的实部：");
	scanf("%d",&s1); 
	printf("请输入第一个复数的实部：");
	scanf("%d",&s2); 
	printf("请输入第一个复数的虚部：");
	scanf("%d",&x1); 
	printf("请输入第一个复数的虚部：");
	scanf("%d",&x2); 
	printf("赋值阶段完成\n下面进行计算阶段\n");
	int fun;
	 printf("1.加法运算\n");
	 printf("2.减法运算\n");
	 printf("请输入您选择的计算：");  
	scanf("%d",&fun);
	if(fun==1)
	printf("%d+%di",s1+s2,x1+x2);
	else
	printf("%d+%di",s1-s2,x1-x2);
    
	return 0;
	}			
	
	
	
	
	
	
	
	
	

 
