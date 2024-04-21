#include <iostream>
#include <cmath>
#include<cstdlib>
#include<ctime>

int sum(int num1, int num2 = 0, int num3 = 0, int num4 = 0, int num5 = 0) {
	return num1 + num2 + num3 + num4 + num5;
}

inline double avg(double num1, double num2, double num3) {
	double result = (num1 + num2 + num3) / 3;
	return result;
}

int max(int num1, int num2, int num3) {
	std::cout << "INTS -> ";
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	else return num3;
}
short max(short num1, short num2, short num3) {
	std::cout << "SHORTS ->";
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	else return num3;


}
double max(double num1, double num2, double num3) {
	std::cout << "Doubles -> ";
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	else return num3;
}

template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}

template <typename T>
void clear_arr(T arr[], const int length) {
	int tmp = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] < 0)
			arr[i] = tmp;
	for (int i = length - 1; i > tmp; i--)
		arr[i] == 0;
}









int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Задача 1.\n";
	int num = 10, num1 = 5, num2 = 6, num3 = 7, num4 = 4;
	std::cout << "Сумма принимаемых значений " << num << ", " << num1 << ", " << num2 << ", " << num3 << ", " << num4  << " = " << sum(num, num1, num2, num3, num4);
	std::cout << std::endl;

	std::cout << "Задача 2.\nВведите три числа -> ";
	int A, B, C;
	std::cin >> A >> B >> C;
	std::cout << "Среднее Арифметическое чисел " << A << ", " << B << " и " << C << " = " << avg(A, B, C);
	std::cout << std::endl;

	std::cout << "Задача 3.\nМаксимальное число: ";
	std::cout << max(7.67, 4.96, 5.12) << std::endl;

	std::cout << "Задача 4.\nИзначальный массив: ";
	const int size = 10;
	int arr[size];
	fill_arr(arr, size, -10, 10);
	print_arr(arr, size);
	clear_arr(arr, size);
	print_arr(arr, size);



	return 0;
}