#include<stdio.h>
#include "headers.h"
unsigned int str_len(char *ptr){

	char *p = ptr;
	while(*p){

		p++;
	};
	return p -ptr;
}

int main(int argc, char **argv) {

	printf("%s length of %s is %d\n", __FUNCTION__, "PURPLE_TALK", str_len("PURPLE_TALK"));
	return 0;
}
