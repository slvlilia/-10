#include <iostream>
#include <math.h>
void print()
{
    std::cout << "y=√𝑥2+𝑐23 ;𝑥=𝑒𝑚𝑘 ;𝑐=cos2𝑚+𝑘2" << std::endl;
}

using namespace  std;


 int main()
{
    setlocale(0, ".1251");
    double k[18], max;
    int i = 0, mai;
    cout << "Введіть значення " << i + 1 << " -й цілий єлемент "; cin >> k[0];
    max = k[0];
    mai = 0;
    for (i = 1; i < 18; i++) {
        cout << "Введіть значення " << i + 1 << " -й цілий єлемент "; cin >> k[i];
        if (k[i] > max) {
            max = k[i];
            mai = i;
        }
    }
    cout << "Зміненний масив: " << endl;
    for (i = mai; i < 18; i++) {
        cout << k[i] << endl;
    }
}
