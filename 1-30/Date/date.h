#pragma once
#include<iostream>
class Date
{
public:
	Date(int year = 2000, int month = 1, int day = 1);
	bool operator==(const Date& d);
	bool operator>(const Date& d);
	bool operator>=(const Date& d);
	bool operator<(const Date& d);
	bool operator<=(const Date& d);

private:
	int _year;
	int _month;
	int _day;
};