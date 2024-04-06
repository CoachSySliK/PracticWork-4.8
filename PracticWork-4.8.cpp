#include <iostream>
//как-то это можно сдеоать циклом, что бы было неограниченное количество переменных, и цикл всё равно находил правильное значение.
//сначала сделаю через if, а потом буду пытаться, благо весь день впереди, всё равно выходной.

using namespace std;

int main()
{
    cout << "Ищем того, кто меньше всех работает, но больше всех получает!\n";
    

    int salary1, salary2, salary3, salaryLow, salaryHigh, salaryMiddle;

    cout << "Введитие зарплату первого сотрудника: ";
    cin >> salary1;    
    cout << "Введитие зарплату второго сотрудника: ";
    cin >> salary2;
    cout << "Введитие зарплату третьего сотрудника: ";
    cin >> salary3;

    cout << "--------идёт подсчёт--------\n";
    
    salaryMiddle = (salary1 + salary2 + salary3) / 3;

    
    if (salary1 <= salary2 && salary1 <= salary3) {
        salaryLow = salary1;
    }
    else if (salary2 <= salary1 && salary2 <= salary3) {
        salaryLow = salary2;
    }
    else {
        salaryLow = salary3;
    }

    if (salary1 >= salary2 && salary1 >= salary3) {
        salaryHigh = salary1;
    }
    else if (salary2 >= salary1 && salary2 >= salary3) {
        salaryHigh = salary2;
    }
    else {
        salaryHigh = salary3;
    }
    
    //cout << salaryHigh << endl << salaryMiddle << endl << salaryLow << endl;

    cout << "Самая высокая зарплата: " << salaryHigh << endl;
    cout << "Срендяя зарплата: " << salaryMiddle << endl;
    cout << "Разница между самой высокой и низкой зарплатой: " << salaryHigh - salaryLow << endl;


    cout << endl << "Попытка номер 2\n"; //Попытка номер 2

    //стираем данные
    salaryHigh = 0;
    salaryMiddle = 0;
    salaryLow = 0;

    int works;
    cout << "Введите количество сотрудников: ";
    cin >> works;
    //в массиве можно использовать только константу, по этому цикл нужен для того, что бы размер массива был равен количеству сотрудников.
    int* salary = new int[works]; //это я подсмотрел в гугле, но не совсем понял как это работает. 
    //я понял что * нужна для того, что бы зарезевировать столько места, сколько будет надо.
    //но я не понял почему нельзя просто salary[works]
    //new int[] вообще не понятная для меня конструкция.
    for (int i = 0; i < works; i++) {
        cout << "Введите зарплату " << i + 1 << "-го сотрудника: ";
        cin >> salary[i];
    }
    
    cout << "--------идёт подсчёт--------\n";

    int i = 0;
    int k = 0;
    //проверка на наименьшее. первый элемент сравнивается со всеми остальными, 
    //если нахожится элемент меньше, то дальше он сравнивается со всеми. 
    while ( i < works && k < works) {    
        if (salary[i] <= salary[k]) {
            k++;
        }
        else {
            i = k;
        }
    }
    salaryLow = salary[i];

    //обновляем коэффициенты
    i = 0;
    k = 0;
    
    //такая же проверка на самое большое число
    while (i < works && k < works) {
        if (salary[i] >= salary[k]) {
            k++;
        }
        else {
            i = k;
        }
    }
    salaryHigh = salary[i];


    //складываю все элементы для вычисления среднего
    for (int i = 0; i < works; i++) {
        salaryMiddle += salary[i];
    }

    //cout << salaryMiddle << endl;

    salaryMiddle /= works;

    cout << "Самая высокая зарплата: " << salaryHigh << endl;
    cout << "Срендяя зарплата: " << salaryMiddle << endl;
    cout << "Разница между самой высокой и низкой зарплатой: " << salaryHigh - salaryLow << endl;


    delete[] salary;
    return 0;
}

//мне кажется пора разбивать код на функции. не удобно когда весь код не помещается на экран
