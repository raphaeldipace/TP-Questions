#ifndef TPQ11_H
#define TPQ11_H

class Clock{
   int hour;
   int minutes;
   int seconds;

public:
   setTime(int, int, int);
   getTime(int, int, int);
   nextTime();
};

#endif
