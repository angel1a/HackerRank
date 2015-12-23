class Student
{
private:
    int score[5];
public:
    void Input()
    {
        for (int i = 0; i < 5; i++)
            cin >> score[i];
    }
    int CalculateTotalScore()
    {
        int ans = 0;
        for (int i = 0; i < 5; i++)
            ans += score[i];
        return ans;
    }
};