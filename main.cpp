#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <array>
#include <fstream>

using namespace std;

vector<vector<string>> arr;
ifstream in("la.txt");

void f1(){
    string line;
    if (in.is_open()){
        while (getline(in, line)) {
                arr.push_back({{line[0]}, line.substr(2)}); // Добавляем в массив: 1 символ строки - "Ключ", 3 символ - "Значение"
        }
        in.close(); // Закрываем файл после чтения
    } else {
        cout << "Ошибка открытия файла." << endl;
    }
}

void f2(){
}

void f3(){
}

int main()
{
    f1();
    f2();
    f3();
    return 0;
}
