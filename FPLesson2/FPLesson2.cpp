// FPLesson2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void MultiplyPrintSymbol(int count, char symbol, char startSymbol, char endSymbol)
{
    int counter = count + 2;
    string str = new char[counter];
    for (int i = 1; i < counter-1; i++)
    {
        str[i] = symbol;
    }
    str[0] = startSymbol;
    str[counter - 1] = endSymbol;
    cout << str << endl;
}
void MultiplyPrintSymbolWithTextOnCenter(int count, char symbol, char startSymbol, char endSymbol,int lengthText, string textInCenter)
{
    int counter = count + 2 - lengthText;
    int counterFirst = counter / 2 + lengthText % 2;
    int counterEnd = counter / 2;
    string str = new char[counter];
    for (int i = 1; i < counterFirst; i++)
    {
        str[i] = symbol;
    }
    for (int i = counterFirst; i < counterFirst + lengthText; i++)
    {
        str[i] = textInCenter[i-counterFirst];
    }
    for (int i = counterFirst + lengthText; i < counter; i++)
    {
        str[i] = symbol;
    }
    str[0] = startSymbol;
    str[counter - 1] = endSymbol;
    cout << str << endl;
}
int main()
{    
    // Задача 1 и 2

    /*SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    string name = new char[50];
    string author = new char[50];
    string publisher = new char[50];
    string pages = new char[50];

    cout << "Введите имя книги" << endl;
    getline(cin, name);
    cout << "Введите автора книги" << endl;
    getline(cin, author);
    cout << "Введите издательство книги" << endl;
    getline(cin, publisher);
    cout << "Введите кол-во страниц в книге" << endl;
    getline(cin, pages);

    cout << "Name: " << "\"" << name << "\" \n";
    Beep(120, 100); Sleep(100);
    cout << "Author: " << "\"" << author << "\" \n";
    Beep(630, 200); Sleep(100);
    cout << "Publisher: " << "\"" << publisher << "\" \n";
    Beep(1330, 300); Sleep(100);
    cout << "Pages: " << "\"" << pages << "\" \n";
    Beep(3330, 400); Sleep(100);
    
    cout << "Name: " << "\"" << name << "\" \n" << "Author: " << "\"" << author << "\" \n" << "Publisher: " << "\"" << publisher << "\" \n" << "Pages: " << "\"" << pages << "\" \n";
    */
    // Задача 3




    CONST char vertical = (char)186;
    CONST char leftTopCorner = (char)201;
    CONST char rightTopCorner = (char)187;
    CONST char leftBottomCorner = (char)200;
    CONST char rightBottomCorner = (char)188;
    CONST char horizontal = (char)205;

    MultiplyPrintSymbol(80, horizontal, leftTopCorner, rightTopCorner);

    for (int i = 0; i < 3; i++)
    {
        MultiplyPrintSymbol(80, ' ', vertical, vertical);
    }
    MultiplyPrintSymbolWithTextOnCenter(92, ' ', vertical, vertical, 12, "Vremena goda");
    for (int i = 0; i < 3; i++)
    {
        MultiplyPrintSymbol(80, ' ', vertical, vertical);
    }
    MultiplyPrintSymbol(80, horizontal, leftBottomCorner, rightBottomCorner);
    return 0;
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
