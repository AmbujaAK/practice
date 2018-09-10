#include <stdio.h>


int main() {
    printf("%d",printf("FACE")); //valid
    printf("\n");
    printf("",printf("Third "),printf("Second "),printf("First "));
    printf("\n");
    printf("%f%f%f",printf("Third "),printf("Second "),printf("First "));
    printf("\n");
    printf("%d%d%d",printf("Third "),printf("Second "),printf("First "));
    printf("\n");
    printf("FACE" + 2);
}
