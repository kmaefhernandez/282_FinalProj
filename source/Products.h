#ifndef Products_h
#define Products_h

#include <stdio.h>
using namespace std;

class Products
{
public:
    Products(string n, double p, int q, int pn);
    string getName() const;
    double getPrice() const;
    int getQuantity() const;
    int getProductNumber() const;
    double calculate_total() const;

private:
    string product_name;
    double price;
    int quantity;
    int product_number;

};

#endif /* Products_h */
