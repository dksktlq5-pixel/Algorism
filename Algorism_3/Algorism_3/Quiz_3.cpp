#include <iostream>
using namespace std;

int solution(int num1, int num2)
{
    return num1 / num2;
}

int main()
{
    int num1, num2;
    cout << "첫번째 값을 입력하시오: " << endl;
    cin >> num1;
    cout << "두번째 값을 입력하시오: " << endl;
    cin >> num2;

    cout << "두 수의 나눗셈은: " << solution(num1, num2) << endl;

    return 0;
}