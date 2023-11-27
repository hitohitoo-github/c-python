#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n1, n2, result;
	char op;

	if(argc != 4)
	{
		printf("Argument number must be 4\n");
		return -1;
	}

	n1 = atoi(argv[1]);
	op = argv[2][0];
	n2 = atoi(argv[3]);
	
	switch(op)
	{
		case '+': result = n1 + n2;	break;
		case '-': result = n1 - n2;	break;
		case '*': result = n1 * n2;	break;
		case '/': result = n1 / n2;	break;
		default	: break;
	}
	printf("%d %c %d = %d\n", n1, op, n2, result);
	return 0;
}
