#include "CC.h"

CreditCard::CreditCard(std::string t, std::string n, std::string m, bool v) {
    assert(n.length() == 16);

    cardType = t;
    cardNum = n;
    entryMethod = m;
    validStatus = v;
}

std::string CreditCard::check_validity() const {
    return (validStatus ? "Valid card" : "Card denied");
}

std::string CreditCard::get_number() const {
    return "XXXX-XXXX-XXXX-" + cardNum.substr(12,4);
}
std::string CreditCard::get_entry_method() const {
    return entryMethod;
}
