//heirarchical inheritance demonstration.
#include<iostream>
using namespace std;

class computer
{
   
    public:
    //declaration of the variables.
    
    double specs;
    string mfr;
    void characteristics()
    {
        cout<<"The frequency of the computer processor is ";
        cin>>specs;
        cout<<"The manufacturers of the computer are ";
        cin>>mfr;
        cout<<endl;
    }
};

class client : public computer
{
    public:
    void preference()
    {
        cout<<"The most effective brand is MacBook."<<endl;
        cout<<"But " <<mfr<< " is also suitable according ";
        cout<<"to the users intended purpose."<<endl;
    }
};

class server : public computer
{
    public:
    void system()
    {
        cout<<"Recommended frequency is 2.5Hz and above.";
        cout<<endl<<"So if "<<specs<<" is less than the recommended";
        cout<<" frequency, then it's advisable to update your system";
        cout<<endl<<"Since the most effective ones are infact 5.5Hz";
        cout<<" with the Intel of i7.";
    }
};

//creating the objects of the classes and calling the functions
// in classes using main funtion by the help of objects

int main()
{
    client c;

    c.characteristics();
    c.preference();

    server s;

    s.system();
    return 0;

}