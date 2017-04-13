//자식p에게 인수 전달 
//부모노드는 wait

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main (int argc, char *argv[]) {
pid_t childpid;
int i, n;
printf ("enter a number (2-9) : ");
scanf("%d",&n);
childpid = fork();


if(childpid==0) { 
for(i=0; i<9;i++) printf("%d * %d = %d\n", n,i+1,n*(i+1));
} //child process 

//왜 함수로는 하면 안되는가?

else {
wait(NULL);//1child끝날림 때까지 기다림
printf ("enter a number (2-9) : ");
scanf("%d",&n);
childpid = fork(); //child2번임!

if(childpid==0) { 
for(i=0; i<9;i++) printf("%d * %d = %d\n", n,i+1,n*(i+1));
} //child process 

else {
wait(NULL);//child2번끝날때까지 기다림
printf("FINISH");
}
printf("FINISH");
} //parent process


return 0;

}

