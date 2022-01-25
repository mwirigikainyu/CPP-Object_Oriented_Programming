#include <iostream>
using namespace std;

class Restaurant{
string Food;
string Drink;
int Orders;

public:
    Restaurant(string food, string drink, int orders)
    {
        Food = food;
        Drink = drink;
        Orders = orders;
    }
    //setters and getters (access modifiers and accessors)
    void setFoodOrder(string food){Food = food;}
    void getFoodOrder(){cout<< Food;}
    void setDrinkOrder(string drink){Drink = drink;}
    void getDrinkOrder(){cout<< Drink;}
    void setNumberOfOrders(int orders){Orders = orders;}
    void getNumberOfOrders(){cout<< Orders;}
};

class SecondRestaurant : public Restaurant{
string Temperature;
bool Delivery;
bool Extras;

public:
    SecondRestaurant(string food, string drink, int orders, string temperature, bool delivery = true, bool extras = true) 
    : Restaurant(food, drink, orders)
    {
        Temperature = temperature;
        Delivery = delivery;
        Extras = extras;
    }
};


int main(){
    Restaurant table21("lobster", "gingerale", 2);
    table21.getDrinkOrder();
    SecondRestaurant table49("prawn rice", "screwdriver", 6, "hot", true, false);
    table49.getNumberOfOrders();

    return 0;
}