#include<iostream>
#include<conio.h>
#include<string>
//#define Escape 27
//#define Enter 13
//#define Space 32

using namespace std;
using std::cout;
using std::cin;


//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TEST
//#define CALCULYTOR
//#define TEST_TERNAR
//#define TICKET
#define SHOOTER

void main()

{
	setlocale(LC_ALL, "RUS");

#ifdef TASK_1

	cout << "Преобразование числа в денежный формат." << endl;
	double number;
	cout << "Введите дробное число: "; cin >> number;
	int grn = number; float	cop = (number - grn) * 100;
	cout << grn << "грн." << " " << cop << "коп.";

#endif // TASK_1

#ifdef TASK_2

	cout << "Вычисление стоимости покупки." << endl;
	double price_not, price_pen;
	int quant_not, quant_pen;
	cout << "Введите исходные данные: " << endl;
	cout << "Цена тетради (грн): "; cin >> price_not;
	cout << "Количество тетрадей: "; cin >> quant_not;
	cout << "Цена карандаша (грн): "; cin >> price_pen;
	cout << "Количество карандашей: "; cin >> quant_pen;
	double cost = (price_not * quant_not) + (price_pen * quant_pen);
	cout << "Стоимость покупки: " << cost << " грн.";
#endif // TASK_2

#ifdef TASK_3

	cout << "Вычисление стоимости покупки." << endl;
	double price_not, price_cover;
	int quant_set;
	cout << "Введите исходные данные: " << endl;
	cout << "Цена тетради (грн.): "; cin >> price_not;
	cout << "Цена обложки (грн.): "; cin >> price_cover;
	cout << "Количество комплектов (шт.): "; cin >> quant_set;
	double cost = (price_not + price_cover) * quant_set;
	cout << "Стоимость покупки: " << cost << " грн.";

#endif // TASK_3

#ifdef TASK_4
	cout << "Вычисление стоимости поездки на дачу и обратно." << endl;
	int dist;
	double consum_gas, price_gas;
	cout << "Расстояние до дачи (км): "; cin >> dist;
	cout << "Расход бензина (л/100км): "; cin >> consum_gas;
	cout << "Цена бензина (грн.): "; cin >> price_gas;
	double res = consum_gas / 100 * dist * price_gas * 2;
	cout << "Поездка на дачу и обратно обойдется в " << res << " грн.";

#endif // TASK_4
	//-------------------------------------------------------------------------------------
#ifdef TEST

	//ВОПРОС 1.
	cout << "\t\t" << "Вопрос 1." << endl;
	int result, rig = 0, wrong = 0;
	cout << "Размер переменной chort в Байтах ?" << endl;
	cout << "Варианты ответов: 0\t2\t4\t8\t" << endl;
	cout << "Ваш ответ: "; cin >> result;

	if (result == 2)
	{
		rig += 1;
		cout << "Верно." << "\n\n" << "\t\t" << "Вопрос 2." << endl;
	}
	else if (result != 2)
	{
		wrong += 1;
		cout << "Ошибка. Повторите попытку" << endl; cout << "Ваш ответ: "; cin >> result;
	}

	// ВОПРОС 2.
	cout << "Как наз-ся присвоение начального значения переменной ?" << endl;
	cout << "Варианты ответов: " << endl;
	cout << "Инвентаризация -   1." << endl;
	cout << "Инкапсуляция -     2." << endl;
	cout << "Кастомизация -     3." << endl;
	cout << "Инициализация -    4." << endl;
	cout << "Ваш ответ: "; cin >> result;

	if (result == 4)
	{
		rig += 1;
		cout << "Верно." << "\n\n" << "\t\t" << "Вопрос 3." << endl;
	}
	else if (result != 4)
	{
		wrong += 1;
		cout << "Ошибка.Повторите попытку" << endl; cin >> result;
	}

	// ВОПРОС 3.
	cout << "Размер переменной long в Байтах ?" << endl;
	cout << "Варианты ответов: 0\t2\t4\t8\t" << endl;
	cout << "Ваш ответ: "; cin >> result;

	if (result == 4)
	{
		rig += 1;
		cout << "Верно." << "\n\n" << "\t\t" << "Вопрос 4." << endl;
	}
	else if (result != 4)
	{
		wrong += 1;
		cout << "Ошибка. Повторите попытку" << endl; cout << "Ваш ответ: "; cin >> result;
	}

	// ВОПРОС 4.
	cout << "К какому типу данных относится bool? " << endl;
	cout << "Варианты ответов: " << endl;
	cout << "Психологический -   1." << endl;
	cout << "Антропологический - 2." << endl;
	cout << "Логический -        3." << endl;
	cout << "Филологический -    4. " << endl;
	cout << "Ваш ответ: "; cin >> result;

	if (result == 3)
	{
		rig += 1;
		cout << "Верно." << "\n\n" << "\t\t" << "Вопрос 5." << endl;
	}
	else if (result != 3)
	{
		wrong += 1;
		cout << "Ошибка. Повторите попытку" << endl; cout << "Ваш ответ: "; cin >> result;
	}


	// ВОПРОС 5.
	cout << "Сколько всего символов в кодировке ASCII ?" << endl;
	cout << "Варианты ответов: 128\t1024\t32\t256\t" << endl;
	cout << "Ваш ответ: "; cin >> result;

	if (result != 256)
	{
		wrong += 1;
		cout << "Ошибка. Повторите попытку" << endl; cout << "Ваш ответ: "; cin >> result;
	}
	else if (result == 256)
	{
		rig += 1;
		cout << "Верно.\n" << endl;
	}
	cout << "Количество правильных ответов: " << rig << endl;
	cout << "Количество неверных  ответов: " << wrong << endl;

#endif // TEST

#ifdef CALCULYTOR


	double a, b, res = 0; char sign;
	cout << "Введите выражение: "; cin >> a >> sign >> b;
	if (sign == '+')
	{
		res = a + b; cout << a << sign << b << "=" << res;
	}
	if (sign == '-')
	{
		res = a - b; cout << a << sign << b << "=" << res;
	}
	if (sign == '*')
	{
		res = a * b; cout << a << sign << b << "=" << res;
	}
	if (sign == '/')
	{
		res = a / b; cout << a << sign << b << "=" << res;
	}
#endif // CALCULYTOR

#ifdef TEST_TERNAR
	//ВОПРОС 1.
	cout << "\t\t" << "Вопрос 1." << endl;
	int res = 0, rig = 0, wrong = 0;
	cout << "Размер переменной chort в Байтах ?" << endl;
	cout << "Варианты ответов: 0\t2\t4\t8\t" << endl;
	cout << "Ваш ответ: "; cin >> res;

	(res == 2) ? cout << "Верно." << "\n\n" << "\t\t" << "Вопрос 2." : cout << "Ошибка. Повторите попытку" << endl; cin >> res;
	(res == 2) ? rig += 1 : wrong += 1;

	// ВОПРОС 2.
	cout << "Как наз-ся присвоение начального значения переменной ?" << endl;
	cout << " Варианты ответов: " << endl;
	cout << "Инвентаризация -   1." << endl;
	cout << "Инкапсуляция -     2." << endl;
	cout << "Кастомизация -     3." << endl;
	cout << "Инициализация -    4." << endl;
	cout << "Ваш ответ: "; cin >> res;

	(res == 4) ? cout << "Верно." << "\n\n" << "\t\t" << "Вопрос 2." : cout << "Ошибка. Повторите попытку" << endl; cin >> res;
	(res == 4) ? rig += 1 : wrong += 1;

	// ВОПРОС 3.
	cout << "Размер переменной long в Байтах ?" << endl;
	cout << "Варианты ответов: 0\t2\t4\t8\t" << endl;
	cout << "Ваш ответ: "; cin >> res;

	(res == 4) ? cout << "Верно." << "\n\n" << "\t\t" << "Вопрос 2." : cout << "Ошибка. Повторите попытку" << endl; cin >> res;
	(res == 4) ? rig += 1 : wrong += 1;

	// ВОПРОС 4.
	cout << "К какому типу данных относится bool? " << endl;
	cout << " Варианты ответов: " << endl;
	cout << "Психологический -   1." << endl;
	cout << "Антропологический - 2." << endl;
	cout << "Логический -        3." << endl;
	cout << "Филологический -    4. " << endl;
	cout << "Ваш ответ: "; cin >> res;

	(res == 3) ? cout << "Верно." << "\n\n" << "\t\t" << "Вопрос 2." : cout << "Ошибка. Повторите попытку" << endl; cin >> res;
	(res == 3) ? rig += 1 : wrong += 1;

	// ВОПРОС 5.
	cout << "Сколько всего символов в кодировке ASCII ?" << endl;
	cout << "Варианты ответов: 128\t1024\t32\t256\t" << endl;
	cout << "Ваш ответ: "; cin >> res;

	(res == 256) ? cout << "Верно." << "\n\n" << "\t\t" << "Вопрос 2." : cout << "Ошибка. Повторите попытку" << endl; cin >> res;
	(res == 256) ? rig += 1 : wrong += 1;

	cout << "Количество правильных ответов: " << rig << endl;
	cout << "Количество неверных  ответов: " << wrong << endl;

#endif // TEST_TERNAR

#ifdef POLINDROM

	int number;
	int reverse = 0;
	cout << "Введите число:"; cin >> number;

	int buffer = number;

	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;

	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Число полиндром" << endl;
	}
	else
	{
		cout << "Это обычное число" << endl;
	}
#endif // POLINDROM

#ifdef TICKET

	int number;
	cout << "Введите номер билета"; cin >> number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	while (number >= 1000)
	{
		sum1 += number % 10;
		number /= 10;
	}
	while (number)
	{
		sum2 += number % 10;
		number /= 10;
	}
	if (sum1 == sum2)
	{
		cout << "Билет счастливый" << endl;
	}
	else
	{
		cout << "Обычный билет" << endl;


	}
#endif // TICKET

#ifdef SHOOTER

	char key = ' ';
	do
	{
		key = _getch();
		switch (key)
		{
		case'w':cout << "вперед" << endl; break;
		case's':cout << "назад" << endl; break;
		case'a':cout << "влево" << endl; break;
		case'd':cout << "вправо" << endl; break;
		case 13:cout << "огонь" << endl; break;
		case' ':cout << "прыжок" << endl; break;
			//default:cout << "error";
		}
	} while (key != 27);
#endif // SHOOTER






}


