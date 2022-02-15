#include <iostream>
#include "converterTextFiles.h"
#include " mainLogicOfConverter.h"
#include "workWithFiles.h"
using namespace std;

void converterMenu(int &currency, int &currencyExchange, double &exchangeAmount, double &resultOfExchange)
{
    int userSelection, calculationTool;
    cout << "1. Turn On CONVERTER\t2. Manual"<<endl;
    cin >> userSelection;
    switch (userSelection) {
        case 1:
            converterMenuText();
            cout << "Choose which currency you want to exchange"<<endl;
            cin >> calculationTool;
            chooseCurrencyExchange(calculationTool, currency, currencyExchange);
            operationDefinition(currency, currencyExchange, exchangeAmount, resultOfExchange);
            break;
        case 2:
            converterManual();
            break;
        default:
            cout<<"There is no such option!"<<endl;
    }
}

int main() {
    cout << "Welcome to the Currency converter!\t All data is recorded!" << endl;
    int currency = 0, currencyExchange = 0;
    double exchangeAmount = 0, resultOfExchange = 0;
    bool programContinue;
    while (!programContinue)
    {
        converterMenu(currency, currencyExchange, exchangeAmount, resultOfExchange);
        writeOperationsInFile("memory.txt", exchangeAmount, resultOfExchange);
        cout<<"\n0. Continue\n1. Turn off CONVERTER"<<endl;
        cin >> programContinue;
    }
    return 0;
}
