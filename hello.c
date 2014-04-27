#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S "Hello world!\n"

int main()
{
	exit(printf(S)==strlen(S)?EXIT_SUCCESS:EXIT_FAILURE);
}
