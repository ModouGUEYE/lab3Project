#include <stdio.h>

int add(int x, int y){
    return x + y;
}

int main(int argc, char const *argv[])
{
    printf("La somme vaut: ", add(5,4));
    return 0;
}
