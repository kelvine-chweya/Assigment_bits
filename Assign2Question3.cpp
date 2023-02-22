#include<iostream>
using namespace std;

//creation of the base class
class students
{
    
    public:

    string name;
    string reg_number;
    int year_of_study;

    void stud_details()
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the registration number: ";
        cin>>reg_number;
        cout<<endl<<"Enter the current of study: ";
        cin>>year_of_study;
    }
};

//derived class ICT

class ICT : public students
{
    public:

    string certificate, Diploma, Degree;
    string stage_1, stage_2, stage_3;
    string program;

    void programs()
    {
        cout<<"Which program are you taking under ICT? ";
        cin>>program;

        cout<<"For the degree program, proceed with the following evaluations.";
        cout<<endl;

        cout<<"ICT Degree program has: ";
        cout<<endl<<"1.stage_1"<<endl<<"2.stage_2"<<endl<<"3.stage_3"<<endl;

        cout<<"What stage are you in: ";
        cin>>stage_1>>stage_2>>stage_3;
    }
};

int main()
{
    ICT i;
    i.stud_details();
    i.programs();

    string Law, Business;
    char l, b;
    Law = l;
    Business = b;
    cout<<"Select l for Law and b for Business ";
    cin>>l>>b;
    
    return 0;

}