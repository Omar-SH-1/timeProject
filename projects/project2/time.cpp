#include "time.h"


using namespace chron;
void Time::normalise(){
	totalSeconds %= 3600*24;
	if(totalSeconds<0){
		totalSeconds+=3600*24;
	}
}

void Time::AddSeconds(int s){
	totalSeconds+=s;
	normalise();
}
Time::Time(int h, int m, int s){
    totalSeconds=h*3600+m*60+s;
    normalise();
    
	}
Time& Time::operator+=(int s){
	totalSeconds+=s;
	normalise();
	return *this;
   }	
Time Time::operator+(int s)const{
	return Time(totalSeconds+s);
}
int Time::TotalSeconds() const{
		return totalSeconds;
}
int Time::GetHours() const {
    return totalSeconds/3600;
}

int Time::GetMinutes() const {
    return (totalSeconds%3600)/60;
}

int Time::GetSeconds() const {
    return (totalSeconds%3600)%60;
}
int operator-(const Time& t1,const Time& t2){
	return t1.TotalSeconds() - t2.TotalSeconds();
}	
std::ostream& operator<<(std::ostream& out, const chron::Time& t){
	out<<t.GetHours()<<":"<<t.GetMinutes()<<":"<<t.GetSeconds();
	return out;
}
std::istream& operator >>(std::istream& in, Time&t){
	int h,m,s;
	char temp;
	in>>h>>temp;
	in>>m>>temp;
	in>>s>>temp;
	t=Time(h,m,s);
	return in;
	}

