class Solution {
public:
    int minMovesToSeat(vector<int> &seats, vector<int> &students)
    {
        int count = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        for (int i = 0; i < students.size(); i++)
        {
            count += abs(students[i] - seats[i]);
        }
        return count;
    }
};