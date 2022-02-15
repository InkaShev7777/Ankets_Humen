#pragma once 
#include<iostream> 
#include"c_Anketa.h" 
#include<vector> 
#include<algorithm> 
#include<fstream> 
class c_Ankets
{
    std::vector<c_Anketa*> vec;
public:
    c_Ankets()
    {
        this->Read_From_File();
    }
    void Add(c_Anketa* an)
    {
        this->vec.push_back(an);
    }
    void Prit()
    {
        for (auto i : this->vec)
        {
            i->Print();
        }
    }
    void Size_Name()
    {
        auto it = std::count_if(begin(this->vec), end(this->vec), [](c_Anketa* an) {return an->getName().size() > 7; });
        cout << "Size_name > 7: " << it << "\n\n";
    }
    void Year()
    {
        for (auto i : this->vec)
        {
            if (i->getYear() > 2000)
            {
                i->Print();
            }
        }
    }
private:
    void Whrite_In_File()
    {
        std::fstream f;
        f.open("File.txt", std::ios::out);
        if (!f.is_open())
        {
            std::cout << "Error\n";
        }
        else
        {
            for (auto i : this->vec)
            {
                f << i->getName() << "\t" << i->getSurname() << "\t" << i->getPatronymic() << "\t" << i->getDay_reg() << "\t" << i->getMonth_Reg() << "\t" << i->getYear_reg() << "\t" << i->getDay() << "\t" << i->getMonth() << "\t" << i->getYear() << "\t" << i->getLog() << "\t" << i->getPas() << "\n";
            }
        }
        f.close();
    }
    void Read_From_File()
    {
        std::fstream f;
        std::string name, surname, patronymic, Log, Pas;
        int year_reg, month_reg, day_reg, day, month, year;
        f.open("File.txt", std::ios::in);
        if (!f.is_open())
        {
            std::cout << "Error\n";
        }
        else
        {
            while (!f.eof())
            {
                f >> name >> surname >> patronymic >> day_reg >> month_reg >> year_reg >> day >> month >> year >> Log >> Pas;
                if (name == "")break;
                c_Anketa* ank = new c_Anketa(name, surname, patronymic, day_reg, month_reg, year_reg, day, month, year, Log, Pas);
                this->Add(ank);
                name = surname = patronymic = Log = Pas = "";
                day = month = year = day_reg = month_reg = year_reg = 0;
                //this->Add(name, surname, patronymic, day_reg, month_reg, year_reg, day, month, year, Log, Pas);
            }
        }
        f.close();
    }
public:
    ~c_Ankets()
    {
        Whrite_In_File();
    }
};