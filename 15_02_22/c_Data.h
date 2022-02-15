#pragma once 
class c_Data
{
	int day;
	int month;
	int year;
public:
	c_Data(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	int getDay()
	{
		return this->day;
	}
	int getMonth()
	{
		return this->month;
	}
	int getYear()
	{
		return this->year;
	}
};