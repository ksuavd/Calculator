// Calculator.cpp 

#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "     ---КАЛЬКУЛЯТОР---" << endl;

    float A = 0.0F, B = 0.0F, Result = 0.0F;
    char Key = ' ';
    cout << R"(
Выберите действиe:

Сложение:     А+В
Вычитание:    A-B
Умножение:    А*В
Деление:      А/В

)";
    cin >> A >> Key >> B;
    system("cls");
    cout << "     ---КАЛЬКУЛЯТОР---" << endl;

    cout << R"(
Выберите действиe:

Сложение:     А+В
Вычитание:    A-B
Умножение:    А*В
Деление:      А/В

)";

    switch (Key)
    {
    case '+': 
        Result = A + B;
        cout << A<< "+" << B <<"=" << Result << endl;
        break; 

    case '*': 
        Result = A * B;
        cout << A << "*" << B << "=" << Result << endl;
        break;

    default: // пользоатель ввел неккоретный знак 
        cout << "\nНекорректное действие!" << endl;
        break;

    case '/':
        Result = A / B;
        if (B == 0)
        {
            cout << "\nНа ноль делить нельзя (даже если очень хочется)!" << endl;
        }
        else
        {
            cout << A << "/" << B << "=" << Result << endl;
        }
        
        break;
    case '-':
        Result = A - B;
        cout << A << "-" << B << "=" << Result << endl;
        break;

    }
    cout << endl;
    system("pause");
  

}

