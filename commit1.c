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
    a = functionM(); //run pass แต่มี Warning Error เนื่องจาก a เป็น int แต่ฟังก์เป็น double
    b = functionN(a, b); //run pass แต่มี Warning Error ตรงตัวรับค่า b เป็น int
    r = functionO(r,a,s,b); // pass
    s = functionP(a,b,c,d,e); //error ส่งค่าเกิน1ตัว -> e
    u = functionM(); //pass
    c = d + functionN(r,s); //run pass แต่มี Warning Error ตรงตัวรับค่า r เป็น double
    t = s * functionO(r, a, r, a); //pass
    a = v + functionP(r, s, t, t); //run pass แต่มี Warning Error
    functionP(functionN(a, a), s, t, t+r); //run pass แต่มี Warning Error
    v = functionP(functionN(a, a), s, t, t+r); //run pass แต่มี Warning Error

}


