#include <stdio.h>
int main(){
int number;
int leng;
do{printf("---give me a number---\n"); 
scanf("%d",&number); 
if(number < 100){
    printf("give me bigger than 100\n");
    
}}
while(number < 100);
leng = number/100;
if(leng>9){
	leng %= 10;
}
printf("hundreds place of number = %d",leng);

return 1;
}