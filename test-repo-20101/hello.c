#include <stdio.h>

void hello()
{
	printf("hello develop\n");
	printf("hello bugfix\n");
    printf("hello gitee\n");
    printf("hello local\n");
}

int main(int argc, char** argv)
{
    printf("Hello, wolrd\n");
    hello();
    return 1;
}

void hello_master()
{
	printf("Hello master\n");
}
