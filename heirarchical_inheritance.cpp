//heirarchical inheritance demonstration.
#include<iostream>
using namespace std;

class computer
{
   
    public:
    //declaration of the variables.
    
    string specs;
    string mfr;
    void characteristics()
    {
        cout<<"The core of the computer is : ";
        cin>>specs;
        cout<<"The manufacturers of the computer are ";
        cin>>mfr;
    }
};

class client : public computer
{
    public:
    void preference()
    {
        cout<<"The most effective brand is MacBook."<<endl;
        cout<<"But " <<mfr<< " is also suitable according ";
        cout<<"to the users intended purpose"<<endl;
    }
};

class server : public computer
{
    public:
    void system()
    {
        cout<<"The "<<specs<<"s' are most preferred."<<endl;
        cout<<"But the most effective cores";
        cout<<"are the latest ones,the core i7";
    }
};
//creating the object of the class and calling the functions
// in classes using main funtion.

int main()
{
    client c;

    c.characteristics();
    c.preference();

    server s;

    s.system();
    return 0;

}