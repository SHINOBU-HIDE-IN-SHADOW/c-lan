#include <stdio.h>
int main(){
int x;
int y;
int z;
float x1;
float y1;
float z1;
printf("---give me x---\n");
scanf("%d",&x);
printf("---give me y--- \n");
scanf("%d",&y);
printf("---give me z---\n");
scanf("%d",&z);
printf("before x:%d\n",x);
printf("before y:%d\n",y);
printf("before z:%d\n",z);
x1 = (float)x;
y1= (float)y;
z1 = (float)z;
if(x<1 || y<1 || z<1){
	if(x<1){
		if(y+z!=0){
	    x1 = ((float)(y+z)/2);}
	}
	else if(y<1){
		if(x+z!=0){
	    y1 = ((float)(x+z)/2);}
	}
	else if(z<1){
		if(y+x!=0){
	    z1 = ((float)(y+x)/2);}
	}
}
else{
		if(x<y && x<z){
			if(y+z!=0){
			x1 = ((float)(y+z)/2);}
	}
	else if(y<x && y<z){
		if(x+z!=0){
	    y1 = ((float)(x+z)/2);}
	}
	else if(z<x && z<y){
		if(y+x!=0){
	    z1 = ((float)(y+x)/2);}
	}
}

printf("after x:%f\n",x1);
printf("after y:%f\n",y1);
printf("after z:%f\n",z1);
return 1;
}