/*
- An online store wants to calculate discounts for different orders.
Create a Discount class with a function applyDiscount().
Overload applyDiscount() as follows:
One version takes 2 items and returns 10% discount on the total.
Another version takes 3 items and returns 15% discount on the total.
Task:
Create a Discount object and call both functions with sample prices.
Display the discounted amount for each case.
*/

#include <iostream>
using namespace std;

class discount
{
    protected:
    int price;
    int price2;
    int z;

    public:
    discount(int p, int p2, int z1)
    {
        price = p;
        price2 = p2;
        z = z1;
    }
    discount() = default;

    virtual void applyDiscount()
    {
        float result = (price2 + price) * (90/100);
        cout << "Final Price: " << result << endl;
    }
};

class discount2 : public discount
{
    protected:
    int price3;

    public:
    discount2(int price, int price2, int z, int p3) : discount(price, price2, z)
    {
        price3 = p3;
    }
    discount2() = default;

    void applyDiscount() override
    {
        float result = (price + price2 + price3) * (85/100);
        cout << "Final Price: " << result << endl;
    }
};

int main ()
{
    discount d1(200, 450, 0);
    discount2 d2(200, 450, 500, 0);

    d1.applyDiscount();
    d2.applyDiscount();

    return 0;
}