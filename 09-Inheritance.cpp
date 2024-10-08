#include <iostream>
using namespace std;

class Person{
    public:
        char name[30];
        int age;
};

class Sport{
    public:
        char sportName[30];
        int medals;
};

class Student: private Person, Sport{
    public:
        void display(){
            cout<<"Student name: "<<name<<endl;
            cout<<"Student age: "<<age<<endl;
            cout<<"Sport name: "<<name<<endl;
            cout<<"Medals Won: "<<age<<endl;
        }
        void setter(){
            cout<<"Enter the name: "<<endl;
            cin>>name;
            cout<<"Enter the age: "<<endl;
            cin>>age;
            cout<<"Enter the Sport name: "<<endl;
            cin>>sportName;
            cout<<"Enter the Medals: "<<endl;
            cin>>medals;
        }
};

int main() {
    Student st;
    st.setter();
    st.display();
    

    return 0;
}
