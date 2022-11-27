#include<iostream>
using namespace std;
class Time{
    int hour,min,second;
    public:
    void getData(){
        cout<<"Enter the hour : ";
        cin>>hour;
        cout<<"Enter the minute : ";
        cin>>min;
        cout<<"Enter the second : ";
        cin>>second;
    }
    void showData(){
        cout<<"Hour : "<<hour<<endl;
        cout<<"Minute : "<<min<<endl;;
        cout<<"Second : "<<second<<endl;
    }
    int Result(){
        cout<<"***RESULT***"<<endl;
        int time = hour+min+second;
        return time;
    }
};
int main(){
    Time t;
    t.getData();
    t.showData();
    cout<<"Result : "<<t.Result();
    return 0;
}