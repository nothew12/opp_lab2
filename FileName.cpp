#include<iostream>
#include<windows.h>
#include<math.h>
#include<cmath>
#include <sstream>
using namespace std;


class Number{
public:
	double full;
	double last;
	void Init(long long uah, int kop);
	void Read();
	void Read() {
		cout << "Ввести цілу частину: ";
		cin >> full;
		cout << "Ввести дробову частину: ";
		cin >> last;
	}
	void Display();
	void Display()
	{
		cout << "Ціла частина: " << full
			<< " | Дробова частина: " << last << endl;
	}
	string toString();
	string toString() {
		stringstream ss;
		ss << "Full: " << full << ", Last: " << last;
		return ss.str();
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    double a, b, c,j;
	int i;
	Number numbers;
	cout << "Ввести цілу чаастину " << endl;
	cin >> numbers.full;
	cout << "Ввести дробову частину " << endl;
	cin >> numbers.last;
	

	cout << "Додавання: " << numbers.full + numbers.last << endl;
	cout << "Віднімання: " << numbers.full - numbers.last << endl;
	cout << "Множення " << numbers.full * numbers.last << endl;
	if(numbers.full == numbers.last)
		cout << "Рівнні " << endl;
	else
		cout << "Не рівнні " << endl;



	return 0;
}

