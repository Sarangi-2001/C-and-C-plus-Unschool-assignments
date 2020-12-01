#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    char name[20];
    int id[5];
    int exp[2];
    float sal[5];
};
int main()
{
    int i=0;
    struct employee s1;
    printf("Enter employee name:");
    gets(s1.name);
    printf("Enter employee id(integers):");
    gets(s1.id);
    printf("Enter employee experience:");
    gets(s1.exp);
    printf("Enter employee salary:");
    gets(s1.sal);

    printf("\nNAME:%s",s1.name);
    printf("\nID:%s",s1.id);
    printf("\nEXPERIENCE:%s",s1.exp);
    printf("\nSALARY:%s",s1.sal);
    return 0;
}
