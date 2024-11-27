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
                arr.push_back({{line[0]}, line.substr(2)}); // ��������� � ������: 1 ������ ������ - "����", 3 ������ - "��������"
        }
        in.close(); // ��������� ���� ����� ������
    } else {
        cout << "������ �������� �����." << endl;
    }
}

void f2(){
    for (auto& row : arr) {
    cout << row[1] << endl; // Выводим "Значение"
    }
}

void f3(){
     stringstream sstream;
    for (int i = 0; i < arr.size(); i++) {
        sstream << arr[i][0] << " " << arr[i][1] << endl;
    }

    ofstream out_file("fuf.txt", ios::binary);
    string data = sstream.str();
    out_file.write(data.c_str(), data.size());
    out_file.close();
}

int main()
{
    f1();
    f2();
    f3();
    return 0;
}
