#include <iostream>
#include <math.h>
#include <unistd.h>
using namespace std;
int main(int argc, char *argv[])
{
    if(argc == 1){
        cout << "Тригонометрический калькулятор" << endl
        << "Этот калькулятор нужен для рассчета арктангенса и аркотангенса в радианах и градусах" << endl
        << "Чтобы найти арктангенс введите параметр -t" << endl
        << "Чтобы найти аркотангенс введие параметр -c" << endl
        << "Пример использования ./hello -t 30" << endl;
        return 0;
    }
    int opt;
    double result = 0, x;
    while((opt = getopt(argc, argv, "t:c:")) != -1){
        switch(opt){
            case 't':
                x = strtod(argv[2],NULL);
                result = atan(x);
                cout << "arctg" << " " << x << " " << "в радианах равен..." << result << endl;
                result = atan(x)*180/M_PI;
                cout << "arctg" << " " << x << " " << "в градусах равен..." << result << endl;
            break;
            case 'c':
                x = strtod(argv[2],NULL);
                result = M_PI_2-atan(x);
                cout << "arcctg" << " " << x << " " << "в радианах равен..." << M_PI_2-atan(x) << endl;
                result = (M_PI_2-atan(x))*180/M_PI;
                cout << "arcctg" << " " << x << " " << "в радианах равен..." << (M_PI_2-atan(x))*180/M_PI << endl;
            break;
        }
        
    }
    return 0;
}


