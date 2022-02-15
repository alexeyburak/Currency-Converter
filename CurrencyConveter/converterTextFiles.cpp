//
// Created by Алексей Бурак on 15.02.22.
//
#include "converterTextFiles.h"
void converterMenuText()
{
    std::cout<<"1. EUR\n2. USD\n3. BYN\n4. RUB\n5. UAH\n";
}
void converterManual()
{
    system("clear");
    std::cout<<"\t\t\t\tMANUAL"<<std::endl;
    std::cout <<"-------------------------------------------------------\n"
         <<"| This converter calculates the currency at the rate  | \n| set by the National Bank of the Republic of Belarus |\n"
         <<"-------------------------------------------------------\n\t\t\t\tAvailable operations\n"
         << "\t-------------------------------------" << std::endl;
    std::cout << "\t| Currency " << std::setfill(' ') << std::setw(4) << "|\tOperations " << std::setfill(' ') << std::setw(10) << "|\n"
         << "\t-------------------------------------\n"
         << "\t|   EUR    " << std::setfill(' ') << std::setw(12) << "|\t EUR-USD, EUR-BYN, |"
         <<"\n\t|          " << std::setfill(' ') << std::setw(12)<<"|\t EUR-RUB, EUR-UAH  " << "|\n"
         << "\t-------------------------------------\n"
         << "\t|   USD    " << std::setfill(' ') << std::setw(12) << "|\t USD-EUR, USD-BYN, |"
         <<"\n\t|          " << std::setfill(' ') << std::setw(12)<<"|\t USD-RUB, USD-UAH  " << "|\n"
         << "\t-------------------------------------\n"
         << "\t|   BYN    " << std::setfill(' ') << std::setw(12) << "|\t BYN-EUR, BYN-USD, |"
         <<"\n\t|          " << std::setfill(' ') << std::setw(12)<<"|\t BYN-RUB, BYN-UAH  " << "|\n"
         << "\t-------------------------------------\n"
         << "\t|   UAH    " << std::setfill(' ') << std::setw(12) << "|\t UAH-EUR, UAH-USD, |"
         <<"\n\t|          " << std::setfill(' ') << std::setw(12)<<"|\t UAH-BYN, UAH-RUB  " << "|\n"
         << "\t-------------------------------------\n"
         << "\t|   RUB    " << std::setfill(' ') << std::setw(12) << "|\t RUB-EUR, RUB-USD, |"
         <<"\n\t|          " << std::setfill(' ') << std::setw(12)<<"|\t RUB-BYN, RUB-UAH  " << "|\n"
         << "\t-------------------------------------" << std::endl;
}
