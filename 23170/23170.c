#include <stdio.h>
int main(int ac, char* av[])
{
    printf("ÃÑ argument´Â %d°³\n", ac);
    for (int i = 0; i < ac; i++) {
        printf("argument %d: %s\n", i, av[i]);
    }
}
