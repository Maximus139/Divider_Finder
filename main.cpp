#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Write your number" << endl;
    int input_number;
    register int i;
    cin >> input_number;
    int sqrtN = sqrt(input_number);
    if (!input_number)
        return 0;
    else if (!(input_number % 2))
    {
        cout << "1 " << input_number << " ";
        for (i = 2; i <= sqrtN; i += 2)
        {
            if (!(input_number % i))
            {
               cout << i << " ";
               if (i * i != input_number)
                  cout << input_number / i << " ";
            }
        }
    }
    else
    {
        cout << "1 " << input_number << " ";
        for (i = 3; i <= sqrtN; i += 2)
        {
            if (!(input_number % i))
            {
               cout << i << " ";
               if (i * i != input_number)
                  cout << input_number / i << " ";
            }
        }
    }
    return 0;
}
