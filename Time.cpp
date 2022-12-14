#include<iostream>
using namespace std;
class Time{
    int hour,min,second;
    public:
    void setData(int a, int b, int c){
       hour = a;
       min = b;
       second = c;
    }
    void display(){
        cout<<"Hour : "<<hour<<endl;
        cout<<"Minute : "<<min<<endl;;
        cout<<"Second : "<<second<<endl;
    }
   Time operator+(Time t2){
       Time temp;
       temp.hour = hour + t2.hour;
       temp.min = min + t2.min;
       temp.second = second + t2.second;
       
       temp.normalize();
       return(temp);
   }
    void normalize(){
        min = min+second / 60;
        second = second % 60;
        hour = hour + min / 60;
        min = min % 60;
};
int main(){
    Time t1,t2,t3;
    t1.setData(3,35,26);
    t2.setData(4,45,50);
    t1.display();
    t2.display();
    t3 = t1.operator+(t2);
    t3.display();
    return 0;
}
