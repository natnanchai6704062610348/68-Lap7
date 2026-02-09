#include<stdio.h>

long convert(long h, long m, long s){
    return h*3600 + m*60 + s;
}

int main(){
    int h,m,s;
    scanf("%ld %ld %ld", &h, &m, &s);
    printf("%ld\n",convert(h, m, s) );
    
}