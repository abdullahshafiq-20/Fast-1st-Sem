    #include <stdio.h>
    void swap(int *ptr1, int *ptr2);
    int main()
    {
        int x[10];
        int j, n;
        printf("How many Elements...\n");
        scanf("%d", &n);
        printf("Enter Elements one by one\n");
        for (j = 0; j < n; j++)
        {
            scanf("%d", x + j);
        }
        swap(x + 0, x + 1);
        printf("\nResultant Array...\n");
        for (j = 0; j <n ; j++)
        {
            printf("X[%d] = %d\n", j, x[j]);
        }
    }
    void swap(int *ptr1, int *ptr2 )
    {
        int  temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
    
    
    
    
    
    
    