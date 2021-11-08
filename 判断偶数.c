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
     printf("x y的和为偶数\n");
   else 
     printf("x y的和为奇数\n");
    if (cha%2==0)
     printf("x y的差为偶数\n");
   else 
     printf("x y的差为奇数\n");
    if (ji%2==0)
     printf("x y的积为偶数\n");
   else 
     printf("x y的积为奇数\n");
   if (shang%2==0)
     printf("x y的商为偶数\n");
   else 
     printf("x y的商为奇数\n");
	 	
	
	return 0;
} 
