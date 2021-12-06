#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

struct student
{
	
	struct
	{
		string surname;
		string name;
		string patronymic;
	};
	string group;
	struct
	{
		int day = 0;
		int month = 0;
		int year = 0;
		int age = 0;
	};

};

student* EnterStudentINFO(int  numberOfStudents)
{
	student* arr = new student[numberOfStudents];
	for (int i = 0; i < numberOfStudents; i++)
	{
		cout << "Введите имя  " << i + 1 << " студента  ";
		cin >> arr[i].name;
		cout << "Введите фамилию " << i + 1 << " студента  ";
		cin >> arr[i].surname;
		cout << "Введите отчество " << i + 1 << " студента  ";
		cin >> arr[i].patronymic;

		cout << "Введите день рождения " << i + 1 << " студента  ";
		cin >> arr[i].day;
		cout << "Введите месяц рождения " << i + 1 << " студента  ";
		cin >> arr[i].month;
		cout << "Введите год рождения " << i + 1 << " студента  ";
		cin >> arr[i].year;
		cout << "Введите группу " << i + 1 << " студента  ";
		cin >> arr[i].group;
	}
	return arr;
}

student* ageOfStudent(student* arr, int numberOfStudents)
{
	int age = 0;
	for (int i = 0; i < numberOfStudents; i++)
	{
		time_t t = time(0);
		struct tm* T = new tm;
		localtime_s(T, &t);
		age = (T->tm_year + 1900) - arr[i].year;
		if (arr[i].month > (T->tm_mon + 1))
		{
			age--;
		}
		else if (arr[i].month == (T->tm_mon + 1) && (arr[i].day > T->tm_mday))
		{
			age--;
		}
		arr[i].age = age;
	}
	return arr;
}

int MostPopularName(student* arr, int numberOfStudents)
{
	int  count = 0;
	int  positionOfName = 0;

	for (int i = 0; i < numberOfStudents; i++)
	{
		if (arr[i].name == arr[i + 1].name)
		{
			count++;
			if (count > 0) {
				positionOfName = i;
			}
		}

	}
	return positionOfName;
}

void averageAge(student* arr, int numberOfStudents)
{
	double sumOfAge = 0, averageAge = 0;

	for (int i = 0; i < numberOfStudents; i++) {
		sumOfAge += arr[i].age;
	}
	averageAge = sumOfAge / numberOfStudents;
	cout << "СРедний возраст студентов " << averageAge;
}

void printINFO(student* arr, int  numberOfStudents)
{
	cout << "ФИО                      Дата Рождения         Группа     возраст  " << endl;
	for (int i = 0; i < numberOfStudents; i++) {
		cout << arr[i].surname << "  " << arr[i].name << "  " << arr[i].patronymic << "              " << arr[i].day << "." << arr[i].month << "." << arr[i].year << "             " << arr[i].group << "        " << arr[i].age << endl;
	}
}

bool SurnameComp(student x, student y)
{
	return x.surname < y.surname;
}

bool AgeComp(student x, student y)
{
	return x.age < y.age;
}

bool GroupComp(student x, student y)
{
	return x.group < y.group;
}

enum typeOfSort
{
	surname = 1,
	age = 2,
	height = 3,
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int numberOfStudents = 0, positionOfName;
	cout << "количество студентов ";   cin >> numberOfStudents;

	student* arr;

	arr = EnterStudentINFO(numberOfStudents);
	arr = ageOfStudent(arr, numberOfStudents);

	printINFO(arr, numberOfStudents);

	positionOfName = MostPopularName(arr, numberOfStudents);

	if (positionOfName == 0)
	{
		cout << "Нету повторений имени, все слишком уникальные((((( " << endl;
	}
		else cout << "Наиболее распространенное имя - " << arr[positionOfName].name << endl;


	averageAge(arr, numberOfStudents);

	int Menu = 0;
	cout << "Выберите вид сортировки " << endl << "1) По фамилии\n" << "2) По возрасту\n" << "3) По группе\n";
	cin >> Menu;

	switch (Menu)
	{
	case surname:	sort(arr, arr + numberOfStudents, SurnameComp);
		printINFO(arr, numberOfStudents);
		break;
	case age:		sort(arr, arr + numberOfStudents, AgeComp);
		printINFO(arr, numberOfStudents);
		break;
	case height:	sort(arr, arr + numberOfStudents, GroupComp);
		printINFO(arr, numberOfStudents);
		break;
	default: cout << "Неверное число ";
		break;
	}
}
