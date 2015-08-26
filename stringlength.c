#include "headers.h"
unsigned int str_len(char *ptr){
	
	char *p = ptr;
	while(*p){

		p++;
	}
	return p - ptr;
}

