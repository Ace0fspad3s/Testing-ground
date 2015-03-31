#include <iostream>
#include <ctime>
using namespace std;

struct Student
{
	int age;
	int IDnum;
	char year; // senior, freshman, etc.
};

int main()
{
	time_t t = time(0); // get time now
	cout << time(0) << endl;
	cout << localtime( & t ) << endl;
	struct tm * now = localtime( & t );
	cout << (now->tm_year + 1900) << '-'
		<< (now->tm_mon + 1) << '-'
		<< now->tm_mday
		<< endl;

	return 0;
}

