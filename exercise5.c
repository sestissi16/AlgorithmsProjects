#include <stdio.h>

int main() {
    FILE *fp = NULL;
    fp = fopen("/eccs/users/sestissi16/Algorithms/testdata.txt", "w+");
    if(fp == NULL)
        return 0;
    int num1; int num2; int num3; int num4; int num5;
    printf("Enter five numbers: ");
    scanf("%d %2d %3d %4d %5d", &num1, &num2, &num3, &num4, &num5);

    fprintf(fp,"These are the numbers you entered:\n");
    fprintf(fp,"%1d, %2d, %3d, %4d, %5d\n", num1, num2, num3, num4, num5);
    fclose(fp);
	
    return 0;
   
}