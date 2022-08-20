#include <stdio.h>
int main(){
int x;
int y;
int z;
int mvalue1;
int mvalue2;
int value1;
int value2;
int max;
int min;
printf("---give me x---\n");
scanf("%d",&x);
printf("---give me y--- \n");
scanf("%d",&y);
printf("---give me z---\n");
scanf("%d",&z);
mvalue1 = x+y+z;
mvalue2 = x*y*z;
value1 = (x+y+z)/2;
value2 = x*y*z;
max = mvalue1;
min= value1;
if(mvalue1<mvalue2){
	max = mvalue2;
}
if(value1>value2){
	min = value2;
}
printf("Max x+y+z:%d \n",mvalue1);
printf("Max x*y*z: %d \n",mvalue2);
printf("Min x+y+z/2:%d \n",value1);
printf("Min x*y*z:%d \n",value2);
printf("Max:%d \n",max);
printf("Max:%d \n",min);
min = min * min +1;
printf("Min*Min+1 %d \n",min);
return 1;
}