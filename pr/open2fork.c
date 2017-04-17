//two fork() 
//execlp()

#include <stdio.h>
#include <unistd.h>

int main () {
pid_t child1, child2;

child1=fork();
if(child1==-1) {perror("child1 error.\n");}
if(child1==0) {execlp("ls","ls","-l",NULL);}

else{

child2=fork();
if(child2==-1) {perror("child1 error.\n");}
if(child2==0)execlp("cat", "cat","openf.txt",NULL);
else {wait(NULL);}

wait(NULL);
printf("Thanks you for executing me.");
}
return 0;}
