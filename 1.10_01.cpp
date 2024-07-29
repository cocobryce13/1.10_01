#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size;
    int a;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int* arr = new int[size] {};

    for (int i = 0; i < size; i++)
    {
        int a;
        std::cout << "arr [" << i << "] = ";
        std::cin >> a;
        arr[i] = a;
    }

    std::cout << "Введёный массив: ";


    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n\n";
    delete[] arr;

    return 0;
}