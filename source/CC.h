#ifndef CC_H_INCLUDED
#define CC_H_INCLUDED

#include <iostream>
#include <string>
#include <regex>
#include <assert.h>

class CreditCard{
public:
    CreditCard(std::string t, std::string n, std::string m, bool v);
    std::string check_validity() const;
    std::string get_number() const;
    std::string get_entry_method() const;
private:
    std::string  cardNum,
                 cardType,
                 entryMethod;
    bool validStatus;
};

#endif // CC_H_INCLUDED
