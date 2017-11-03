    #include<iostream>

    #include<conio.h>

    #include<stdlib.h>

     

    using namespace std;

    int add(int x, int y)

    {

        int carry;

        while (y != 0)

        {

            carry = x & y;

            x = x ^ y;

            y = carry << 1;

        }

        return x;

    }

    int main(int argc, char **argv)

    {

     

        cout << "Enter the numbers to be added:";

        int x, y;

        cin >> x >> y;

        cout << "The Summation is: " << add(x, y);

    }
