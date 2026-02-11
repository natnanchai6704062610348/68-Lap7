#include <stdio.h>
int createArr(int arr[20][20],int M,int N){

	int k,h;
    for(k = 0; k < M; k++) {
        for(h = 0; h < N; h++) {
            printf("%d ", arr[k][h]);
        }
        printf("\n");
    }
    return 0;	
}
int main() {
    int M, N;
    int arr[20][20];
    int num = 100;
	scanf("%d %d", &M, &N);
    if(M<2){
    	printf("M should be >2");
	}
    else{	
		
		int i,j;
		for(i = 0; i < M; i++) {
    		for(j = 0; j < N; j++) {
           		arr[i][j] = num;
           		num++;
    		}
		}
	    createArr(arr,M,N);
	}
}
