#include <iostream>
#include <vector>
#include <string>
using namespace std;

// aggregation
class Customer{
public:
    void eat(string food){
        cout << "Customer eat " << food << endl;
    }
};

class BurgerRestaurant
{

public:
    void serveFood(Customer c){
        c.eat("Burger");
    }
};

// composition
class Fish
{
};

class Aquarium
{
    vector<Fish *> fishCollection;
    int cFish = 0;

public:
    void PutFish(Fish *f)
    {
        this->fishCollection.push_back(f);
        this->cFish++;
    }
};

int main()
{
    Aquarium a;
    a.PutFish(new Fish);
    // delete a; if i delete this object then all fish object will be destroyed =--> composition
    Customer c1;
    BurgerRestaurant burgerKing;
    burgerKing.serveFood(c1);
    // delete burgerKing; if i delete this object, c1 will still alive. =--> aggregation
}