#include<iostream>

struct rectangle{
    int length;
    int breadth;
};

void initilize( struct rectangle *r,int l, int b){
    r->length=l;
    r->breadth=b;
}

int area(struct rectangle r){
    return(r.length*r.breadth);
}

int changelength(struct rectangle *r,int l)
{
    r->length=l;
}

int main()
{
    struct rectangle r;
    initilize(&r,10,5);
    printf("%d",area(r));
    changelength(&r,20);
    printf("%d %d", r.length,r.breadth);
}