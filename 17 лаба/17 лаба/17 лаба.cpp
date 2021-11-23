
#include <windows.h>
#include <ctime>
#include "ввід даних.h"
#include "вивід даних.h"
#include "сортування.h"
#include "парні не парні.h"
#include "сума цифр.h"
#include "числа навпаки.h"
#include "2 масива.h"
#include "стиснення.h"

HANDLE console;

int main()
{
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, 2);
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Розмір масиву : ";
    cin >> n;
    int* x = new int[n];
    input(x, n); //ввід
    output(x, n); //вивід
    sort(x, n); //бульбашка
    evenanddd(x, n); //яких більше
    digital(x, n); //сума цифр
   /* reverse(x, n); числа навпаки*/
    arrays(x, n); //2 масива
    compression(x, n); //стиснення
}
