#include <stdio.h>
struct person
{
   char name[20]; 
   int age;
   float weight;
};

int main()
{
    struct person *p, person1;
     p=&person1;   

    printf("Enter name:-");
    scanf("%s",&p->name);
    
    printf("Enter age:- ");
    scanf("%d", &p->age);

    printf("Enter weight:- ");
    scanf("%f", &p->weight);

    printf("Displaying:-\n");
    printf("Name:%s\n",p->name);
    printf("Age: %d\n", p->age);
    printf("weight: %.2f",p->weight);

    return 0;
}
    