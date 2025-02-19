#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h> 
int main() 
{
    int pid, pid1, pid2;
    pid = fork(); 
    if (pid == -1) 
    {
        perror("Error in process creation");
        exit(1); 
    }
    if (pid != 0) 
    { 
        pid1 = getpid();
        printf("The parent process ID is %d\n", pid1);
        wait(NULL); 
    } 
    else 
    { 
        pid2 = getpid();
        printf("The child process ID is %d\n", pid2);
    }
    return 0;
}
