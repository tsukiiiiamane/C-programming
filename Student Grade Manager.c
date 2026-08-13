#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

struct Student
{
    char name [50];
    int id;
    float grades [5];
    float average;
};
void calculateAverage(struct Student *s)
{
    int sum = 0.0;
    for(int i=0; i<5; i++)
    {
        sum += s->grades[i];
    }
    s->average = sum/5;
}
void printClassRoster(struct Student *classArray, int size)
{
    for(int i=0; i<3; i++)
    {
        printf("Name: %s\n", classArray[i].name);
        printf("ID: %d\n", classArray[i].id);
        printf("Average Grades: %.2f\n",classArray[i].average);
    }
}
int main()
{
    struct Student classArray [3] = {{"Ryda", 201,{3.7,3.3,3.5,4.0,3.3},0.0},{"Lara", 303, {2.78,3.5,3.7,3.3,3.5},0.0},{"Ria", 250, {3.5,4.0,2.98,3.5,3.5},0.0}};
    for(int i=0; i<3; i++)
    {
        calculateAverage(&classArray[i]);
    }
    printClassRoster(classArray, 3);

    return 0;
}
