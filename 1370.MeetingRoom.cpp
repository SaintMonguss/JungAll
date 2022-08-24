#include <iostream>
#include <vector>

class MeetingRoom
{
public :
	int** information;
    int meeting = 0;    //ȸ�� ����
    int finish_time;
    std::vector<int> answer;

    void GetInfo()
    {
        for (int i = 0; i < meeting; i++)
        {
            std::cin >> information[i][0];  //���� ��ȣ
            std::cin >> information[i][1];  // ���� �ð�
            std::cin >> information[i][2];  //������ �ð�
        }
    }

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
                if (temp > arr[j]) // ��������
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
    MeetingRoom meetingRoom;
    std::cin >> meetingRoom.meeting;
    meetingRoom.information = new int*[meetingRoom.meeting];
    for (int i = 0; i < meetingRoom.meeting ; i++)
    {
        meetingRoom.information[i] = new int[3];
    }  // 2���� �迭 ���� �Ҵ�
    meetingRoom.GetInfo();

}

//meeting Ŭ���� ���� �ؼ� ��ġ�ϱ�
