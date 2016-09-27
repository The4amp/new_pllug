#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int my_number;
    srand (time(NULL));
    int rand_number = rand() % 1000 + 1;

    for(int i = 0; i < 10; i++)
    {
        cout << "Please enter your number from 1 to 1000" << endl;
        cin >> my_number;
        if (my_number == rand_number)
        {
            cout << "you win!!!" << endl;
            break;
        }
        else if (my_number < rand_number)
        {
            cout << "My number is bigger" << endl;
        }
        else
        {
            cout << "My number is smaller" << endl;
        }
        if (i == 9)
        {
            cout << "you lose(" << endl;
        }
    }
    return 0;
}

