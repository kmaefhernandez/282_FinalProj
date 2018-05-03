#include <iostream>
#include <string>
#include "Products.h"

using namespace std;

Products::Products(string n, double p, int q, int pn)
{
    product_name = n;
    price = p;
    quantity = q;
    product_number = pn;
}

string Products::getName() const
{
    return product_name;
}

double Products::getPrice() const
{
    return price;
}

int Products::getQuantity() const
{
    return quantity;
}

int Products::getProductNumber() const
{
    return product_number;
}

double Products::calculate_total() const
{
    return price * quantity;
}
