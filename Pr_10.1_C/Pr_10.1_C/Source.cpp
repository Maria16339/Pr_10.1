#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

int Count();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Кількість  'abc' в файлі t.txt: " << Count() << endl;
    return 0;
}
int Count()
{
    ifstream t("t.txt");
    string s;

    int k = 0;

    while (getline(t, s))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a' &&
                s[i + 1] == 'b' &&
                s[i + 2] == 'c' )
            {
                k++;
            }
        }
    }
    return k;
}