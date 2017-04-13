#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>


int main (){
char sentence[100];
int i=0,j=1;
int index=0;
int length=0;
pid_t child1, child2;

printf("Input a sentence : ");
scanf("%s",&sentence);

while(sentence[++length] != '\0');
child1 = fork();

if(child1==0) { //process1 
for(index=0;index<length;index +=2){
if (sentence[index]>='A'&&sentence[index]<='Z') sentence[index]=sentence[index]+32;
else if (sentence[index]>='a'&&sentence[index]<='z') sentence[index]=sentence[index]-32;
}
printf("%s\n",sentence);
return 0;
}else {

child2 = fork();

if(child2==0) { //process2 

for(index=1;index<length;index+=2){
if (sentence[index]>='A'&&sentence[index]<='Z') sentence[index]=sentence[index]+32;
else if (sentence[index]>='a'&&sentence[index]<='z') sentence[index]=sentence[index]-32;

}
printf("%s\n",sentence);

}else{
while(wait(NULL)>0);
printf("finishing ...");}
}
return 0;
}

