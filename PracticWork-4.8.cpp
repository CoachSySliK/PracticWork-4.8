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


    cout << endl << "Попытка номер 2"; //Попытка номер 2

    return 0;
}
