 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
#include <string.h>
#include <io.h>
#include <conio.h>
#include <ctype.h>
struct Final_Id{
	char *name;
	char *password;
	
};
struct ID_Info{
	int initial_uppder;
	int max_alphabet;
	int max_space;
	int space_to;
};
struct Password_Info{
	int max_keys;
	int max_number; 
	int max_alphabet; 
	int max_sign;
	int max_upper;
	
};
void inputer(int *a);
void Random_chooser(struct ID_Info *,struct Password_Info *);
void Name_builder(struct ID_Info *,struct Password_Info *,struct Final_Id *);
void Password_builder(struct ID_Info *,struct Password_Info *b,struct Final_Id *);
void file_maker(struct Final_Id *);
int main(){
		struct ID_Info Id1[1];
		struct Password_Info Id2[1];
		srand(time(NULL));
	Random_chooser(Id1,Id2);
	struct Final_Id Id3[1];
	Password_builder(Id1,Id2,Id3); 
	printf("\nA\n");
	Name_builder(Id1,Id2,Id3);
	printf("\nB\n");
	printf("Name: %s \n Password: %s \n",Id3->name,Id3->password);	
	file_maker(Id3);
		
}
void inputer(int * a){
	printf("1. Default \n 2. setting self \n 3. Load usser settting \n enter the number\n");
	int user_input;
	  scanf("%1d", &user_input);
	 *a = user_input;
}
void Random_chooser(struct ID_Info *a,struct Password_Info *b){
    int max;
	a->initial_uppder = rand()%2+1;
	a->max_alphabet = rand()%8+3;
	a->max_space = rand()%2;
	a->space_to = rand()%2+1;
	b->max_keys = rand()%10+10;
	max = b->max_keys;
	b->max_alphabet = rand()%max+1;
	max -= (int)b->max_alphabet ;
	if(max>0){
	b->max_sign = rand()%+1;
	max = (int)max-b->max_sign;}
	if(max>0){
	b->max_upper = rand()%max+1;
	b->max_number = max;
    
}}
void Name_builder(struct ID_Info *a,struct Password_Info *b,struct Final_Id *c){
	int ender = a->max_alphabet+a->max_space;
	char name[ender+1];
	char word;
	memset( name, 0, ender+1*sizeof(int) );
	for(int i = 0;i<=ender;i++){
		if(a->initial_uppder>=1){
			word  = 'A' + (rand()%26);		
		}
		else{word  = 'a' + (rand()%26);}
		if(i >=3){
			if(a->max_space>0 && i>ender-4 && i >2){
				word = 32;
				a->max_space -=1;
			}
			else{word  = 'a' + (rand()%26);}
		}
		else{word  = 'a' + (rand()%26);}
		
		name[i] = word;
		
	}
	//strncpy(c->name,name,sizeof(name));
	c->name = malloc(sizeof(name));
	strcpy(c->name,name);
}
void Password_builder(struct ID_Info *a,struct Password_Info *b,struct Final_Id *c){
	int ender = b->max_keys;
	char password[ender+1];
	char word;


	for(int i = 0;i<=ender;i++){
		int ar = rand()%2;
		
		if(ar == 0){
		if(b->max_alphabet>0){
			if (b->max_upper >0){
				word  = 'A' + (rand()%26);
				b->max_upper -=1;
				b->max_alphabet -=1;
			}
			else{
				word  = 'a' + (rand()%26);
				b->max_alphabet -=1;
			}
		}
		else{word  = '0' + (rand()%10);}
		}
		else if (ar==1){
			if (b->max_sign>0){
				if(ar==1){
					word  = '!' + (rand()%7);
				}
				else{
					word  = '?' + (rand()%2);
				}
				b->max_sign -=1;
			}
			else{word  = '0' + (rand()%10);}
			
		}
		else{
			word  = '0' + (rand()%10);
		}
		password[i] = word;
	}
	c->password = malloc(sizeof(password));
	strcpy(c->password,password);
		
}
void file_maker(struct Final_Id *c){
    	int want_save;
	do{
	printf("want to save? 1.Yes 2.No");
	scanf("%d",&want_save);
	if(want_save==1){
	char words[1];
	words[0] = '0' + (rand()%10);
	words[1] = 'A' + (rand()%26);
	
    char* extension = ".txt";
	char* directer = "Password\\";
	char* File_name_1 = "A"; 
	char* File_name_2;
	File_name_2 = malloc(sizeof(words));
	strcpy(File_name_2,words);
    char fileSpec[strlen(extension)+strlen(File_name_1)+strlen(File_name_2)+strlen(directer)+1];
    snprintf( fileSpec, sizeof( fileSpec ), "%s%s%s%s", directer,File_name_1,File_name_2,extension );
	printf("File_name_1:%s",File_name_1);
	printf("File_name_2:%s\n",File_name_2);
	//printf("%s",fileSpec);
	int Folder;
	Folder= mkdir("Password");
	if( Folder == 0 )
	{
		printf( "a" );
	}
	else if( Folder == -1 )
	{
	printf( " " );
	}
	FILE * file = fopen(fileSpec, "w");
	if (file == NULL){
		printf("Failed\n");
	}
	fprintf(file,"Name:%s Password:%s",c->name,c->password);
	fclose(file);
	printf("press key to end");
	want_save = 1;
	}
	else if(want_save == 2){printf(" ");}
	else{printf("Please write above number");}
    printf("%d",want_save);
}while(want_save>2 || want_save<1);
}
