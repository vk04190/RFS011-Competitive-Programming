#include<iostream>
#include<stdlib.h>
struct rectangle{
    int length;
    int breadth;

};
// int main(){
//     struct rectangle r1   = {       10,12    };
//     printf("%d ,%d",r1.length,r1.breadth);
//     struct rectangle *p=&r1;
//     // accessing data using pinter
//     printf("\n%d",r1.length);
//     printf("\n%d",(*p).length);
//     printf("\n%d",p->length);    
// }

int main(){
    struct  rectangle r1={1,2};
    
    struct rectangle *p;
    p=(struct  rectangle *)malloc(sizeof(struct  rectangle    ));
        // accessing data using pinter
    p->length=89;
    p->breadth=88;
    printf("\n%d",r1.length);
    printf("\n%d",(*p).length);
    printf("\n%d",p->length);   
    printf("\n%d",p->breadth);   
    
}