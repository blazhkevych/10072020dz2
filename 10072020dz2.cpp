/*
Задание 2.
Используя механизм шаблонного наследования создайте иерархию классов.
Базовый класс под названием Base имеет следующие переменные-члены:
1. T1 Value1; // некоторое значение.
2. T2 Value2; // некоторое значение.
Потомок под названием Child содержит дополнительные переменные-члены:
1. T3 Value3.
2. T4 Value4.
Потомок под названием child2 добавляет такие переменные-члены:
1. T5 Value5.
2. T6 Value6.
Каждый класс имеет необходимый набор конструкторов, деструкторов, функций-членов для работы со структурой класса.
В main протестировать работу класса.
*/

#include <iostream>
using namespace std;

template <typename T1, typename T2>
class base {
private:
    T1 value1;
    T2 value2;
public:
    base(T1 v1, T2 v2) {
        value1 = v1;
        value2 = v2;
    }
    void Print() {
        cout << "value1 = " << value1 << endl;
        cout << "value2 = " << value2 << endl;
    }
};

template <typename T1, typename T2, typename T3, typename T4>
class child : public base <T1, T2> {
private:
    T3 value3;
    T4 value4;
public:
    child(T1 v1, T2 v2, T3 v3, T4 v4) : base(v1, v2) {
        value3 = v3;
        value4 = v4;
    }
    void Print() {
        base::Print();
        cout << "value3 = " << value3 << endl;
        cout << "value4 = " << value4 << endl;
    }
};

template <typename T1, typename T2, typename T5, typename T6>
class child2 : public base <T1, T2> {
private:
    T5 value5;
    T6 value6;
public:
    child2(T1 v1, T2 v2, T5 v5, T6 v6) : base(v1, v2) {
        value5 = v5;
        value6 = v6;
    }
    void Print() {
        base::Print();
        cout << "value5 = " << value5 << endl;
        cout << "value6 = " << value6 << endl;
    }
};

int main() {
    base<int, double> A(1, 1.1);
    A.Print();
}