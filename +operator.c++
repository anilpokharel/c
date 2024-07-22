#include <iostream>
using namespace std;

class Money{
    private:
    int rupees;
    int paisa;

    public:
    Money(){
        rupees = 0;
        paisa = 0;
    }

    Money(int r, int p){
        rupees = r;
        paisa = p;
    }
    Money operator +(Money m){
        Money temp;
        temp.rupees = rupees + m.rupees;
        temp.paisa = paisa + m.paisa;
        if(temp.paisa >= 100){
            temp.rupees++;
            temp.paisa -= 100;
        }
    return temp;
    }
    void display(){
        cout<<"Rupess:"<<rupees<<endl;
        cout<<"paisa:"<<paisa<<endl;
    }
};
main(){
    Money m1(10,68), m2(20, 67), m3;
    cout<<"enter a New Money"<<endl;
    m1.display();
    cout<<"Enter a New Money"<<endl;
    m2.display();
    m3 = m1+ m2;
    cout<<"Total amount of Money:"<<endl;
    m3.display();
}