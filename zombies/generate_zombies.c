#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
 
int main()
{
    pid_t pid;
    while (1){
        pid = fork();
        if (pid < 0){
            puts("fock error");
            exit(1);
        }
        else if(pid == 0){
            printf("I am a Child Process, pid is %d.\n", getpid());
            sleep(1);
            exit(1);
        }
        else
            sleep(3);
    }
    return 0;
}
