#include<iostream>
using namespace std;
class Animal{
    private:
        int age;
        string name;
    public:
        void setAge(int);
        void setName(string);
        void getInfo(){
            cout<<"Name is  : "<<name<<endl;
            cout<<"Age is  : "<<age<<endl;
        }
} a;

void Animal :: setAge(int num){
    age = num;
}
void Animal :: setName(string s){
    name = s;
}
class Shop{
    int itemID[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){
            counter = 0;
        }
        void dispPrice(void);
        void setPrice(void);

}s;

void Shop :: setPrice(void){
    cout<<"Enter ID "<<"\n";
    cin>>itemID[counter];
    cout<<"Enter Price "<<"\n";
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: dispPrice(void){
    for(int i=0;i<counter;++i){
        cout<<"The Price of "<<itemID[i]<<" is "
        <<itemPrice[i]<<endl;
    }
}
class Employee{
    protected:
        static int count;
        int id,salary;
        friend int totalSal(Employee a, Employee b);
    public:
        Employee(int num,int sal){
            id = num;
            salary = sal;
            count++;
        }
        ~Employee(){
            // cout<<"destructor"<<endl;
        }
        Employee(){
        }
        void getID(void){
            cout<<id<<" & "<<count<<endl;
        }
};
int totalSal(Employee a,Employee b){
    return a.salary + b.salary;
}
int Employee :: count;
//single inheritence
//derieved class
//private members of base class are never inherited
class Programmer : public Employee{
    string lan;
    public:
    //constructor of derieved class
    //taking parameter for base class constructor &
    //passing them to base class constructor 
    Programmer(int num,int sal,string s) : Employee(num,sal){
        lan=s;
    }
    void getLan(void);
};

void Programmer :: getLan(void){
    cout<<lan<<endl;
}

//multilevel inheritence
class Student{//grandfather
    protected:
        int roll;
    public:
        void set_roll(int);
        void get_roll(void);
};
void Student :: set_roll(int r){
    roll = r;
}
void Student :: get_roll(void){
    cout<<roll<<endl;
}
class Exam : public Student{//father
    protected:
        float maths_marks,phy_marks;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void Exam :: set_marks(float math,float phy){
    maths_marks = math;
    phy_marks = phy;
}

void Exam :: get_marks(void){
    cout<<"Math = "<<maths_marks<<endl;
    cout<<"Physics = "<<phy_marks<<endl;
}

class Result : public Exam{//son
    float percentage;
    public:
        void display_marks(void){
            cout<<"Roll : ";
            get_roll();
            cout<<"Marks : "<<endl;
            get_marks();
            cout<<"Percentage is "<<(maths_marks+phy_marks)/2<<"%"<<endl;
        }
};
//multiple inheritence 
class Mammal{//classA --lvl1
    public:
        Mammal(){
            cout<<"Gives direct brith"<<endl;
        }
        void sound(void){
            cout<<"Hiii"<<endl;
        }
};
class Bird{//classB--lvl1
    public:
    Bird(){
        cout<<"Can fly"<<endl;
    }
    void sound(void){
            cout<<"singggggg"<<endl;
    }
};
class Bat : public Mammal,public Bird{
    //deriving using multiple classes
    public:
        void sound(void){
            Mammal::sound();
        }
};
//virtual base class
//inherited data member can be ambigious in hybrid inheritence
//virtual flow data member one time so no ambiguity
class Test : virtual public Student{
    protected:
        float total_num;
    public:
        void set_num(float a,float b){
            total_num = a+b;
        }
        void print_marks(void){
            cout<<total_num<<endl;
        }
};
class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float s){
            score = s;
        }
        void print_score(void){
            cout<<score<<endl;
        }
};
class Evaluation : public Test,public Sports{
    private:
        float total;
    public:
    void disp(void){
        total = total_num+score;
        print_score();
        print_marks();
        get_roll();
        cout<<"Evaluated score is : "<<total<<endl;
    }
};

//polymorphism - one name multiple forms
//compile time polymorphism :- function & operator overloading
//runtime polymorphism :- virtual functions
//function overloading 
class Base{
    public:
    //same name func taking diff parameteres
        void fun(){
            cout<<"no args\n";
        }
        void fun(int x){
            cout<<"1 arg "<<x<<endl;
        }
        void fun(string s){
            cout<<"diff arg "<<s<<endl;
        }
        virtual void print(){
            cout<<"base class print"<<endl;
        }
        void disp(){
            cout<<"base class disp"<<endl;
        }
} B;

//runtime polymorphism (virtual functions)/func overriding
class Derived : public Base{
    public:
        void print (){
            cout<<"derived class print"<<endl;
        }
        void disp(){
            cout<<"derived class disp"<<endl;
        }

};
//virtual func
class Channel{
    protected:
        string title;
        float rating;
    public:
        Channel(string s,float r){
            title = s;
            rating  = r;
        }
        //do nothing func/pure virtual func
        virtual void disp()=0;

};
class Video : public Channel{
    float videoLen;
    public:
        Video(string s,float r,float len):Channel(s,r){
            videoLen = len;
        }
        void disp(){
            cout<<"amazing video "<<title<<endl;
            cout<<"Rating : "<<rating<<endl;
            cout<<"length : "<<videoLen<<" min"<<endl;
        }
};
class Text : public Channel{
    int words;
    public:
        Text(string s,float r,int c):Channel(s,r){
            words = c;
        }
        void disp(){
            cout<<"amazing video "<<title<<endl;
            cout<<"Rating : "<<rating<<endl;
            cout<<"length : "<<words<<" words"<<endl;
        }
};
class Birds {
public:
    virtual void fly() = 0; // Declare fly as a pure virtual function
};

class Sparrow : public Birds {
public:
    void fly() override { /* logic to make the sparrow fly */ }
};

class Ostrich : public Birds {
    // No need to implement fly for the Ostrich
};
int main()
{
    // Animal a;
    // a.setAge(8);
    // a.setName("Jack");
    // a.getInfo();
    // s.initCounter();
    // s.setPrice();
    // s.setPrice();
    // s.dispPrice();
    // Employee a,b,c;
    // Employee a(101,50000);
    // a.getID();
    // Employee b(102,60000);
    // b.getID();
    // cout<<totalSal(a,b)<<endl;
    // Programmer abul(103,69000,"C++");
    // abul.getID();
    // abul.getLan();
    // cout<<"-----"<<endl;
    Result pranta;
    pranta.set_roll(69);
    pranta.set_marks(83,96);
    pranta.display_marks();
    Bat badur;
    //ambiguity in multiple inheritence
    //when two or more base classes have same method
    //to escape this we need to specify the class from where the method will be inherited
    badur.Bird::sound();
    Evaluation E;
    E.set_roll(69);
    E.set_num(46,56.68);
    E.set_score(87);
    E.disp();
    B.fun("hi");
    //base class pointer pointing derived class
    //if we use virtual func in base class itll gain rtp
    Base *baseptr;
    Derived d;
    baseptr = &d;
    baseptr -> print();
    baseptr -> disp();
    //virtual func
    string s;
    float rating,vlen;
    s= "OOP C++";
    vlen = 20.5;
    rating = 4.9;
    Video vdo(s,rating,vlen);
    vdo.disp();
    Text txt("Abstraction",4.4,655);
    txt.disp();
    Channel *c[2];
    c[0] = &vdo;
    c[1] = &txt;
    c[0] -> disp();
    c[1] -> disp();
}