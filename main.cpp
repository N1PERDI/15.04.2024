#include <iostream>
#include <clocale>
#include <string>
#include <vector>
using namespace std;

string zad1(int number)
{
    vector <string> days = {"понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье"};
    
    if (number >= 1 && number <= 7)
    {
        return days[number - 1];
    }
    else
    {
        return "Ошибка.";
    }
}
string zad2(int number)
{
    vector <string> month = {"январь", "февраль", "март", "апрель", "май", "июнь", "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь"};
    
    if (number >= 1 && number <= 12)
    {
        return month[number - 1];
    }
    else
    {
        return "Ошибка.";
    }
}

string zad3(int number)
{
    vector <string> season = {"Зима","Весна","Лето","Осень"};

    
    if (number >= 1 && number <= 2 || number==12)
    {
        return season[0];
    }
    else if (number >= 3 && number <= 6)
    {
        return season[1];
    }
    else if (number >= 6 && number <= 9)
    {
        return season[2];
    }
    else if (number >= 9 && number <= 11)
    {
        return season[3];
    }
    else
    {
        return "Ошибка.";
    }
}

int zad5(int number)
{
    int days = 0;

    if (number == 2)
    {
        days = 28;
    }
    else if (number == 4 || number == 6 || number == 9 || number == 11)
    {
        days = 30;
    }
    else
    {
        days = 31;
    }

    return days;
}

string zad6(int number)
{
    vector <string> month = {"январь", "февраль", "март", "апрель", "май", "июнь", "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь"};
    return month[number % 12];
}

int zad4(int number)
{
    int days = 0;
    string prov;
    cout << "Год високосный? Ответ: yes/no " << "Введите ответ: ";
    cin >> prov;

    if (number == 2 && prov=="yes")
    {
        days = 29;
    }
    else if (number == 2 && prov=="no")
    {
        days = 28;
    }
    else if (number == 4 || number == 6 || number == 9 || number == 11)
    {
        days = 30;
    }
    else
    {
        days = 31;
    }

    return days;
}

void predDay(int m, int n) {
    if (m == 1)
    {
        n--;
        m = 31;
    }
    else
    {
        m--;
    }
    cout << "Предыдущий день: " << m << "." << n << endl;
}

void budDay(int m, int n) {
    if (m == 31)
    {
        n++;
        m = 1;
    }
    else
    {
        m++;
    }
    cout << "Следующий день: " << m << "." << n << endl;
}


int main()
{
    int number, m, n;
    setlocale (LC_CTYPE, "rus");
    cout << "Введите порядковый номер:";
    cin >> number;
    cout << zad1(number) << endl;
    cout << zad2(number) << endl;
    cout << zad3(number) << endl;
    cout << zad4(number) << endl;
    cout << zad5(number) << endl;
    cout << zad6(number) << endl;
    cout << "Введите m and n: ";
    cin >> m >> n;
    predDay(m, n);
    budDay(m, n);
    
    return 0;
}
