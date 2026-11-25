#include <stdio.h>
struct Patient {
    int id, age;
    char name[50], disease[50];
    float fee;
};
int main() {
    int n;
    float total = 0;
    printf("Enter number of patients: ");
    scanf("%d", &n);
    struct Patient p[n];
    for (int i=0; i<n; i++) {
        printf("Patient %d (ID name age disease fee): ", i+1);
        scanf("%d %s %d %s %f", &p[i].id, p[i].name, &p[i].age, p[i].disease, &p[i].fee);
        total = total + p[i].fee;
    }
    printf("\nID Name Age Disease Fee\n");
    for (int i = 0; i < n; i++) {
        printf("%d %s %d %s %.2f\n", p[i].id, p[i].name, p[i].age, p[i].disease, p[i].fee);
    }
    printf("\nTotal consultation fees collected = Tk %.2f\n", total);
    return 0;
}