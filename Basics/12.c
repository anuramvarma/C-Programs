#include<stdio.h>
#define P 5 // Processes
#define R 3 // Resources
int allocation[P][R], need[P][R], max[P][R], available[R], safe[P];
void inputMatrix(int matrix[P][R], char *name) 
{
    printf("Enter %s matrix:\n", name);
    for (int i = 0; i < P; i++) 
    {
        for (int j = 0; j < R; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void calculateNeed() {
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < R; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
}
int isSafe() {
    int work[R], finish[P] = {0}, count = 0;
    for (int i = 0; i < R; i++) 
    {
        work[i] = available[i];
    }
    while (count < P) 
    {
        int found = 0;
        for (int i = 0; i < P; i++) 
        {
            if (finish[i] == 0) 
            {
                int j;
                for (j = 0; j < R; j++) 
                {
                    if (need[i][j] > work[j]) 
                    {
                        break;
                    }
                }

                if (j == R) 
                {
                    for (int k = 0; k < R; k++) 
                    {
                        work[k] += allocation[i][k];
                    }
                    safe[count++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }
        if (found == 0) 
        {
            return 0;
        }
    }
    return 1;
}
int main() 
{
    printf("Enter available resources: ");
    for (int i = 0; i < R; i++) 
    {
        scanf("%d", &available[i]);
    }
    inputMatrix(max, "Max");
    inputMatrix(allocation, "Allocation");
    calculateNeed();
    if (isSafe()) 
    {
        printf("System is in a safe state.\nSafe sequence: ");
        for (int i = 0; i < P; i++)
        {
            printf("P%d ", safe[i]);
        }
        printf("\n");
    } 
    else 
    {
        printf("System is in an unsafe state! Deadlock possible.\n");
    }
    return 0;
}
