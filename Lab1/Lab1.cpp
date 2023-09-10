#include <iostream>
#include <memory>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
     //указатель ptr указывает на объект 125
    //std::unique_ptr<int> ptr{ std::make_unique<int>(125) };
    //std::cout << "Address: " << ptr.get() << std::endl;   // получим адрес объекта
    //std::cout << "Initial value: " << *ptr << std::endl;     // получим значение объекта

    //// изменяем значение
    //*ptr = 254;
    //std::cout << "New value: " << *ptr << std::endl;     // получим значение объекта


    //unsigned n{ 5 };   // размер массива
    //auto pnumbers{ std::make_unique<int[]>(n) };    // массив {0, 0, 0, 0, 0}

    //std::cout << "pnumbers[1] initial value: " << pnumbers[1] << std::endl; // pnumbers[1] initial value: 0
    //pnumbers[1] = 121;  // изменяем значение
    //std::cout << "pnumbers[1] new value: " << pnumbers[1] << std::endl;     // pnumbers[1] new value: 121

    //unsigned n{ 5 };   // размер массива
    //auto pnumbers{ std::make_unique<int[]>(n) };    // массив из n элементов

    //// изменим и выведем все элементы на консоль
    //for (unsigned i{}; i < n; i++)
    //{
    //    pnumbers[i] = i + 1;
    //    std::cout << "pnumbers[" << i << "] = " << pnumbers[i] << std::endl;
    //}

    //auto ptr{ std::make_unique<int>(123) };

    //// освобождаем память и удаляем объект 123
    //ptr.reset();
    //if (!ptr)   // если ptr
    //{
    //    std::cout << "Memory is free" << std::endl;
    //}
    //else
    //{
    //    std::cout << *ptr << std::endl;
    //}
    //auto ptr{ std::make_unique<int>(123) };

    //std::cout << "Old address: " << ptr.get() << std::endl;
    //std::cout << "Old value: " << *ptr << std::endl;
    //// освобождаем память и удаляем массив
    //ptr.reset(new int{ 254 });

    //std::cout << "New address: " << ptr.get() << std::endl;
    //std::cout << "New value: " << *ptr << std::endl;



    //Задача для самоконтроля
    unsigned sizeOfArray{};
    cout << "Размер массива: "; cin >> sizeOfArray;
    auto array{ std::make_unique<int[]>(sizeOfArray) };

    for (unsigned i{}; i < sizeOfArray; i++)
    {
        array[i] = i * i;
    }


    int sumOfNumbers{};     
    for (unsigned i{}; i < sizeOfArray; i++)
    {
        sumOfNumbers += array[i];
    }
    cout << "Сумма чисел массива: " << sumOfNumbers;

}