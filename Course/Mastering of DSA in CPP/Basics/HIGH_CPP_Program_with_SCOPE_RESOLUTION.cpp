#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(){length=breadth=1;} //costructor
        Rectangle(int l, int b);
        int area();
        int perimeter();
        int getlength(){return length;};
        void setlength(int l){length=l;}
        ~Rectangle(); //dictructure {no need anything}
};

Rectangle::Rectangle(int l, int b){
    length=l;
    breadth=b;
}

int Rectangle::area()
{
    return(length*breadth);
}

int Rectangle::perimeter()
{
    return(2*(length+breadth));
}

Rectangle::~Rectangle(){
}


int main(){
    Rectangle r(10,20);
    int a=r.area();
    printf("%d\n",a);
    cout<<r.perimeter();
    r.setlength(309);
    printf("%d",r.getlength());
}