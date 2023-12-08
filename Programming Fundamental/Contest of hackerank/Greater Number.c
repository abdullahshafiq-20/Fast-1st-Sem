#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A, B, C;
    scanf("%d%d%d",&A,&B,&C);
    if (A >= B && A >= C)
        printf("\n%d", A);
    else if (B >= A && B >= C)
        printf("\n%d", B);
    else if (C >= A && C >= B)
        printf("\n%d", C);
    return 0;
}