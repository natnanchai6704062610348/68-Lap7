#include<stdio.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {

  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)

    functionM(); // pass
    a = functionM(); //pass
    b = functionN(a, b); //pass
    r = functionO(r,a,s,b); // pass
    s = functionP(a,b,c,d,e); //error ส่งค่าเกิน1ตัว -> e
    u = functionM(); //pass
    c = d + functionN(r,s); //pass
    t = s * functionO(r, a, r, a); //pass
    a = v + functionP(r, s, t, t); //pass
    functionP(functionN(a, a), s, t, t+r); //pass
    v = functionP(functionN(a, a), s, t, t+r); //pass

}


