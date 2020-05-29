#include <stdio.h>

int main() {
    int num; int num2; int num3;
    printf("Enter three numbers: ");
    scanf("%2d %i %3d",&num, &num2, &num3);

    printf("Your numbers are %1i, %2i, and %3i\n", num, num2, num3);

    return 0;
}