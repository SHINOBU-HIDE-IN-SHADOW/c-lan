#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <io.h>



int main(void) {
int a;
a= mkdir("Password");
if(!a){
	printf("created");
}
else{
	printf("a");
	exit(1);
	
}
printf("a");
getch();
}
