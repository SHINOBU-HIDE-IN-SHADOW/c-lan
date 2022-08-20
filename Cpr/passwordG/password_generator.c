 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

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
void Self_chooser(struct ID_Info *,struct Password_Info *);
void Load_txt(struct ID_Info *,struct Password_Info *);
void Name_builder(struct ID_Info *,struct Password_Info *);
void Password_builder(struct ID_Info *,struct Password_Info *,struct Final_Id *);
int main(){
		int user_input;
		inputer(&user_input);
		struct ID_Info Id1;
		struct Password_Info Id2;
	do{	
	  switch(user_input){
		  case 1: Random_chooser(&Id1,&Id2);break;
		  case 2: Self_chooser(&Id1,&Id2);break;
		  case 3: Load_txt(&Id1,&Id2);break;
		  default: printf("Not in menu\n");inputer(&user_input);
		}}while(user_input > 3 || user_input<0);
	  
}
void inputer(int * a){
	printf("1. Default \n 2. setting self \n 3. Load usser settting \n enter the number\n");
	int user_input;
	  scanf("%1d", &user_input);
	 *a = user_input;
}
void Random_chooser(struct ID_Info *a,struct Password_Info *b){
	
	srand(time(NULL));
	a->initial_uppder = rand()%2+1;
	a->max_alphabet = rand()%8+3;
	a->max_space = rand()%2+1;
	a->space_to = rand()%2+1;
	b->max_keys = rand()%10+10;
	b->max_number = rand()%b->max_keys;
	b->max_alphabet = rand()%(b->max_keys-b->max_number);
	b->max_sign = rand()%(b->max_keys-b->max_number-b->max_alphabet);
	b->max_upper = rand()%(b->max_keys-b->max_number-b->max_alphabet-b->max_sign);
	Name_builder(&a,&b);
}
void Self_chooser(struct ID_Info *a,struct Password_Info *b){
	printf("initial upper 1.True 2. False");
	scanf("%d", &a->initial_uppder);
	printf("max alphabets");
	scanf("%d", &a->max_alphabet);
	printf("max space");
	scanf("%d", &a->max_space);
	printf("space to underline 1.True 2. False");
	scanf("%d", &a->space_to);
	printf("max number");
	scanf("%d", &b->max_number);
	printf("max alhpabet");
	scanf("%d", &b->max_alphabet);
	printf("max sign");
	scanf("%d", &b->max_sign);
	printf("max upper");
	scanf("%d", &b->max_upper);
	b->max_keys = b->max_number+b->max_alphabet+b->max_sign+b->max_upper;
	printf("max number %d", b->max_keys);
	int want_save;
	do{
	printf("want to save? 1.Yes 2.No");
	scanf("%d",want_save);
	if(want_save==1){
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	char* at = tm.tm_mday; 
	char* bt = tm.tm_hour; 
    char* extension = ".txt";
    char fileSpec[strlen(at)+strlen(bt)+strlen(extension)+1];
    snprintf( fileSpec, sizeof( fileSpec ), "%s%s%s", at, bt,extension );
	FILE * file = fopen(fileSpec, "w");
	if (file == NULL){
		printf("Failed\n");
	}
	fprintf(file,"%d %d %d %d %d %d %d %d %d",a->initial_uppder,a->max_alphabet,a->max_space,
	a->space_to,b->max_keys,b->max_number,b->max_alphabet,b->max_sign,b->max_upper);
	fclose(file);
	}
	else if(want_save == 2){printf(" ");}
	else{printf("Please write above number");}}while(want_save>2 || want_save<1);
	Name_builder(&a,&b);
}
void Load_txt(struct ID_Info *a,struct Password_Info *b){
	FILE * file = fopen(fileSpec, "w");
	if (file == NULL){
		printf("Failed\n");
		return 1
	}
	fscanf(file,"%d %d %d %d %d %d %d %d %d",a->initial_uppder,a->max_alphabet,a->max_space,
	a->space_to,b->max_keys,b->max_number,b->max_alphabet,b->max_sign,b->max_upper);
	fclose(file);
	Name_builder(&a,&b);
}
void Name_builder(struct ID_Info *a,struct Password_Info *b){
	
	char name[a->max_alphabet];
	char word;
	struct Final_Id ID;
	for(int i = 0;i<=a->max_alphabet+a->max_space;i++){
		srand(time(NULL));
		if(a->initial_uppder>=1){
			word  = 'A' + (rand()%26);		
		}
		else{word  = 'a' + (rand()%26);}
		if(i >=3){
			if(a->max_space>0){
				word = 32;
				a->max_space -=1;
			}
			else{word  = 'a' + (rand()%26);}
		}
		else{word  = 'a' + (rand()%26);}
		
		name[i] = word;
		
	}
	strncpy(ID.name,name,sizeof(name));
	Password_builder(&a,&b,&ID);
}
void Password_builder(struct ID_Info *a,struct Password_Info *b,struct Final_Id *c){
	
	char password[b->max_keys];
	char word;
	for(int i = 0;i<=b->max_keys;i++){
		srand(time(NULL));
		a = rand()%2;
		srand(time(NULL));
		
		if(a == 0){
		if(b->max_alphabet>0){
			if (b->max_upper >0){
				word  = 'A' + (rand()%26);
				b->max_upper -=1;
			}
			else{
				word  = 'a' + (rand()%26);
				b->max_alphabet -=1;
			}
		}
		else{word  = '0' + (rand()%10);}
		}
		else{word  = '0' + (rand()%10);}
		else if (a==1){
			if (b->max_sign>0){
				a = rand()%2;
				if(a=1){
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
	strncpy(c->password,password,sizeof(password));
	printf("Name: %s \n Password: %s \n",c->name,c->password);	
	int want_save;
	do{
	printf("want to save? 1.Yes 2.No");
	scanf("%d",want_save);
	if(want_save==1){
	char* a = "a"; 
    char* extension = ".txt";
    char fileSpec[strlen(a)+strlen(extension)+1];
    snprintf( fileSpec, sizeof( fileSpec ), "%s%s", a, extension );
	FILE * file = fopen(fileSpec, "w");
	if (file == NULL){
		printf("Failed\n");
	}
	fprintf(file,"%s %s",c->name,c->password);
	fclose(file);
	}
	else if(want_save == 2){printf(" ");}
	else{printf("Please write above number");}}while(want_save>2 || want_save<1);
}
