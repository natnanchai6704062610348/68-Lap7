#include<stdio.h>

int checkNumber(int n1, int n2){
	if(n1>=20&&n1<=60 && n1>=20&&n1<=60){
		return 1;
	}else{
		return 0;
	}
}
int multiply(int n1, int n2){
	return n1*n2;
}


int main() {
  	int a,b;
  	scanf("%d %d",&a,&b);
  	if (checkNumber(a,b)){
  		printf("%d\n",multiply(a,b));
	}else{
		printf("reject");
	}
}

