#include "headers.h"
unsigned int str_len(char *ptr){
	
	printf("%s function called...\n", __FUNCTION__);
	char *p = ptr;
	while(*p){

		p++;
	}
	return p - ptr;
}

