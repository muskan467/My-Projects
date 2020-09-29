#include <stdio.h>

#include <stdlib.h>

void two_sum(int *, int, int);

int main()
{
    int *ptr, n, target;
    printf("enter the size :");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d number :", i + 1);
        scanf("%d", ptr + i);
    }
    printf("enter the target sum: ");
    scanf("%d", &target);
    two_sum(ptr, n, target);
    return 0;
}

void two_sum(int *ptr, int n, int target)
{
    int index, temp;
    int hash[10] = {0};
    for (index = 0; index < n; index++)
    {
        temp = target - *(ptr + index);
        if (temp >= 0 && hash[temp] == 1)
            printf("pair with given target sum %d is"
                   "(%d, %d)\n",
                   target, *(ptr + index), temp);
        hash[*(ptr + index)] = 1;
    }
}