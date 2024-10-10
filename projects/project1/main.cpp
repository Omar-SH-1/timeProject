#include <iostream>
#include "time.h"

bool IsAfternoonTime(const chron::Time& time) {
    return time.GetHours() >= 12;
}


int main() {
    chron::Time t1 (10,19,10);
     chron::Time t2 (10,19,10);
     chron::Time t3;
     std::cin>>t3;
     std::cout<<t1-t2<<"\n";
     std::cout<<t3<<"\n";
    t2.AddSeconds(2300);
    std::cout<<t2.GetHours()<<"\n";
    std::cout<<t2.GetMinutes()<<"\n";
	std::cout<<t2.GetSeconds()<<"\n";
}
