#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void normpdf(double x, double *pdf){
    double normal = ((1/( sqrt(2*M_PI))) * (exp(-1*( pow(x,2) /2) )));
    *pdf = normal;
    printf("ph(%f)=%.8f",x,*pdf);
}
void add(double x, double y, double *result) {
    double addition = (x + y);
    *result = addition;
    printf("%6.2f + %6.2f = %6.2f",x,y,*result);
}
void main(int argc, char *argv[]) {
    double pdf;
    double result;
    if (argc == 1) {
        fprintf(stderr, "Usage: math_demo num1 [num2]");
    }
    else if (argc == 2) {
        double x = atof(argv[1]);
        normpdf(x,&pdf);     
    }
    else if (argc == 3) {
        double x = atof(argv[1]);
        double y = atof(argv[2]);
        add(x,y,&result);
    }
    else {
        fprintf(stderr, "Error: too many arguments");
    }
}