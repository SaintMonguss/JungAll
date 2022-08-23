#include <iostream>

class Calculater
{
    int plank = 0;
    int cowHouse = 0;
    int usedHouse = 0;
    int answer = 0;
    int *barn;
    int *length;
public:
    int calculate() 
    {
        barn = new int[usedHouse]; //  소가 있는 헛간의 번호
        length = new int[usedHouse-1]; // 그 헛간들 사이의 거리
        for(int i = 0; i < usedHouse ; i++)
        {
            std::cin >> barn[i];
        }
         for(int i = 0 ; i < (usedHouse)-1 ; i++)
        {
            int temp = barn[i];
            int num = i;
            for(int j = 1+i; j < usedHouse ; j++)
                {
                    if(temp > barn[j])
                    {
                        temp = barn[j];
                        num = j;
                    }          
                }
            barn[num] = barn[i];
            barn[i] = temp;
            //std::cout << length[i] << " ";
        }
        for(int i = 0; i < usedHouse-1 ; i++)
        {
            length[i] = barn[i+1] - barn[i] -1;// 거리의 단위는 사이의 헛간 개수 따라서 11번쨰와 12번째는 거리가 0
        }
        // 선택 정렬
        for(int i = 0 ; i < (usedHouse-1)-1 ; i++)
        {
            int temp = length[i];
            int num = i;
            for(int j = 1+i; j < usedHouse-1 ; j++)
                {
                    if(temp < length[j])
                    {
                        temp = length[j];
                        num = j;
                    }          
                }
            length[num] = length[i];
            length[i] = temp;
            //std::cout << length[i] << " ";
        }
        answer = barn[usedHouse - 1] - barn[0] + 1;

        for (int i = 0 ; i < plank -1 ; i++)
        {
            answer -= length[i];
        }
        return answer;
    }

    void Setplank(int plank)
    {
        this->plank = plank;
    }

    void SetCowHouse(int cowHouse)
    {
        this->cowHouse = cowHouse;
    }

    void SetUsedHouse(int usedHouse)
    {
        this->usedHouse = usedHouse;
    }
};


int main ()
{
    int plank = 0;
    int cowHouse = 0;
    int usedHouse = 0;

    Calculater calculater;
    std::cin >> plank;
    std::cin >> cowHouse;
    std::cin >> usedHouse;
    if (plank >= usedHouse)
    {
        std::cout << usedHouse << std::endl;
        return 0;
    }
    calculater.Setplank(plank);
    calculater.SetCowHouse(cowHouse);
    calculater.SetUsedHouse(usedHouse);
    std::cout << calculater.calculate() << std::endl;
    return 0;
}
