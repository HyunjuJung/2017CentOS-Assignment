#include <stdio.h>
#include <unistd.h>

int main () {
int x;
	x=0;
	printf("%ld\n",getpid());
	fork();
	x=1;
	printf("I am process %ld and my x is %d\n",(long)getpid(),x);
return 0;

}
