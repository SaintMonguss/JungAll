#include <iostream>

int arry[100][100];
int count = 0;
int check_x = 0;
int check_y = 0;
int direction = 0;

void UpMove(const int length)
{
    for (int i = length - check_y; i > check_y; i--)
    {
        if (arry[check_x - 1][i] == -1)
        {
            arry[check_x - 1][i] = (count % 10);
            count++;
        }
        else
            break;
    }
    check_y += 1;
}

void LeftMove(const int length)
{
    for (int i = length - check_x; i >= check_x; i--)
    {
        if (arry[length - check_y][i] == -1)
        {
            arry[length - check_y][i] = (count % 10);
            count++;
        }
        else
            break;
    }
    check_x += 1;
}

void SideMove(const int length)
{
    for (int i = 0; i < (length - check_x - check_y); i++)
    {
        if (arry[i + check_y][i] == -1)
        {
            arry[i + check_y][i] = (count % 10);
            count++;
        }
        else
            break;
    }
}


int main ()
{
    int length = 0 ;

    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
        {
            arry[i][j] = -1;
        }


    std::cin >> length;
    for(int i = 0 ; i < length ; i++)
    {
        arry[i][i] = (count % 10);
        count++;
    }

    for(int i = 0; i < length/3 + 1 ; i++)
    {
        SideMove(length);
        LeftMove(length);
        UpMove(length);
    }

    for(int j = 0; j < length; j++)
        for(int i = 0 ; i < length ; i++)
        {
            (arry[i][j] != -1) ? std::cout << arry[i][j] << " " : std::cout << std::endl;
        }
    
    return 0;

}

