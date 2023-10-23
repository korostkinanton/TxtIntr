#include <iostream>
#include <math.h>
#include <unistd.h>
using namespace std;
int main(int argc, char **argv)
{
    if(argc == 1){
        cout << "Тригонометрический калькулятор" << endl
        << "Этот калькулятор нужен для рассчета арктангенса и аркотангенса в радианах и градусах" << endl
        << "Введите число c параметром -x" << endl
        << "Чтобы найти арктангенс введите параметр 't'" << endl
        << "Чтобы найти аркотангенс введие параметр 'c'" << endl
        << "Пример использования ./hello -x 30 -o 't'" << endl;
        return 0;
    }
    //char* opts = "x:o:";
    double x;
    char op;
    int opt;
    while((opt = getopt(argc, argv, "x:o:")) != -1){
        switch(opt)
        {
            case 'x':
            x = atoi(optarg);
            break;
            case 'o':
            op = optarg[0];
            break;
        }
    }
    switch(op){
        case 't':
        cout << "arctg" << " " << x << " " << "в радианах равен..." << atan(x) << endl;
        cout << "arctg" << " " << x << " " << "в градусах равен..." << atan(x)*180/M_PI << endl;
        break;
        case 'c':
        cout << "arcctg" << " " << x << " " << "в радианах равен..." << M_PI_2-atan(x) << endl;
        cout << "arcctg" << " " << x << " " << "в радианах равен..." << (M_PI_2-atan(x))*180/M_PI << endl;
        break;
    }
    return 0;
};

