#include <stdio.h>

int g = 10; // global variable
int f = 20; // global variable

int main() {
    printf("Global f: %d\n", f); // prints the global variable f
    printf("Global g: %d\n", g); // prints the global variable g

    int g = 30; // local variable
    int f = 40; // local variable

    printf("Local f: %d\n", f); // prints the local variable f
    printf("Local f: %d\n", g); // prints the global variable g

    return 0;
}