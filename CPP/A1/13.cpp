#include<iostream>
#include <string>  

using namespace std;

class Time{

    int hours;
    int min;
    int seconds;

    public:
      Time(){
        hours = 0;
        min = 0;
        seconds = 0;
      }
      void operator >> (string s){
          
          int ind = s.find(':');
          string hour = s.substr(0,ind);
          s = s.substr(ind+1);
         
          hours = stoi(hour);
          int ind2 = s.find(':');

          string mini = s.substr(0,ind2);
          
          min = stoi(mini);
          s = s.substr(ind2+1);
          
          seconds = stoi(s);

      }

       Time operator +(Time &t1){
          
           Time result;
         result.seconds = (t1.seconds + seconds) % 60;
        int carrySeconds = (t1.seconds + seconds) / 60;

        result.min = (t1.min + min + carrySeconds) % 60;
        int carryMinutes = (t1.min + min + carrySeconds) / 60;

        result.hours = t1.hours + hours + carryMinutes;
        if(result.hours>=24)result.hours = result.hours - 24;

        return result;



      }
    friend ostream& operator<<(ostream& os, Time& t) {
        os<<"Time in format(hh:mm:ss) -> "<<t.hours<<":"<<t.min<<":"<<t.seconds<<endl;
        return os;
    }
      

      bool operator ==(Time &t1){
        return (t1.hours == hours && t1.min == min && t1.seconds == seconds);
      }


};

int main(){
    
    Time t1,t2,t3;

    t1>>"12:34:06";
    t2>>"12:45:34";
    cout<<t1;
    cout<<t2;
    t3 = t1+t2;
    cout<<"Adding two times......"<<endl;
    cout<<t3;

    return 0;

}