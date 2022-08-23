#include <iostream>

class Mass
{
    public:
    int w1;
    int w2;
    int w4;
    int w8;
    int w16;
};

class Calculater
{
    Mass mass;
    int counter = 0;
public:
    Calculater(int w1, int w2, int w4, int w8, int w16) 
    {
        mass.w1 = w1;
        mass.w2 = w2;
        mass.w4 = w4;
        mass.w8 = w8;
        mass.w16 = w16;
    }
    int Anwer(int &weight)
    {
        UseW16(weight);
        UseW8(weight);
        UseW4(weight);
        UseW2(weight);
        UseW1(weight);
        if (weight == 0)
            return counter;
        else
            return -1;
    }
    void UseW16(int &weight)
    {
        while(mass.w16 > 0 && weight >= 16)
        {
            mass.w16--;
            weight -= 16;
            counter++;
        }
    }
    void UseW8(int &weight)
    {
        while(mass.w8 > 0 && weight >= 8)
        {
            mass.w8--;
            weight -= 8;
            counter++;
        }
    }
     void UseW4(int &weight)
    {
        while(mass.w4 > 0 && weight >= 4)
        {
            mass.w4--;
            weight -= 4;
            counter++;
        }
    }
     void UseW2(int &weight)
    {
        while(mass.w2 > 0 && weight >= 2)
        {
            mass.w2--;
            weight -= 2;
            counter++;
        }
    }
     void UseW1(int &weight)
    {
        while(mass.w1 > 0 && weight >= 1)
        {
            mass.w1--;
            weight -= 1;
            counter++;
        }
    }
};

int main()
{
    int w1;
    int w2;
    int w4;
    int w8;
    int w16;
    int weight;

    std::cin >> w1;
    std::cin >> w2;
    std::cin >> w4;
    std::cin >> w8;
    std::cin >> w16;
    std::cin >> weight;

    Calculater calculater = Calculater(w1,w2,w4,w8,w16);
    (calculater.Anwer(weight) == -1) ? (std::cout << "impossible") : (std::cout << calculater.Anwer(weight));
    return 0;
}