// Recursion.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>
#include <cctype>
void Pal(char str[], int start, int length);
bool isletter(char letter);

int main()
{
    setlocale(LC_ALL, "rus");
    //std::cout << "Введите предложение (На англ): ";
    char str[] {"Леша на полке клопа нашел.\n"};
    std::cout << str;
    //char str[1000];
    //std::cin >> str;
    int length = strlen(str);
    Pal(str, 0, length-1);
}

void Pal(char str[],int start, int length)
{
    if (start >= length)
    {
        std::cout << "Данное предложение ЯВЛЯЕТСЯ палиндромом";
        return;
    }
    while (!isletter(str[start]))
    {
        start++;
    }
    while (!isletter(str[length]))
    {
        length--;
    }
    if (tolower(str[start]) == tolower(str[length]))
        Pal(str, start + 1, length - 1);
    else
    {
        std::cout << "Данное предложение НЕ является палиндромом";
        return;
    }
        

}
bool isletter(char letter) {
    return letter >= 'а' && letter <= 'я' || letter >= 'А' && letter <= 'Я' || letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z';
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
