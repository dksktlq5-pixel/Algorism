#include <iostream>
using namespace std;

int solution(int age)
{
    if (age <= 0 || age > 120) {
        return -1;
    }

    return 2022 - age + 1;
}

int main()
{
    int age;
    cout << "2022년 선생님의 나이는: ";
    cin >> age;

    if (age <= 0 || age > 120)
    {
        cout << "값을 다시 입력하시오" << endl;
        return 0;
    }

    cout << "선생님의 출생 연도는: "
        << solution(age) << endl;

    return 0;
}