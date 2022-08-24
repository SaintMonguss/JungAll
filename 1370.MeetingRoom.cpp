#include <iostream>
#include <vector>

class Meeting
{
public:
    int number;
    int startTime;
    int endTime;

    Meeting(int x, int y, int z) : number(x), startTime(y), endTime(z) {};
    Meeting() {};
};

class MeetingRoom
{
public :
	Meeting* information;
    int meeting = 0;    //회의 갯수
    int finish_time;
    std::vector<Meeting> answer;

    void GetInfo()
    {
        int number_tmp;
        int start_tmp;
        int end_tmp;

        for (int i = 0; i < meeting; i++)
        {
           
            std::cin >> number_tmp;
            std::cin >> start_tmp;
            std::cin >> end_tmp;
            information[i] = Meeting(number_tmp, start_tmp, end_tmp);
        }
    }

    void Answer()
    {   
        for (int i = 0; i < meeting; i++)
        {
            if (information[i].startTime >= finish_time)
            {
                answer.push_back(information[i]);
                finish_time = information[i].endTime;
            }
        }
    }
};


class SelectionSort
{
public:
    static void selectionSort(Meeting* arr, int length)
    {
        for (int i = 0; i < length - 1; i++)
        {
            Meeting temp = arr[i];
            int num = i;
            for (int j = 1 + i; j < length; j++)
            {
                if (temp.endTime > arr[j].endTime) // 오름차순
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
    meetingRoom.information = new Meeting [meetingRoom.meeting];
    meetingRoom.GetInfo();
    SelectionSort::selectionSort(meetingRoom.information, meetingRoom.meeting);
    meetingRoom.Answer();
    std::cout << meetingRoom.answer.size() << std::endl;
    for (int i = 0; i < meetingRoom.answer.size(); i++)
    {
        std::cout << meetingRoom.answer[i].number << " ";
    }
}

//meeting 클래스 생성 해서 배치하기
