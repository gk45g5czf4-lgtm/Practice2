#include <iostream> // Используем заголовочный файл потока ввода/вывода
#include <cmath> // Используем заголовочный файл математических функций

#include "Переменные.cpp"
#include "Консоль.cpp"

using namespace std; // Используем стандартную библиотеку

/*
    Групповое занятие: совместными усилиями реализовать доп. функции калькулятора

    ПОДЗАДАЧИ:

    1. Доработать int main()
        1.1 Вывести в консоль указания пользователю для работы с программой
        1.2 Реализовать ввод трех значений с консоли и хранение этих переменных для других методов
    2. Описать метод рассчёта площади круга
    3. Описать метод рассчёта площади прямоугольника
    4. Описать метод рассчёта площади треугольника по формуле Герона
    5. Описать метод рассчёта площади треугольника через основание и высоту

    В конце прошу округлять вычисления до двух знаков после запятой, используя
    double rounded = round(value * 100.0) / 100.0 - вернёт число с двумя знаками после запятой
    Помимо вычислений, каждый метод должен делать аккуратный вывод результата в консоль
    */

class Calculator
{
public:

    /// <summary>
    /// Вычисляет сумму двух чисел с плавающей запятой
    /// </summary>
    static double Sum(double a, double b)
    {
        // Вычисляем
        double sum = a + b;
        // Округляем
        double result = round(sum * 100.0) / 100.0;
        // Выводим в консоль рассчёты
        cout << "Сумма: " << sum << endl;

        return sum;
    }

    // Подзадача 2
    static double CircleArea(double radius)
    {
        const double PI = 3.14159265358979323846;
        double area = PI * radius * radius;
        double result = round(area * 100.0) / 100.0;
        cout << "Площадь круга: " << result << endl;
        return result;
    }

    // Подзадача 3
    static double RectangleArea(double first, double second)
    {
        double area = first * second;
        double result = round(area * 100.0) / 100.0;
        cout << "Площадь прямоугольника: " << result << endl;
        return result;
    }

    // Подзадача 4
    static double TriangleArea(double first, double second, double third)
    {
        double p = (first + second + third) / 2;
        double area = sqrt(p * (p - first) * (p - second) * (p - third));
        double result = round(area * 100.0) / 100.0;
        cout << "Площадь треугольника (по Герону): " << result << endl;
        return result;
    }

    // Подзадача 5
    static double TriangleArea(double base, double height)
    {
        double area = 0.5 * base * height;
        double result = round(area * 100.0) / 100.0;
        cout << "Площадь треугольника (основание и высота): " << result << endl;
        return result;
    }
};

int main()
{
    Console::SetRussianOnWindows();

    // Подзадача 1
    cout << "Введите три числа через пробел и нажмите Enter." << endl;
    cout << "Они будут использованы для расчёта площадей." << endl;

    double a, b, c;
    cin >> a >> b >> c;

    Calculator::Sum(a, b);
    Calculator::CircleArea(a);
    Calculator::RectangleArea(a, b);
    Calculator::TriangleArea(a, b, c);
    Calculator::TriangleArea(a, b);
}
