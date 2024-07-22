#include <iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    int ar;

    public:
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    void getdata(){
        cout<<"Length:"<<length<<endl;
        cout<<"Breadth:"<<breadth<<endl;
    }
    void calculateArea(){
        ar = length * breadth;
        cout<<"Area:"<<ar<<endl;
    }
};

int main(){
    Rectangle r(40, 30);
    r.getdata();
    r.calculateArea();
    return 0;
}