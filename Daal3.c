#include <stdio.h>
int main(){
int x;
int y;
int z;
printf("---give me x---\n");
scanf("%d",&x);
printf("---give me y--- \n");
scanf("%d",&y);
printf("---give me z---\n");
scanf("%d",&z);
if(x<y && y<z){
	printf("x<y<z is true");
}
else{
	printf("x<y<z is false");
}
return 1;
}