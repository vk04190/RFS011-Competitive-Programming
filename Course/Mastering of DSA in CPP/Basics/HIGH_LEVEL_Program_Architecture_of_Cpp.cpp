#include<iostream>

class rectangle{
        private:
            int length;
            int breadth;

        public:
            rectangle( int l, int b){
                length=l;
                breadth=b;
            }

            int area(){
                return(length*breadth);
            }

            int changelength(int l)
            {
            length=l;
            }
};

int main()
{
    rectangle r(10,5);
    printf("%d",r.area());
    r.changelength(20);
}