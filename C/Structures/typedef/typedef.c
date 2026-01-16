#include <stdio.h>

typedef struct
{
    int id;
    char name[40];
    float score;
} student;

void main()

{
    student student1 = {1001, "Christiano Ronaldo", 92};
    student student2 = {1002, "Lionel Messi", 88};
    student student3 = {1003, "Kylian Mbappe", 86};

    int id;
    printf(">>>Program Pencarian Nilai Siswa<<<\n\n");
    printf("Please input student ID: ");
    scanf("%d", &id);

    if (id == 1001)
        printf("Name: %s\nScore: %.2f", student1.name, student1.score);
    else if (id == 1002)
        printf("Name: %s\nScore: %.2f", student2.name, student2.score);
    else if (id == 1003)
        printf("Name: %s\nScore: %.2f", student3.name, student3.score);
    else
        printf("DATA NOT FOUND");
}