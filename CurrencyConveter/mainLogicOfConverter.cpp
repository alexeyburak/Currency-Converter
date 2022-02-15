//
// Created by Алексей Бурак on 15.02.22.
//
#include " mainLogicOfConverter.h"
#include "converterTextFiles.h"
#include "exchangeСalculation.h"
int chooseCurrency(int &currency)
{
    system("clear");
    int userChooseCurrency;
    converterMenuText();
    cout << "Choose which currency to exchange"<<endl;
    cin >> userChooseCurrency;
    switch (userChooseCurrency) {
        case 1:
            return currency = 1;
        case 2:
            return currency = 2;
        case 3:
            return currency = 3;
        case 4:
            return currency = 4;
        case 5:
            return currency = 5;
        default:
            return 0;
    }
}
int chooseCurrencyExchange(int calculationTool, int &currency, int &currencyExchange)
{
    switch (calculationTool) {
        case 1:
            chooseCurrency(currency);
            return currencyExchange = 1;
        case 2:
            chooseCurrency(currency);
            return currencyExchange = 2;
        case 3:
            chooseCurrency(currency);
            return currencyExchange = 3;
        case 4:
            chooseCurrency(currency);
            return currencyExchange = 4;
        case 5:
            chooseCurrency(currency);
            return currencyExchange = 5;
        default:
            return 0;

    }
}
void operationDefinition(int &currency, int &currencyExchange, double &exchangeAmount, double &resultOfExchange)
{
    if (currencyExchange == currency)
    {
        cout<<"Choose different currencies!"<<endl;
        converterMenu(currency, currencyExchange, exchangeAmount,resultOfExchange);
    }
    else
    {
        if (currencyExchange == 1 && currency == 2)
        {
            eur_usd(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" EUR"<<" forms "<<resultOfExchange<<" USD";
        }
        if (currencyExchange == 1 && currency == 3)
        {
            eur_byn(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" EUR"<<" form "<<resultOfExchange<<" BYN";
        }
        if (currencyExchange == 1 && currency == 4)
        {
            eur_rub(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" EUR"<<" form "<<resultOfExchange<<" RUB";
        }
        if (currencyExchange == 1 && currency == 5)
        {
            eur_uah(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" EUR"<<" form "<<resultOfExchange<<" UAH";
        }
        if (currencyExchange == 2 && currency == 1)
        {
            usd_eur(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" USD"<<" form "<<resultOfExchange<<" EUR";
        }
        if (currencyExchange == 2 && currency == 3)
        {
            usd_byn(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" USD"<<" form "<<resultOfExchange<<" BYN";
        }
        if (currencyExchange == 2 && currency == 4)
        {
            usd_rub(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" USD"<<" form "<<resultOfExchange<<" RUB";
        }
        if (currencyExchange == 2 && currency == 5)
        {
            usd_uah(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" USD"<<" form "<<resultOfExchange<<" UAH";
        }
        if (currencyExchange == 3 && currency == 1)
        {
            byn_eur(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" BYN"<<" form "<<resultOfExchange<<" EUR";
        }
        if (currencyExchange == 3 && currency == 2)
        {
            byn_usd(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" BYN"<<" form "<<resultOfExchange<<" USD";
        }
        if (currencyExchange == 3 && currency == 4)
        {
            byn_rub(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" BYN"<<" form "<<resultOfExchange<<" RUB";
        }
        if (currencyExchange == 3 && currency == 5)
        {
            byn_uah(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" BYN"<<" form "<<resultOfExchange<<" UAH";
        }
        if (currencyExchange == 4 && currency == 1)
        {
            rub_eur(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" RUB"<<" form "<<resultOfExchange<<" EUR";
        }
        if (currencyExchange == 4 && currency == 2)
        {
            rub_usd(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" RUB"<<" form "<<resultOfExchange<<" USD";
        }
        if (currencyExchange == 4 && currency == 3)
        {
            rub_byn(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" RUB"<<" form "<<resultOfExchange<<" BYN";
        }
        if (currencyExchange == 4 && currency == 5)
        {
            rub_uah(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" RUB"<<" form "<<resultOfExchange<<" UAH";
        }
        if (currencyExchange == 5 && currency == 1)
        {
            uah_eur(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" UAH"<<" form "<<resultOfExchange<<" EUR";
        }
        if (currencyExchange == 5 && currency == 2)
        {
            uah_usd(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" UAH"<<" form "<<resultOfExchange<<" USD";
        }
        if (currencyExchange == 5 && currency == 3)
        {
            uah_byn(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" UAH"<<" form "<<resultOfExchange<<" BYN";
        }
        if (currencyExchange == 5 && currency == 4)
        {
            uah_rub(exchangeAmount, resultOfExchange);
            cout<< exchangeAmount <<" UAH"<<" form "<<resultOfExchange<<" RUB";
        }
    }
}

