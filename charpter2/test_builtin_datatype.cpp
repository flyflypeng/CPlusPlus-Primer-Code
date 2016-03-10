#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>

#include <iostream>

int main() {

	char *a;
	printf("Type--------------------------byte_length\n");
	printf(" char---------------------%ld\n", sizeof(char));
	printf(" short--------------------%ld\n", sizeof(short));
	printf(" unsigned----------------------%ld\n", sizeof(unsigned));
	printf(" int----------------------%ld\n", sizeof(int));
	printf(" long---------------------%ld\n", sizeof(long));
	printf(" float--------------------%ld\n", sizeof(float));
	printf(" double-------------------%ld\n", sizeof(double));
	printf(" long long----------------%ld\n", sizeof(long long));
	printf(" pointer------------------%ld\n", sizeof(a));
	printf("-----------end-------------\n");

	printf("If we want to know the range of int,how can we do?\n");
	unsigned char b, length;
	length = sizeof(b);
	length = length * 8; //turn to bits
	printf("The rang of unsigned char is 0 - %d\n", (int)(pow(2, length) - 1));

	printf("************************************\n");
	printf("Type***************************range\n");
	printf("char************************%d ~ %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("short int*******************%d ~ %d\n", SHRT_MIN, SHRT_MAX);
	printf("int*************************%d ~ %d\n", INT_MIN, INT_MAX);
	printf("long************************%ld ~ %ld\n", LONG_MIN, LONG_MAX);
	printf("float***********************%f ~ %f\n", FLT_MIN, FLT_MAX);
	printf("double**********************%lf ~ %lf\n", DBL_MIN, DBL_MAX);
	return 0;
}
