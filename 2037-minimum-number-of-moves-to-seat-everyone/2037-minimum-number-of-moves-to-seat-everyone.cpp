class Solution {
public:
    int minMovesToSeat(vector<int> &seats, vector<int> &students)
    {
        int count = 0;
        Sort(seats);
        Sort(students);
        for (int i = 0; i < students.size(); i++)
        {
            count += abs(students[i] - seats[i]);
        }
        return count;
    }
    void Sort(vector<int> &arr)
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            for (int j = i + 1; j > 0; j--)
            {
                if (arr[j] < arr[j - 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
                else
                {
                    break;
                }
            }
        }
    }
    
};