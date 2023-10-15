#include <iostream>
#include <cmath>
#include <getopt.h>
using namespace std;
int main(int argc, char *argv[])
{
	{ if (argc==1)
    {
        cout << "Баллистический Калькулятор" << endl
        << "Вам нужно ввести один из параметров, чтобы выбрать выполняемое действие:" << endl
        << "-v — вычисление высоты" << endl 
        << "-d — вычисление дальности" << endl 
        << "Запустите программу ещё раз с нужным параметром и введите значения угла и начальной скорости через пробел" << endl;
    }
	int opt, i; 
	double result = 0, x, t;
	while ((opt = getopt (argc, argv, "v:d:")) != -1)
        {
            switch (opt)
            {

                case 'v':
        			for(i=2; i<argc; i++)
        			{
            			x = strtod(argv[2], NULL);
            			t = strtod(argv[3], NULL);
            			result = ((t*t)*(sin(x*x))) / (10*2);
        			}
        		cout << "Высота = " << result << endl;
               	break;

               	case 'd':
    				for(i=2; i<argc; i++)
    				{
       					x = strtod(argv[2], NULL);
          				t = strtod(argv[3], NULL);
        				result = ((t*t)*(sin(x*2))) / 10;
    				}
    			cout << "Дальность = " << result << endl;
                break;
            }
        }
    }
}
