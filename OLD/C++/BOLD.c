#include <stdio.h>

#define RESET "\x1B[0m"
#define BOLD "\x1B[1m"      //Bold Text Formula...

int main(){
    printf("\nThis is a normal text.");
    printf("\n%sThis is a BOLD text.%s",BOLD,RESET);
    printf("\nThis is a normal text.");
    return 0;
}