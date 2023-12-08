#include <stdio.h>
#include <string.h>
#include <stdlib.h>
main()
{
    int a[6][5];
    int i, j;
    char random[6][5];
    random[5][1] = '4';
    random[5][2] = '2';
    random[5][3] = '7';
    random[5][4] = '1';

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 5 && j == 1 || i == 5 && j == 2 || i == 5 && j == 3 || i == 5 && j == 4)
            {
                continue;
            }
            random[i][j] = ('A' + rand() % 26);
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%c ", random[i][j]);

        printf("\n");
    }

    int score, l, count;
    char ch = 'y';
    char string[100];
    // random[6][5]
    while (ch == 'y' || ch == 'Y')
    {

        printf("Enter a string:");
        fflush(stdin);

        scanf("%s", &string);

        l = strlen(string);
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < l; j++)
            {
                if (string[j] == random[i][j])
                {
                    count++;
                }
            }
            if (count == l)
            {
                break;
            }

            count = 0;
        }

        if (count != l)
        {
            for (j = 0; j < 5; j++)
            {
                for (i = 0; i < l; i++)
                {
                    if (string[i] == random[i][j])
                    {
                        count++;
                    }
                }
                if (count == l)
                {
                    break;
                }
                count = 0;
            }
        }
        if (count == l)
        {
            score++;
            printf("%s is present----->score is %d\n", string, score);
        }
        else
        {
            score--;
            printf("%s in not present---->score is %d\n", string, score);
        }

        printf("Do you want to search more strings?:");
        fflush(stdin);
        scanf("%c",&ch);
    }
}