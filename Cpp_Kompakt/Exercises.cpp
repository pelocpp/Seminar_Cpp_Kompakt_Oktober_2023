#include <iostream>

void teufel()
{
    int number;
    int n = 1;

    std::cout << "Teuflische Zahlenfolge" << std::endl;
    std::cout << "======================" << std::endl;

    number = 7;  // start number
    n = 1;       // counter for length of sequence

    std::cout << "Start: " << number << std::endl << std::endl;

    while (number != 1)
    {
        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else
        {
            number = 3 * number + 1;
        }

        std::cout << n << ": " << number << std::endl;
        n++;
    }
}
