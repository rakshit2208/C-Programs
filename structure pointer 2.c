#include <stdio.h>

struct book 
{
    char name[20];
    int number;
    int price;
};

int main()
{
    struct book b;
    struct book *ptr;
    ptr = &b;
    printf("Enter book name :-");
    scanf("%s",&ptr->name);
    printf("Enter number:-");
    scanf("%d",&ptr->number);
    printf("Enter price:-");
    scanf("%d",&ptr->price);
    printf("\n----------------------------BOOK DETAILS------------------------------\n");
    printf("NAME\t\tNUMBER\t\tPRICE \n");
    printf("%s\t\t%d\t\t%d\n",ptr->name, ptr->number,ptr->price);
    
    return 0;
}
    