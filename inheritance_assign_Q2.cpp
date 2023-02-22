#include<iostream>
using namespace std;

class person
{
    //declaration of the members/variables.

    string firstname;
    string lastname;
    int age;

    public:

    person()
    //constructor with the initiallization of variables.

    {
        string FN;
        string LN;
        int a;

        firstname = FN;
        lastname = LN;
        age = a;
        
    }
    void getValues()
    {
         cout<<"Enter your firstname: ";
         cin>>firstname;
         cout<<"Enter your lastname: ";
         cin>>lastname;
         cout<<"Enter your age: ";
         cin>>age;
         cout<<endl<<endl;
    }

    void setValues()
    {
        string name = firstname+" "+lastname;
        cout<<"Full Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl<<endl;
    }
};

//creation of class student that will inherit the public 
//members of the base class person

class student : public person
{
    string institution;
    float year_of_study;
    double reg_number;

    public:
    
    void getValue()
    {
        cout<<"Enter the name of the institution: ";
        cin>>institution;
        cout<<"Enter the year of study: ";
        cin>>year_of_study;
        cout<<"Enter your registration number: ";
        cin>>reg_number;
        cout<<endl<<endl;
    } 

    void setValue()
    {
        cout<<"Institution Name: "<<institution<<endl;
        cout<<"Year Of Study: "<<year_of_study<<endl;
        cout<<"Registration Number: "<<reg_number<<endl;
        cout<<endl;
    }
};

//calling the function members of the derived class student 
//in the main function to be dispayed.
int main()
{
    student s;
    s.getValues();
    s.setValues();
    s.getValue();
    s.setValue();
    
    return 0;
}