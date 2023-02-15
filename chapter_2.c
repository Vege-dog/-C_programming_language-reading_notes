#include<stdio.h>

//2.2数据类型及长度
#include<limits.h>

//确定类型的取值范围
main() {
	//带符号
	printf("signed char min= %d\n", SCHAR_MIN);
	printf("signed char max= %d\n", SCHAR_MAX);
	printf("signed short min= %d\n", SHRT_MIN);
	printf("signed short max= %d\n", SHRT_MAX);
	printf("signed int min= %d\n", INT_MIN);
	printf("signed int max= %d\n", INT_MAX);
	printf("signed long min= %d\n", LONG_MIN);
	printf("signed long max= %d\n", LONG_MAX);
}