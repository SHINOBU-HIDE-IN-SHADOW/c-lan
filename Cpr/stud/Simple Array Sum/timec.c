#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* timeConversion(char* s) {
    char* result = malloc(9*sizeof(int));
    char* hor= malloc(2*sizeof(int));
    char* endptr;

if(s[8]==65 && s[8]!=80){
    if(s[0]==49 && s[1]==50){
        char* x1= malloc(2*sizeof(int));
        sprintf (x1, "%d0:", 0);
       for(int x = 0; x<=2;x++){
           *(result+x)= *(x1+x);
    } 
    }
    else{
    for(int x = 0; x<=2;x++){
    *(result+x)= *(s+x);
}}
}
else if(s[8]==80 && s[8]!=65){
        for(int x = 0; x<=2;x++){
    *(hor+x)= *(s+x);
}
int a = strtol(hor, &endptr, 10);

if(s[0]==49 && s[1]==50){a=12,sprintf (hor, "%d:", a);}
else{
    a += 12;
sprintf (hor, "%d:", a);}
   for(int x = 0; x<=2;x++){
    *(result+x)= *(hor+x); 
}
}
    for(int x = 3; x<8;x++){
    *(result+x)= *(s+x);
}
return result;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = timeConversion(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}
