#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define tab "\t"

#define TASK_0
#define TASK_1
#define TASK_2

void main()
{
	setlocale(LC_ALL, "Russian");
	
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8, 13, 21 };


//Ввод элементов массива с клавиатуры:
	cout << "Введите значения элементов массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

//Вывод массива на экран:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

#ifdef TASK_0
//Вывод массива на экран в обратном порядке (от последнего элемента к первому):
    for (int i = SIZE - 1; i >= 0; i--)
    {
	    cout << arr[i] << tab;
    }
    cout << endl;
#endif // TASK_0


#ifdef TASK_1
//Вывод среднего арифметического и суммы всех элементов в массиве
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма всех элементов: " << sum << endl;
	cout << "Среднее арифметическое всех элементов: " << (float)sum / SIZE << endl;
#endif // TASK_1

	
#ifdef TASK_2
	//Вывод Max и Min значения в массиве
	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < SIZE; i++)
	{

		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	cout << "Максимальное значение в массиве: " << max << endl;
	cout << "Минимальное значение в массиве: " << min << endl;
#endif // TASK_2

	
}