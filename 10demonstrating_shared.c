#include <stdio.h>
union Data {
    int i;
    float f;
    char c;
};
int main() {
    union Data d;
    printf("Size of union Data = %d bytes\n\n", sizeof(d));
    d.i = 65;
    printf("Assigned integer : i = %d\n", d.i);
    d.f = 3.5;
    printf("Assigned float : f = %f\n", d.f);
    d.c = 'A';
    printf("Assigned char : c = %c\n", d.c);
    printf("\nAfter assigning char, i = %d and f = %f (Overwritten!)\n", d.i, d.f);
    return 0;
}