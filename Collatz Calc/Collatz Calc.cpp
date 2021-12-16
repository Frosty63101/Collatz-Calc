#include <iostream>

#include <cmath>

#include <stdlib.h>

#include <cstdlib>

#include <cstring>

#include <string>

#include <sstream>

#include <windows.h>

#include <fstream>

#define PI 3.14159265

int main()
{

    long long n{};
    long long c{};
    long long r;
    long long x;

    std::cout << "enter number wished to start from";
    std::cin >> n;
    r = 1;
    c = 0;

    std::ofstream myfile1;
    myfile1.open("output functions.txt");
    myfile1 << "";
    myfile1.close();

    std::ofstream myfile2;
    myfile2.open("output number.txt");
    myfile2 << "";
    myfile2.close();

    do {

        myfile1.open("output functions.txt", std::ofstream::app | std::ofstream::out);
        myfile2.open("output number.txt", std::ofstream::app | std::ofstream::out);

        if (myfile1.is_open() && myfile2.is_open()) {

            c = 0;

            x = n;

            do {

                if (x % 2 == 0)
                    x = x / 2;
                else
                    x = ((x * 3) + 1);

                c = (c + 1);

            } while (x != 1);

            std::cout << n << "   " << c << "\n";

            myfile1 << c << "\n";

            myfile1.close();

            myfile2 << n << "\n";

            myfile2.close();

            n = (n + 1);
        }

    } while (c <= 9999999999);
}
