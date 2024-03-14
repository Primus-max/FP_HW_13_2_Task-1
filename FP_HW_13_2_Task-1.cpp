// Используя два указателя на массив целых
// чисел, скопировать один массив в другой.
// Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

template<typename T>
void FillArray(T* arr, int size);

template<typename T>
void PrintArray(T* arr, int size);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size = 0;
    cout << "Указать размер массива для заполнения : ";
    cin >> size;
    int* Array = new int[size];

    FillArray(Array, size);
    cout << "Заполненный массив ------------------- >>" << endl;
    PrintArray(Array, size);
}

template<typename T>
void FillArray(T* arr, int size) {
    random_device random;
    for (int* i = arr; i < arr + size; ++i)
    {
        *i = random() % (100 + 50) - 50;
    }
}

template<typename T>
void PrintArray(T* arr, int size) {
    for (int* i = arr; i < arr + size; ++i)
    {
        cout << "[ " << *i <<" ]";
    }

    cout << endl;
}