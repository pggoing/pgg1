#include <stdio.h>
int main (){
	int price;  //Ӧ����� 
	int change;  //Ӧ�ҽ�� 
	printf("��������Ʒ���:");
	scanf("%d",&price);   //scanf������&���ݷ� 
	change=100-price;
	printf("��һ������%dԪ��ʵ��100Ԫ",price);
	printf("����%dԪ",change);
	return 0;
}
