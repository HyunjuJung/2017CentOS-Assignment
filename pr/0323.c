#include <stdio.h> 

/*void funct (int (*a)[4]) { //int *a[4]와 다른 의미 (X)
//하지만이렇게는 가능 int a[][4]
}
*/


int main (int argc, char *argv[]) {

int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
funct(arr);



/*int arr1[3]={1,2,3};
int sizeptr,sizearr;
int *ptr;
ptr=arr1;
sizeptr = sizeof(ptr);
sizearr = sizeof(arr1);
printf("%d\n",sizeptr); //8
printf("%d\n",sizearr); //12
*/
return 0;
}
