#include <iostream>
#define MODE 2

#if MODE == 1
int add(int num1, int num2)
{
    return num1 + num2;
}
#endif

int main()
{
    setlocale(LC_ALL, "rus");
    #ifndef MODE
    #error Определите MODE
    #endif
    #if MODE == 0
    std::cout << "Работаю в режиме тренировки";
    #elif MODE == 1
    std::cout << "Работаю в боевом режиме\n";
    int num1{}, num2{};
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    std::cout << "Результат сложения: " << add(num1, num2);
    #else
    std::cout << "Неизвестный режим";
    #endif
    return EXIT_SUCCESS;
}