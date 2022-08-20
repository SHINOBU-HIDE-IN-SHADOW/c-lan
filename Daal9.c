#include <stdio.h>
int main(){
int a;
int b;
int r;
int s;
printf("---give me a---\n");
scanf("%d",&a);
printf("---give me b--- \n");
scanf("%d",&b);
printf("---give me r---\n");
scanf("%d",&r);
printf("---give me s---\n");
scanf("%d",&s);
if(a%b == r){
	printf("a/b's decimal is equal with r(%d)\n",r);
}
if( a%b == s){
	printf("a/b's decimal is equal with s(%d)\n",s);
}
else{
    printf("a/b's decimal(%d) is equal with none of r or s",a%b);
}
return 1;
}