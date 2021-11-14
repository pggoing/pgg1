#include <stdio.h>
int main (){
	int price;  //应付金额 
	int change;  //应找金额 
	printf("请输入商品金额:");
	scanf("%d",&price);   //scanf括号里&传递符 
	change=100-price;
	printf("您一共消费%d元，实付100元",price);
	printf("找您%d元",change);
	return 0;
}
