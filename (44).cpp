#include<stdio.h>
#include<string.h>
int main() {
    char string[25], reverse_string[25];
    int length, i, j;
    printf("\nInput string to be reversed: ");
    gets(string);
    length=strlen(string);
    for(j=0, i=length-1; j<length;j++, i--) 
    reverse_string[j] = string[i];
    reverse_string[j] = '\0';
    puts(reverse_string);
    return 0;
}
