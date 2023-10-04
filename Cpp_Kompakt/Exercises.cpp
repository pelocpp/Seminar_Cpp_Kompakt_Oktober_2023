#include <iostream>

void zinsen()
{
    double capitalStock = 1000;
    double startCapitalStock = capitalStock;
    double interestRate = 5.0;
    int    numberYears = 10;

    std::cout << "Zinstabelle fuer Grundkapital: " << capitalStock << std::endl;
    std::cout << "Verzinsung:                    " << interestRate << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "Kapitalstand zum Jahresende:" << std::endl << std::endl;

    int year = 0;

    while (year < numberYears)
    {
        double interest = (capitalStock / 100.0) * interestRate;

        // auf addieren        
        // capitalStock = capitalStock + interest;
        // oder kürzer
        capitalStock += interest;

        std::cout << "Jahr: " << (year + 1) << "    Kapital: " << capitalStock << std::endl;

        year++;
    }

    std::cout 
        << "Aus " << startCapitalStock  << " Grundkapital wurden in " << year  
        << "Jahren " << capitalStock <<  " Euro" << std::endl;
}

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
