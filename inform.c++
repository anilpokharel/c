#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
    string name;
    int age;

    public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};

class Student : public Person{
    private:
    int rollNo;
    string course;

    public:
    Student(string name, int age, int rollNo, string course) : Person(name, age){
        this->rollNo = rollNo;
        this->course = course;
    }
    void display(){
        Person::display();
        cout<<"Roll No:"<<rollNo<<endl;
        cout<<"Course:"<<course<<endl;
    }
};

class Teacher : public Person{
    private:
    string subject;
    int experience;

    public:
    Teacher(string name, int age, string subject, int experience) : Person(name, age){
        Person::display();
        this->subject = subject;
        this->experience = experience;
    }
    void display(){
        Person::display();
        cout<<"Subject:"<<subject<<endl;
        cout<<"Experience:"<<experience<<endl;
    }
};

main(){
        Student s1("Anil",21,1,"Computer Engineer");
        Teacher t1("Sujal", 35,"c++",12);
        s1.display();
        t1.display();
}

