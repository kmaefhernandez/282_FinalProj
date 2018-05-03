#ifndef MARKET_H_INCLUDED
#define MARKET_H_INCLUDED

#include <string>
#include <iostream>
#include <iomanip>

class Market {
public:
    Market(std::string n, std::string a, std::string p, std::string f);
    ~Market();

    void setCashier(std::string c);
    std::string getCashier() const;
    std::string getMarketName() const;
    std::string getMarketAddress() const;
    std::string getPhoneNumber() const;
    std::string getFaxNumber() const;
    void displayMarketInfo() const;

    static int center(int w, std::string s);

private:
    std::string cashier;
    std::string marketName;
    std::string marketAddress;
    std::string phoneNumber;
    std::string faxNumber;
};


#endif // MARKET_H_INCLUDED
