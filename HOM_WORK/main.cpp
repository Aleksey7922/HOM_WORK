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

	cout << "�������������� ����� � �������� ������." << endl;
	double number;
	cout << "������� ������� �����: "; cin >> number;
	int grn = number; float	cop = (number - grn) * 100;
	cout << grn << "���." << " " << cop << "���.";

#endif // TASK_1

#ifdef TASK_2

	cout << "���������� ��������� �������." << endl;
	double price_not, price_pen;
	int quant_not, quant_pen;
	cout << "������� �������� ������: " << endl;
	cout << "���� ������� (���): "; cin >> price_not;
	cout << "���������� ��������: "; cin >> quant_not;
	cout << "���� ��������� (���): "; cin >> price_pen;
	cout << "���������� ����������: "; cin >> quant_pen;
	double cost = (price_not * quant_not) + (price_pen * quant_pen);
	cout << "��������� �������: " << cost << " ���.";
#endif // TASK_2

#ifdef TASK_3

	cout << "���������� ��������� �������." << endl;
	double price_not, price_cover;
	int quant_set;
	cout << "������� �������� ������: " << endl;
	cout << "���� ������� (���.): "; cin >> price_not;
	cout << "���� ������� (���.): "; cin >> price_cover;
	cout << "���������� ���������� (��.): "; cin >> quant_set;
	double cost = (price_not + price_cover) * quant_set;
	cout << "��������� �������: " << cost << " ���.";

#endif // TASK_3

#ifdef TASK_4
	cout << "���������� ��������� ������� �� ���� � �������." << endl;
	int dist;
	double consum_gas, price_gas;
	cout << "���������� �� ���� (��): "; cin >> dist;
	cout << "������ ������� (�/100��): "; cin >> consum_gas;
	cout << "���� ������� (���.): "; cin >> price_gas;
	double res = consum_gas / 100 * dist * price_gas * 2;
	cout << "������� �� ���� � ������� ��������� � " << res << " ���.";

#endif // TASK_4
	//-------------------------------------------------------------------------------------
#ifdef TEST

	//������ 1.
	cout << "\t\t" << "������ 1." << endl;
	int result, rig = 0, wrong = 0;
	cout << "������ ���������� chort � ������ ?" << endl;
	cout << "�������� �������: 0\t2\t4\t8\t" << endl;
	cout << "��� �����: "; cin >> result;

	if (result == 2)
	{
		rig += 1;
		cout << "�����." << "\n\n" << "\t\t" << "������ 2." << endl;
	}
	else if (result != 2)
	{
		wrong += 1;
		cout << "������. ��������� �������" << endl; cout << "��� �����: "; cin >> result;
	}

	// ������ 2.
	cout << "��� ���-�� ���������� ���������� �������� ���������� ?" << endl;
	cout << "�������� �������: " << endl;
	cout << "�������������� -   1." << endl;
	cout << "������������ -     2." << endl;
	cout << "������������ -     3." << endl;
	cout << "������������� -    4." << endl;
	cout << "��� �����: "; cin >> result;

	if (result == 4)
	{
		rig += 1;
		cout << "�����." << "\n\n" << "\t\t" << "������ 3." << endl;
	}
	else if (result != 4)
	{
		wrong += 1;
		cout << "������.��������� �������" << endl; cin >> result;
	}

	// ������ 3.
	cout << "������ ���������� long � ������ ?" << endl;
	cout << "�������� �������: 0\t2\t4\t8\t" << endl;
	cout << "��� �����: "; cin >> result;

	if (result == 4)
	{
		rig += 1;
		cout << "�����." << "\n\n" << "\t\t" << "������ 4." << endl;
	}
	else if (result != 4)
	{
		wrong += 1;
		cout << "������. ��������� �������" << endl; cout << "��� �����: "; cin >> result;
	}

	// ������ 4.
	cout << "� ������ ���� ������ ��������� bool? " << endl;
	cout << "�������� �������: " << endl;
	cout << "��������������� -   1." << endl;
	cout << "����������������� - 2." << endl;
	cout << "���������� -        3." << endl;
	cout << "�������������� -    4. " << endl;
	cout << "��� �����: "; cin >> result;

	if (result == 3)
	{
		rig += 1;
		cout << "�����." << "\n\n" << "\t\t" << "������ 5." << endl;
	}
	else if (result != 3)
	{
		wrong += 1;
		cout << "������. ��������� �������" << endl; cout << "��� �����: "; cin >> result;
	}


	// ������ 5.
	cout << "������� ����� �������� � ��������� ASCII ?" << endl;
	cout << "�������� �������: 128\t1024\t32\t256\t" << endl;
	cout << "��� �����: "; cin >> result;

	if (result != 256)
	{
		wrong += 1;
		cout << "������. ��������� �������" << endl; cout << "��� �����: "; cin >> result;
	}
	else if (result == 256)
	{
		rig += 1;
		cout << "�����.\n" << endl;
	}
	cout << "���������� ���������� �������: " << rig << endl;
	cout << "���������� ��������  �������: " << wrong << endl;

#endif // TEST

#ifdef CALCULYTOR


	double a, b, res = 0; char sign;
	cout << "������� ���������: "; cin >> a >> sign >> b;
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
	//������ 1.
	cout << "\t\t" << "������ 1." << endl;
	int res = 0, rig = 0, wrong = 0;
	cout << "������ ���������� chort � ������ ?" << endl;
	cout << "�������� �������: 0\t2\t4\t8\t" << endl;
	cout << "��� �����: "; cin >> res;

	(res == 2) ? cout << "�����." << "\n\n" << "\t\t" << "������ 2." : cout << "������. ��������� �������" << endl; cin >> res;
	(res == 2) ? rig += 1 : wrong += 1;

	// ������ 2.
	cout << "��� ���-�� ���������� ���������� �������� ���������� ?" << endl;
	cout << " �������� �������: " << endl;
	cout << "�������������� -   1." << endl;
	cout << "������������ -     2." << endl;
	cout << "������������ -     3." << endl;
	cout << "������������� -    4." << endl;
	cout << "��� �����: "; cin >> res;

	(res == 4) ? cout << "�����." << "\n\n" << "\t\t" << "������ 2." : cout << "������. ��������� �������" << endl; cin >> res;
	(res == 4) ? rig += 1 : wrong += 1;

	// ������ 3.
	cout << "������ ���������� long � ������ ?" << endl;
	cout << "�������� �������: 0\t2\t4\t8\t" << endl;
	cout << "��� �����: "; cin >> res;

	(res == 4) ? cout << "�����." << "\n\n" << "\t\t" << "������ 2." : cout << "������. ��������� �������" << endl; cin >> res;
	(res == 4) ? rig += 1 : wrong += 1;

	// ������ 4.
	cout << "� ������ ���� ������ ��������� bool? " << endl;
	cout << " �������� �������: " << endl;
	cout << "��������������� -   1." << endl;
	cout << "����������������� - 2." << endl;
	cout << "���������� -        3." << endl;
	cout << "�������������� -    4. " << endl;
	cout << "��� �����: "; cin >> res;

	(res == 3) ? cout << "�����." << "\n\n" << "\t\t" << "������ 2." : cout << "������. ��������� �������" << endl; cin >> res;
	(res == 3) ? rig += 1 : wrong += 1;

	// ������ 5.
	cout << "������� ����� �������� � ��������� ASCII ?" << endl;
	cout << "�������� �������: 128\t1024\t32\t256\t" << endl;
	cout << "��� �����: "; cin >> res;

	(res == 256) ? cout << "�����." << "\n\n" << "\t\t" << "������ 2." : cout << "������. ��������� �������" << endl; cin >> res;
	(res == 256) ? rig += 1 : wrong += 1;

	cout << "���������� ���������� �������: " << rig << endl;
	cout << "���������� ��������  �������: " << wrong << endl;

#endif // TEST_TERNAR

#ifdef POLINDROM

	int number;
	int reverse = 0;
	cout << "������� �����:"; cin >> number;

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
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "��� ������� �����" << endl;
	}
#endif // POLINDROM

#ifdef TICKET

	int number;
	cout << "������� ����� ������"; cin >> number;
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
		cout << "����� ����������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;


	}
#endif // TICKET

#ifdef SHOOTER

	char key = ' ';
	do
	{
		key = _getch();
		switch (key)
		{
		case'w':cout << "������" << endl; break;
		case's':cout << "�����" << endl; break;
		case'a':cout << "�����" << endl; break;
		case'd':cout << "������" << endl; break;
		case 13:cout << "�����" << endl; break;
		case' ':cout << "������" << endl; break;
			//default:cout << "error";
		}
	} while (key != 27);
#endif // SHOOTER






}


