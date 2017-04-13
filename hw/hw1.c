#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>


int find_prime_number(int findprime,int count);


int main (){
pid_t childpid;
int findprime = 2;
int count=0;

while(count != 101){
count = find_prime_number(findprime,count);
findprime++;
}

childpid=fork();

if(childpid==0){
while(count != 200){
findprime++;
count = find_prime_number(findprime,count);

}
printf("%d prime number:%d\n",count,findprime);
}else{
wait(NULL);
printf("finishing...");
}


return 0;
}





int find_prime_number(int findprime,int count){
int  i;

    for(i=2; i<=findprime; i++){
     
        if(findprime%i==0){
            break;
        }
	
    }
if(i == findprime){
  	count++;		
	}
return count;
}
