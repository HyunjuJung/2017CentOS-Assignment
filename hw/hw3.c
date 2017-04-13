#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

char buf[3];
static int i=0, j=0;
int t=0;
int sum=0;
float average=0.0;

int main (void) {

int inputfile;
char copyarr[10][10];

ssize_t size=1;

inputfile=open("/home/0000/Desktop/dir/openf.txt",O_RDONLY);

if(inputfile == -1)
	perror("Failed to open file");

while((size = read(inputfile,buf,sizeof(buf)))>0) {

	for(t=0;t<sizeof(buf);t++){
	if(buf[t]!=' ') copyarr[i][j]=buf[t],j++;
	else if(buf[t] ==' ') copyarr[i][j]='\0', sum=sum+atoi(copyarr[i]), i++, j=0;
	}	

}
printf("%d\n",sum);

average = sum/5.0;

printf("%.3f\n",average);

close(inputfile);

return 0;
}
