#include "Month.h"
using namespace std;

int month_map(const string& str)
{
				int month;
						 if (str=="Jan")
								return   1;
				else if (str == "Feb")
								return   2;
				else if (str == "Mar")
								return   3;
				else if (str=="Apr")
								return   4;
				else if (str=="May")
								return   5;
				else if (str=="Jun")
								return   6;
				else if (str=="Jul")
								return   7;
				else if (str=="Aug")
								return   8;
				else if (str=="Sep")
								return   9;
				else if (str=="Oct")
								return   10;
				else if (str=="Nov")
								return   11;
				else if (str=="Dec")
								return   12;
				else return 1;
}
string month_map(int month)
{
				string m[13] =
				{"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
				if (1 <= month && month <= 12)
								return m[month-1];
				else
								return "Jan";
}

Month::Month()
{
				month = 1;
}

Month::Month(char first, char second, char third)
{
				string str = { "\0" };
				str += first;
				str += second;
				str += third;
				month=month_map(str);
				str.clear();
}

Month::Month(int monthInt)
{
				if (1 <= monthInt && monthInt <= 12)
								month = monthInt;
				else
								month = 1;
}


Month::~Month()
{
}

void Month::inputInt()
{
				cin >> month;
				if (month < 1 || month>12)
								month = 1;
}

void Month::inputStr()
{
				char c;
				string str = {"\0"};
				for (int i = 0; i < 3; i++)
				{
								cin >> c;
								str += c;
				}
				month = month_map(str);
				str.clear();
}

void Month::outputInt()
{
				cout<< month;
}

void Month::outputStr()
{
				cout << month_map(month);
}

Month  Month::nextMonth()
{
				Month temp;
				temp.month=month+1;
				if (temp.month > 12 || temp.month < 1)
								temp.month = 1;
				return temp;
}
