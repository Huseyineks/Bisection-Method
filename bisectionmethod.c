#include <stdio.h>
#include <stdlib.h>
#include <math.h>
static double number;
double new_point(double a,double b){
	double new_point = (a+b)/2.;
	return new_point;
	
}
double f(double x){
    double fx = pow(x,2) - number;

    return fx;
}


int main() {
	
	scanf("%lf",&number);
	
	double a = 0;
	double b = number + 1;
    double c = new_point(a,b);
	while(fabs(f(c))> pow(10,-6)){
		if (f(c) > 0 ){
			b = c;
		}else{
			a = c;
		}
		c = new_point(a,b);
	}
	
    
printf("%lf",c);
	
	
	
	
	
	
	
	
	return 0;
}
