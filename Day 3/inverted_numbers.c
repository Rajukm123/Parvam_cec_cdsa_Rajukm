#include <stdio.h>
int main(){
    int row;
    printf("Enter the number of rows : \n");
    scanf("%d",&row);
    for (int i = row; i >=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}