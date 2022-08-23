#include <iostream>

class MeetingRoom
{
public :
	int* arry;

};


class SelectionSort
{
    static void selectionSort(int *arr)
    {
        int length = sizeof(*arr) / 4;
        for (int i = 0; i < length - 1; i++)
        {
            int temp = arr[i];
            int num = i;
            for (int j = 1 + i; j < length; j++)
            {
                if (temp < arr[j]) // 내림차순
                {
                    temp = arr[j];
                    num = j;
                }
            }
            arr[num] = arr[i];
            arr[i] = temp;
            //std::cout << length[i] << " ";
        }
    }
};




int main()
{

}