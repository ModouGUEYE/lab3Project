#include <stdio.h>

int diff(int x, int y){
    return x - y;
}

int main(int argc, char const *argv[])
{
    printf("la difference est de: %d", diff(8,2))
    return 0;
}