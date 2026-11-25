#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float basic, house, medical, gross;
};
int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee e[n];
    for (int i=0; i<n; i++) {
        printf("Employee %d (ID name basic house-rent medical): ", i+1);
        scanf("%d %s %f %f %f", &e[i].id, e[i].name, &e[i].basic, &e[i].house, &e[i].medical);
        e[i].gross = e[i].basic + e[i].house + e[i].medical;
    }
    printf("\nID Name Basic HouseRent Medical Gross\n");
    for (int i=0; i<n; i++) {
        printf("%d %s %.2f %.2f %.2f %.2f\n", e[i].id, e[i].name, e[i].basic, e[i].house, e[i].medical, e[i].gross);
    }
    return 0;
}