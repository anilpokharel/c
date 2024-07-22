#include <iostream>
using namespace std;

class University{
    private:
    string name;
    string location;

    public:
    University(string name, string location){
        this->name = name;
        this->location= location;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Location:"<<location<<endl;
    }
};

class Affilicated_college  : public University{
    private:
    string Address;
    int No_of_programs;

    public:
    Affilicated_college(string name, string location, string address, int No_of_programs) : University(name, location){
        this->Address = address;
        this->No_of_programs = No_of_programs;
    }

    void display(){
        University::display();
        cout<<"Address:"<<Address<<endl;
        cout<<"No_of_Programs:"<<No_of_programs<<endl;
    }
};

class Constituents_college : public University{
    private:
    string school;
    string Dean;
    int No_of_programs;

    public:
    Constituents_college(string name, string location, string school, string Dean, int No_of_programs ) : University(name, location){
        this->school = school;
        this->Dean = Dean;
        this->No_of_programs = No_of_programs;
    }

    void display(){
        University::display();
        cout<<"School:"<<school<<endl;
        cout<<"Dean:"<<Dean<<endl;
        cout<<"No_of_Programs:"<<No_of_programs<<endl;
    }
};

class Student: public Affilicated_college, public Constituents_college{
    private:
    string name_of_students;
    string program;
    int year;

    public:
    Student(string name, string location, string Address, int No_of_programs,string school,string Dean,int no_of_programs, string name_of_students, string program, int year): Affilicated_college( name, location, Address, No_of_programs), Constituents_college( name, location, school, Dean, No_of_programs){
        this->name_of_students = name_of_students;
        this->program = program;
        this->year = year;
    }

    void display()
    {
        Affilicated_college::display();
        Constituents_college::display();
        cout<<"Name of students:"<<name_of_students<<endl;
        cout<<"program:"<<program<<endl;
        cout<<"Year:"<<year<<endl;
    }
};

main(){
    Student s1("Pokhara UniVersity", "Pokhara, bindabasani", "lekhneth", 5, "PEC", "Pokhara University", 66, "Anil pokhrel","computer Engineering", 4 );
    Student s2("Pokhara UniVersity", "Pokhara, lekhneth", "lekhneth", 5, "PEC", "Pokhara University", 66, "sujal Kc","computer Engineering", 4 );
    Student s3("Pokhara UniVersity", "Pokhara, Bagar", "lekhneth", 5, "MAC", "Pokhara University", 66, "Ishaan Bhujel","Bsc-csit", 4 );
    s1.display();
    s2.display();
    s3.display();
}