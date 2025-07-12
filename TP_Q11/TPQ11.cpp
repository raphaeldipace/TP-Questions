#include "TPQ11.h"
#include <windows.h>

Clock::setTime(int h, int m, int s){
    if(h<24 && h>0)
        hour=h;
    else
        hour=0;
    if(m>60 && m<0)
        minutes=00;
    else
        minutes=m;
    if(s<60 && s>0)
        seconds=s;
    else
        seconds=0;

    getTime(h, m, s);
}
Clock::getTime(int h, int m, int s){
    h = hour;
    m = minutes;
    s = seconds;

    cout << "\n   Time:  " << h << ":" << m << ":" << s << endl << endl;

    Sleep(1000);
    system("cls");
    nextTime();
}

Clock::nextTime(){
    int h, s, m;
    seconds+=1;

    if(seconds>59){
        seconds=0;
        minutes++;
    }
    if(minutes>59){
        minutes=0;
        hour++;
    }
    if(hour>23){
        hour=0;
        minutes=0;
        seconds=0;
    }

    h= hour;
    m= minutes;
    s= seconds;

    getTime(h,m,s);
}
