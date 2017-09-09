/*
 CodeChef
 Entrance exam question by Aniket C.
 */

#include <stdio.h>


typedef struct details
{
    int sNo, marks[4], totalS;
}
student;

void sort(student list[], int n)
{
    student temp; int j;
    for (int i = 1; i < n; i++)
    {
        if (list[i].totalS < list[i - 1].totalS)
        {
            temp = list[i];
            j = i;
            while (j > 0 && temp.totalS < list[j - 1].totalS)
            {
                list[j] = list[j - 1];
                j--;
            }
            list[j] = temp;
        }
    }
}

int main(void)
{
    printf("No of test cases? ");
    int t; scanf("%d", &t);
    for(int d = 0; d < t; d++)
    {
        printf("Enter the number of students: ");
        int n; scanf("%d", &n);
        printf("Enter the number of entrances? ");
        int e; scanf("%d", &e);
        printf("No of students that can enroll? ");
        int k; scanf("%d", &k);
        printf("Maximum obtainable marks? ");
        int m; scanf("%d", &m);

        student entrance[n + 1];

        for(int i = 0; i < n; i++)
        {
            entrance[i].sNo = i + 1;
            entrance[i].totalS = 0;
            printf("Student %d:\n", entrance[i].sNo);
            for(int j = 0; j < e; j++)
            {
                scanf("%d", &entrance[i].marks[i]);
                entrance[i].totalS += entrance[i].marks[i];
            }
        }

        printf("Hey Sergey, enter your marks of the tests you have given:\n");
        entrance[n].totalS = 0;
        for(int i = 0; i < e - 1; i++)
        {
            scanf("%d", &entrance[n].marks[i]);
            entrance[n].totalS += entrance[n].marks[i]
        }
        for(int i = 0; i < e - 1; i++)
            printf("%d ", entrance[n].marks[i]);
        printf("\n");

        sort(entrance, n + 1);
        for (int i = 0; i < n; i++)
        {
            printf("%d: \n", (entrance[i].sNo) + 1);
            for(int j = 0; j < e; j++)
                printf("%d ", entrance[n].marks[i]);
            printf("\n");
            printf("%d\n", entrance[i].totalS);
        }

    }

    return 0;
}
