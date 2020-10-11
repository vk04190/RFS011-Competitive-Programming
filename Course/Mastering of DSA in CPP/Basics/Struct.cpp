

#include<iostream>

struct student{
    int roll;
    char name;
    // int sub[5];
};
int main()
{
    struct student s1;
    s1.roll=10;
    // s1.sub=['1','2','3','4'];
    printf("Hello Students");
    printf("%d",s1.roll);
};