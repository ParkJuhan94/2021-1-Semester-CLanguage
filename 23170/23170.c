#include <stdio.h>
int main(int ac, char* av[])
{
    printf("�� argument�� %d��\n", ac);
    for (int i = 0; i < ac; i++) {
        printf("argument %d: %s\n", i, av[i]);
    }
}
