
/*
Задание 1. Написать функцию,
которая удаляет из строки
символ с заданным номером.
*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
string delChar(string st, int n)
{
    string str = "";
    for (int i = 0; i < st.size(); i++)
    {
        if (i != n - 1)
            str += st[i];
    }
    return str;
}
int main()
{

    setlocale(LC_ALL, "RUSSIAN");

    string text = "Hello world!";
    cout << text;
    cout << endl;
    cout << delChar(text, 5);
    return 0;
}

///*
//Задание 2. Написать функцию,
//которая удаляет из строки
//все вхождения в нее заданного символа.
//*/
//
//#include <iostream>
//using namespace std;
//
////удаление всех char "ch"
//void remove(char* arr, char ch)
//{
//    const char* del = arr;
//    while (*del)
//    {
//        if (*del != ch) {
//            *arr = *del;
//            ++arr;
//        }
//        ++del;
//    }
//    *arr = '\0';//0 or 0x0;
//}
//int main()
//{
//    char str[] = "Hello world";
//    cout << str << endl;
//    remove(str, 'l');
//    cout << str << endl;
//    return 0;
//}

///*
//Задание 3. Написать функцию,
//которая вставляет в строку
//в указанную позицию заданный символ.
//*/
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//void InsertSymbol(string& s, char ch, size_t pos)
//{
//    s += ch;
//    for (size_t i = s.size() - 1; i >= pos; i--)
//        s[i] = s[i - 1];
//    s[pos - 1] = ch;
//}
//
//int main()
//{
//
//    setlocale(LC_ALL, "RUSSIAN");
//    char ch;
//    size_t pos, size;
//    string s;
//    cout << "Введи строку:\n";
//    getline(cin, s);
//    cout << "Введи сивол или букву которую хочешь вставить:\n";
//    cin >> ch;
//
//    size = s.size();
//    do
//    {
//        cout << "Введи позицию куда хочешь вставить символ в своей строке :\n";
//        cin >> pos;
//        if (pos<1 || pos>size) cout << "1<=позиция<=" << size << "  Повторите...\n";
//    } while (pos<1 || pos>size);
//
//    InsertSymbol(s, ch, pos);
//
//    cout << s << "\n";
//
//    system("pause");
//    return 0;
//}

///*
//Задание 4. Написать программу, которая заменяет все
//символы точки «.» в строке, введенной пользователем,
//на символы восклицательного знака «!».
//*/
//
//#include <iostream>
//using namespace std;
//void main()
//{
//    setlocale(LC_ALL, "RUSSIAN");
//    char line[100];
//    cout << "Введи предложение желательно с точками: ";
//    cin.getline(line, 100);
//
//    for (int i = 0; i < 100; i++)
//    {
//        if (line[i] == '.') {
//            line[i] = '!';
//        }
//
//    }
//
//    cout << line << endl;
//    cin.get(); cin.get();
//}


///*
//Задание 5. Пользователь вводит строку символов и
//искомый символ, посчитать сколько раз он встречается
//в строке.
//*/
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "RUSSIAN");
//    string stroka;
//    int counter = 0;
//    char simvol;
//
//    cout << "Введите текст: ";
//    getline(cin, stroka);
//    cout << "Введите символ или букву из текста: ";
//    cin >> simvol;
//
//    for (unsigned int i = 0; i < stroka.length(); i++)
//        if (stroka[i] == simvol)
//            counter++;
//    cout << "В тексте " << counter << " <" << simvol << "> " << endl;
//    return 0;
//}

///*
//Задание 6. Пользователь вводит строку.
//Определить количество букв, количество 
//цифр и количество остальных
//символов, присутствующих в строке.
//*/
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "RUSSIAN");
//    int i = 0, digit = 0, letter = 0;
//    string s;
//    cout << "Предложение:\n";
//    getline(cin, s);
//
//    while (s[i])
//    {
//        if (s[i] >= '0' && s[i] <= '9') digit++;
//        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) letter++;
//        i++;
//    }
//    //Пробел тоже символ !
//    cout << "Цифры=" << digit << "\nБуквы=" << letter << "\nСимволы=" << i - digit - letter << "\n";
//
//    system("pause");
//    return 0;
//}