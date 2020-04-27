//Program to read time in HH:MM:SS format and convert into total seconds.

#include <iostream>
using namespace std;

class time{
	public: 
	string hour;
	string minute;
	string second;
	
};

int main ()
{
	time t;
	int hh;
	int mm;
	int ss;
	t.hour = "hour? ";
	t.minute = "minute? ";
	t.second = "second? ";
	
	cout<< t.hour;cin>>hh;
	cout<< t.minute;cin>>mm;
	cout<<t.second;cin>>ss;
	
	cout<<"The time is ";
	cout<<hh<<":"<<mm<<":"<<ss;
	
	int seconds = hh*3600 + mm*60 + ss;
	cout << "\nTime in total seconds is "<<seconds;
	return 0;
};
