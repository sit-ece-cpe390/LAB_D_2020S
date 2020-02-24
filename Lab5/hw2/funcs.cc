/*
  Write your code here for the required functions
  The makefile builds the code, assuming the functions here match the ones used in main
 */
#include <iostream>
#include <math.h>
using namespace std;

double hypot(double a, double b) {
	double c = sqrt(a*a + b*b);
	return c;
}
double mean(double a, double b) {
	double c = (a+b) / 2;
	return c;
}
//this is correct, good job mate
