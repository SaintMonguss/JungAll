#include <iostream>
#include <vector>

class MeetingRoom
{
public :
	int** information;
    int meeting = 0;    //회의 갯수
    int finish_time;
    std::vector<int> answer;

    void GetInfo()
    {
        for (int i = 0; i < meeting; i++)
        {
            std::cin >> information[i][0];  //미팅 번호
            std::cin >> information[i][1];  // 시작 시간
            std::cin >> information[i][2];  //끝나는 시간
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
                if (temp > arr[j]) // 오름차순
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
    }  // 2차원 배열 동적 할당
    meetingRoom.GetInfo();

}

//meeting 클래스 생성 해서 배치하기
