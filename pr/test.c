//자식p에게 인수 전달 
//부모노드는 wait

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main (int argc, char *argv[]) {
pid_t childpid1, childpid2;
int i1, i2, n1,n2;
printf ("enter a number (2-9) : ");
scanf("%d",&n1);
printf ("enter a number (2-9) : ");
scanf("%d",&n2);
childpid1 = fork();
childpid2 = fork();

if(childpid1==0) { 
for(i1=0; i1<9;i1++) printf("%d * %d = %d\n", n1,i1+1,n1*(i1+1));

if(childpid2==0){
for(i2=0; i2<9;i2++) printf("%d * %d = %d\n", n2,i2+1,n2*(i2+1));
}
}//child process 

//왜 함수로는 하면 안되는가?

else {
wait(NULL);
printf("FINISH");
} //parent process


return 0;

}

