#include <stdio.h>
int main(){
int a;
int b;
int c;
int d;
printf("---give me a---\n");
scanf("%d",&a);
printf("---give me b--- \n");
scanf("%d",&b);
printf("---give me c---\n");
scanf("%d",&c);
printf("---give me d---\n");
scanf("%d",&d);
printf("before a:%d\n",a);
printf("before b:%d\n",b);
printf("before c:%d\n",c);
printf("before d:%d\n",d);
if(a<=b && b<=c && c<=d){ a=d;b=d;c=d;}
else if(a>b && b>c&& c>d){ printf("a");}
else{a *=a; b *=b; c*=c; d*=d;}
printf("after a:%d\n",a);
printf("after b:%d\n",b);
printf("after c:%d\n",c);
printf("after d:%d\n",d);
return 1;
}