#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of an array : \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The reversed array is : \n");
    for (int i = size-1; i>=0 ; i--)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}