#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func (int *d) {
*d=*d+1;
printf("%d",*d);
}
 
void func2 (int a, char ** b) {
if (a%2!=0) *b="odd";
else *b="even";
}

void func3 (int **a,int r, int c){

/*mine, what's wrong?

void func3 (int **a,int num){
int i=0,j=0;
for(i=0;i<num;i++){
for(j=0;j<(num-1);j++){
a[i][num-1]=a[i][num-1]+a[i][j];
}
}
*/

int i, j, hap;
for (i=0; i<r;i++){
hap =0;
for(j=0; j<c-1; j++)
hap +=a[i][j];
a[i][c-1]=hap;
}
}

int main () {
/*func과func2
char *a; //메모리 아직 안잡힘
//a= (char)malloc(sizeof(char*)*10); -> 왜 안하지?
int i=11;
//func(&i);
//printf("%d",i);
func2(i, &a);
printf("%d - %s\n",i,a);
*/

/*mine func3 - what's wrong?

int i=0,j=0;
int a[3][3]={1,2,0,3,4,0,5,6,0};

func3(&a,3);

for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d",a[i][j]);
}
}
*/

int arr[3][4]= {{1,2,3,0},{4,5,6,0},{7,8,9,0},{10,11,12,0}};


return 0;

/*
//메모리 잡기
char ** str; // *하는 문자에 대한 주소를 위한 행 하나, ** 주소들에대한 주소를 위한 행 하나
str = (char **) malloc (sizeof(char*)*3); //3개의 행을 만들겠다는 의미
str[0]=(char *)malloc (sizeof(char)*10);
str[0]=(char *)malloc (sizeof(char)*20); //hip에 저장
str[0]=(char *)malloc (sizeof(char)*30); //행마다의 크기를 다르게 해도 문제가 없다

//문자열의 예시를 넣어보자
//str[0] = "hello" //정적메모리 저장되는 곳에 저장 -> 가급적 하지말기 (메모리낭비심함)
strcpy(str[0],"hello"); // good 

//배열을 사용하지 않고 동적메모리를 할당하는 이유
//배열을 사용하면 컴파일할 때 메모리를 잡아둔 것만 사용할 수 있기 때문에 더 필요할 경우를 대비하지 못한다.
*/



/*
char *str;

// 둘의 차이 : 파일의 크기 차이
//char str[10]; //실행 전 메모리 잡힘
//str[0]='a';
str= (char*)malloc(sizeof(char)*10); //실행가기전까지는 메모리 안잡힘
*str ='a'; //str주소값을 읽어서 그 자리에 문자a를 넣어달라는 뜻 
//이는 사실 상  str[0]='a';와 같은 것

//1번지에 저장 하고 싶다면?
*(str+1) = 'b'; //int였다면 +4(sizeof크기로 플러스해야함)
//str[1] ='b';와 역시 같은 것
*/

}
