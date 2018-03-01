#include <iostream>
#include <cmath>
using namespace std;

void Find_Dividers(int input_number, register int i, int k)
{
    int sqrtN = sqrt(input_number);
    if (sqrtN * sqrtN == input_number)
    {
        cout << sqrtN << " ";
        sqrtN--;
    }
        for (; i <= sqrtN; i += k)
            if (!(input_number % i))
               cout << i << " " << input_number / i << " ";
}
int main()
{
    int input_number;

    cout << "Write your number" << endl;
    cin >> input_number;

    if (!input_number)
        return 0;
    else if ((input_number % 2))
        Find_Dividers(input_number, 1, 2);
    else
        Find_Dividers(input_number, 1, 1);
    return 0;
}
