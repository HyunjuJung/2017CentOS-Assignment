#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
int dan;
int i;

if(argc=1) dan=2;

else if (argc=2) dan = atoi(argv[1]);

for(i=1;i<10;i++) printf("%d * %d = %d\n",i, dan,i*dan);

return 0;

}
