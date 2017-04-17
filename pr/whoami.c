//fork();
//execlp();

#include <stdio.h>
#include <unistd.h>

int main () {
pid_t childpid;
int num=0;

childpid=fork();
if(childpid==-1){perror("childpid error.\n");}
if(childpid==0){printf("Welcome : "); num=0;}
else {wait(NULL);num=1;}

if(childpid!=0 && num==1) execlp("whoami","whoami",NULL);

return 0;
}
