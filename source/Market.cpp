#include "Market.h"

Market::Market(std::string n, std::string a, std::string p, std::string f) {
        this->cashier = "None";
        this->marketName = n;
        this->marketAddress = a;
        this->phoneNumber = p;
        this->faxNumber = f;
}

Market::~Market() {}

void Market::setCashier(std::string c) {
    this->cashier = c;
}

std::string Market::getCashier() const {
    return cashier;
}

std::string Market::getMarketName() const {
    return marketName;
}

std::string Market::getMarketAddress() const {
    return marketAddress;
}

std::string Market::getPhoneNumber() const {
    return phoneNumber;
}

std::string Market::getFaxNumber() const {
    return faxNumber;
}

void Market::displayMarketInfo() const {
    /** Console is 80 char wide
        Set the print offset equal to [40 + (half the string's length)],
        where 40 is the center of the console. **/

//    std::string  n = getMarketName(),
//            a = getMarketAddress(),
//            p = getPhoneNumber(),
//            f = getFaxNumber(),
//            c = getCashier();
//
//    std::cout << std::setw(center(n)) << n << std::endl;
//    std::cout << std::setw(center(a)) << a << std::endl;
//    std::cout << std::setw(center("PHONE: " + p)) << "PHONE: " + p << std::endl;
//    std::cout << std::setw(center("FAX: " + f)) << "FAX: " + f << std::endl;
//    std::cout << std::setw(center("Cashier: " + c)) << "Cashier: " + c << std::endl;
}

/**
    Finds the number of spaces to add the setw function
    to center the text.
    @param  {int}       w   - The cha width of the console.
    @param  {string}    s   - The string to center.
    return {int} - The number of spaces to add
**/
int Market::center(int w, std::string s) {
    return (w/2 + s.length()/2);
}
