#include <stdio.h>
struct student
{
    char name[51];
    int age;
    float gpa;
};

int main(void)
{
    struct student a;
    printf("input name: ");
    fgets(a.name, sizeof(a.name), stdin);
    printf("input age: ");
    scanf("%d", &a.age);
    printf("input gpa: ");
    scanf("%f", &a.gpa);

    printf("=== DATA MAHASISWA ===\n");
    printf("Nama: %s", a.name);
    printf("Usia: %d\n", a.age);
    printf("GPA: %.2f\n", a.gpa);
}