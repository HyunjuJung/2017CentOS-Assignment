#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){
int i;
int prime=2;
int count =0;
pid_t child;

while(count != 100){

for(i=2 ; i < prime; i++){
	if(prime % i == 0){
	break;
	}
	}
 if(i==prime){
	count ++;
}
prime++;
}

child = fork();
if(child==0) {

while(count != 200){
prime++;
for(i=2 ; i < prime; i++){
	if(prime % i == 0){
	break;
	}
	}
 if(i==prime){
	count ++;
}

}
printf("%dth Prime Number : %d\n",count,prime);
}else {
wait(NULL);
printf("finishing...");
}
return 0;
}
