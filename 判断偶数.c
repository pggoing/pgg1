#include <stdio.h>
int main (){
	int x,y,he,cha,ji,shang;
	he=x+y;
	cha=x-y;
	ji=x*y;
	shang=x/y;
    scanf("%d",&x);
    scanf("%d",&y);
   if (he%2==0)
     printf("x y�ĺ�Ϊż��\n");
   else 
     printf("x y�ĺ�Ϊ����\n");
    if (cha%2==0)
     printf("x y�Ĳ�Ϊż��\n");
   else 
     printf("x y�Ĳ�Ϊ����\n");
    if (ji%2==0)
     printf("x y�Ļ�Ϊż��\n");
   else 
     printf("x y�Ļ�Ϊ����\n");
   if (shang%2==0)
     printf("x y����Ϊż��\n");
   else 
     printf("x y����Ϊ����\n");
	 	
	
	return 0;
} 
