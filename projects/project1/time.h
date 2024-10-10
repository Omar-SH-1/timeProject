#include <iostream>
#include <ostream>
#ifndef TIME_H
#define TIME_H
namespace chron{
	class Time{
	private:
	  int hours=0;
	  int minutes=0;
	  int seconds=0;
	  void normalise();
	public:
		Time()=default;
		Time(int h,int m, int s);
		int GetHours() const;
		int GetMinutes() const;
		int GetSeconds() const;
		Time (int s): Time (0,0,s){
		}
		void AddSeconds(int s);
		Time& operator+=(int s);
		Time operator+(int s) const;
		int TotalSeconds() const;
	};
}
int operator-(const chron::Time& t1,const chron::Time& t2);
std::ostream& operator<<(std::ostream& out, const chron::Time& t);
std::istream& operator >>(std::istream& in, chron::Time&t);
#endif //TIME_H
