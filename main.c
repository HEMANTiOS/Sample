#include "headers.h"
int main(int argc, char **argv) {

	int x = 10, y = 20;
	printf("%s length of %s is %d\n", __FUNCTION__, "PURPLE_TALK", str_len("PURPLE_TALK"));
	printf("%s Addition of %d and %d is %d\n", __FUNCTION__, x, y, addition(x,y));
	printf("%s Substration of %d and %d is %d\n", __FUNCTION__, x, y, substraction(y, x));
	return 0;
}
