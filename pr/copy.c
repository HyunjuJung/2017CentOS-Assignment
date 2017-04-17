// copy argv[0] file -> argv[1] file
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main ( int argc, char * argv[] ) {
int file1, file2;
int buf[3];
ssize_t size;

if(argc<2) {perror("write two file names");return 1;}

file1 = open(argv[1],O_RDONLY);
file2 = open(argv[2],O_RDWR);

while((size=read(file1,buf,sizeof(buf)))>0) {write(file2,buf,size);}

close(file1);
close(file2);

return 0;
}
