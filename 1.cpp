#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int length, i;

    printf("Enter your name: ");
    scanf("%s", name);

    length = strlen(name);

    printf("Name from back side: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", name[i]);
    }

    printf("\n");
    return 0;
}
