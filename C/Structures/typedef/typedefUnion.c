#include <stdio.h>

typedef struct
{
    int type;
    union
    {
        float speed;
        float distance;
    } typedata
} sensor;

void main()
{
    int choice;
    sensor s1 = {1, {.speed = 82.5}};
    sensor s2 = {2, {.distance = 45870.5}};

    printf("Please input sensor type, 1 for speedometer, 2 for odometer: ");
    scanf("%d", &choice);

    if (choice == 1)
        printf("Current speed: %.2fkm/h", s1.typedata.speed);
    if (choice == 2)
        printf("Distance: %.2fkm", s1.typedata.distance);
}