#pragma once 
#include<iostream> 
#include"c_Data.h" 
using std::cout;
class c_Anketa
{
	std::string name;
	std::string surename;
	std::string patronymic;
	c_Data* d1;
	c_Data* d2;
	std::string Log;
	std::string Pas;
public:
	c_Anketa(std::string name, std::string surename, std::string patronymic, int day1, int month1, int year1, int day2, int month2, int year2, std::string Pas, std::string Log)
	{
		this->name = name;
		this->surename = surename;
		this->patronymic = patronymic;
		this->d1 = new c_Data(day1, month1, year1);
		this->d2 = new c_Data(day2, month2, year2);
		this->Log = Log;
		this->Pas = Pas;
	}
	void Print()
	{
		cout << "Name: " << this->name << "\tSurname: " << this->surename << "\tPatronymic: " << this->patronymic << "\nDay_reg: " << this->d1->getDay() << "\tMonth_Reg: "
			<< this->d1->getMonth() << "\tYaer_Reg: " << this->d1->getYear() << "\nDay: " << this->d2->getDay() << "\tMonth: " << this->d2->getMonth() << "\tYear: " << this->d2->getYear()
			<< "\nPas: " << this->Pas << "\tLog: " << this->Log << "\n\n";
	}
	std::string getName()
	{
		return this->name;
	}
	std::string getSurname()
	{
		return this->surename;
	}
	std::string getPatronymic()
	{
		return this->patronymic;
	}
	int getDay_reg()
	{
		return this->d1->getDay();
	}
	int getMonth_Reg()
	{
		return this->d1->getMonth();
	}
	int getYear_reg()
	{
		return this->d1->getYear();
	}
	int getDay()
	{
		return this->d2->getDay();
	}
	int getMonth()
	{
		return this->d2->getMonth();
	}
	int getYear()
	{
		return this->d2->getYear();
	}
	std::string getPas()
	{
		return (std::string)this->Pas;
	}
	std::string getLog()
	{
		return (std::string)this->Log;
	}


};
