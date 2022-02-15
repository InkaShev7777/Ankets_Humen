#include <iostream> 
#include<vector> 
#include<algorithm> 
#include"c_Ankets.h" 
using namespace std;

bool Year(c_Anketa* ank)
{
    if (ank->getYear() > 2000)
    {
        ank->Print();
        return true;
    }
}
int main()
{
   
    c_Ankets* ankets = new c_Ankets();
    c_Anketa* ank;
    int vibor;
    std::string name, surname, patronymic, Log, Pas;
    int year_reg, month_reg, day_reg, day, month, year;
  /*  c_Anketa* ank1 = new c_Anketa("Ilya", "Shevchenko", "Petrovich", 12, 11, 2000, 29, 05, 2001, "Als", "InkaShev777");
    c_Anketa* ank2 = new c_Anketa("Olga", "Skvarcova", "Olegovna", 10, 1, 2001, 20, 06, 1998, "Inf", "Olga777");
    c_Anketa* ank3 = new c_Anketa("Ivan", "Shevchuk", "Olegovich", 02, 06, 2005, 15, 8, 2000, "Iva", "Iva777");
    ankets->Add(ank1);
    ankets->Add(ank2);
    ankets->Add(ank3);*/
   /* ankets->Prit();
    ankets->Size_Name();
    ankets->Year();
    delete ankets;*/
    do
    {
        cout << "\t\tMenu\n";
        cout << "1 - Add\n";
        cout << "2 - Shoow\n";
        cout << "3 - Size_Name\n";
        cout << "4 - Shoow if year_reg > 2000\n";
        cout << "Enter your vibor: ";
        cin >> vibor;
        switch (vibor)
        {
        case 1:
            system("cls");
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter surname: ";
            cin >> surname;
            cout << "Enter patronymic: ";
            cin >> patronymic;
            cout << "Enter day reg: ";
            cin >> day_reg;
            cout << "Enter month reg: ";
            cin >> month_reg;
            cout << "Enter year: ";
            cin >> year_reg;
            cout << "Enter day: ";
            cin >> day;
            cout << "Enter month: ";
            cin >> month;
            cout << "Enter year: ";
            cin >> year;
            cout << "Enter Login: ";
            cin >> Log;
            cout << "Enter Password: ";
            cin >> Pas;
            ank = new c_Anketa(name, surname, patronymic, day_reg, month_reg, year_reg, day, month, year, Log, Pas);
            ankets->Add(ank);
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            ankets->Prit();
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            ankets->Size_Name();
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            ankets->Year();
            system("pause");
            system("cls");
            break;
        }
    } while (vibor != 0);
    delete ankets;
}