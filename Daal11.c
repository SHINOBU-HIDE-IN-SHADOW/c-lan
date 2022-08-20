#include <stdio.h>
int main(){
int number;
int leng;
int nsum = 0;
do{printf("---give me a number---\n"); 
scanf("%d",&number); 
if(number > 99){
    printf("give me smaller than 100\n");
    
}}
while(number > 99);
leng = number * number;
while(number>0){
	nsum += number%10;
	number = number/10;
}
nsum = nsum*nsum*nsum;
if(leng ==nsum ){
printf("number square: %d = number digits sum's cube: %d",leng,nsum);
}
else{
	printf(" number square: %d != number digits sum's cube: %d",leng,nsum);
}
return 1;
}