#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;
    int sum = 0;
    int val = 1;
    scanf("%d %d", &A, &B);
    
    int *arr = (int*)malloc(B * sizeof(int));
    
    for(int i = 0; i < B;)
    {
        for(int j = 0; j < val && j < B; j++)
            arr[i++] = val;
        val++;
    }
    
    for(int i = A-1; i < B; i++)
        sum += arr[i];
    
    printf("%d", sum);
    free(arr);
}