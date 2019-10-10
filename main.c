#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo(int a, int b){
	int output;
	output=a+b;
	return output;
	
}

int squre(int n){
	return(n*n);
}

int get_max(int x, int y){
	if(x>y) return(x);
	else return(y);
	}



int main(int argc, char *argv[]) {
	int a,b;
	int output;
	
	a=2;
	b=3;
	output = sumTwo(a,b);
	printf("sumTwo:%d\n", output);
	
	int n;
	n=5;
	squre(n);
	printf("squre:%d\n", squre(n));
	
	int x,y;
	x=2;
	y=7;
	
	printf("max:%d\n",get_max(x,y));
	

}
