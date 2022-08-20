#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
	char word[20] = {0};
	char match[4] = {0};
	int yes;
	int z = 0;
	int o = 0;
	do{
	printf("---give me a word---\n");
	scanf("%s", &word);  
	if(strlen(word)>20){
		printf("please write less than 20 lenght");
	}}while(strlen(word)>20);    	                  
	for(int i= 0; i<=strlen(word);i++){
		
		if(word[i] == 'z' || word[i]== 'Z'){ z += 1; }
		else if(word[i] == 'o' || word[i]== 'O'){o += 1;}
		else if(word[i] == 'z' || word[i]== 'Z' && word[i-1] == 'o' || word[i-1]== 'O'){yes = 0;}
	}
	if(z == 0 || o == 0){
	    yes = 0;
	}
	else{
	    if(o/z == 2){
	        yes = 1;
	    } 
	    else{yes = 0;}
	}
	if (yes == 1){
	    printf("yes");
	match[0] = 'y';
		match[1] = 'e';
		match[2] = 's';
	}
	else if(yes == 0){
		match[0] = 'n';
		match[1] = 'o';
	}

	printf("Input word is similar?:%s\n", match);   
	printf("----press any key to exit----");
getch();    
}
