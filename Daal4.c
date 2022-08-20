#include <stdio.h>
int main(){
int x;
int y;
int z;
int max;
int min;
printf("---give me x---\n");
scanf("%d",&x);
printf("---give me y--- \n");
scanf("%d",&y);
printf("---give me z---\n");
scanf("%d",&z);
max = x;
min= x;
if(x<y){
	max = y;
}
else if(x>y){
    min = y;
}
if(y<z){
	max = z;
}
else if(y>z){
    min = z;
}
printf("Max:%d \n",max);
printf("Min %d \n",min);
return 1;
}