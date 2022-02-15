//
// Created by Алексей Бурак on 15.02.22.
//
#include "workWithFiles.h"
void writeOperationsInFile(std::string fileName, double &exchangeAmount, double &resultOfExchange)
{
    std::ofstream file(fileName);
    if (!file.is_open())
    {
        std::cout << "File opening error!" << std::endl;
    }
    file << "MEMORY\n";
    file << "\nDeposit amount- " <<exchangeAmount;
    file << "\tAmount received- "<<resultOfExchange;
    file.close();
}

