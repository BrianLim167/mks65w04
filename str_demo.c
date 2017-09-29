#include <stdio.h>
#include <string.h>


int main(){
	char a[] = "str_demo.c";
	char b[] = "demo";

	char * str = strstr( a,b );

	printf( "%s\n", str );

	return 0;
}
