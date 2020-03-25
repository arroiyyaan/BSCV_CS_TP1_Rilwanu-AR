//Please kindly uncomment the part that you want to run
//BSCV Rilwanu Ar Roiyyaan KASNO

#include <iostream>
#include <string>
using namespace std;
#define sizemax 100

//=======PROBLEM 1=======//
/*
float pi = 3.14;

float area(float rad)
{
    float area = pi*rad*rad;
    return area;
}
float cir(float rad)
{
    float cir = 2*pi*rad;
    return cir;
}

int main()
{
    printf("===CS Problem 1: AREA AND CIRCUMFERENCE OF A CIRCLE===\n");
    float rad;
    cout << "enter your desired radian value (in cm):";
    cin >> rad;

    cout << "AREA: "<<area(rad)<<" cm"<<"\n"<<"CIRCUMFERENCE: "<<cir(rad)<<" cm\n";


    return 0;
}
*/

//=======PROBLEM 2=======//
/*
int main()
{
    int array[sizemax];
    int x, max, min, size;

    printf("===CS Problem 2: MAX AND MIN OF A SEQUENCE===");

    cout<<"\nEnter your desired size of the sequence/array: ";
    cin>>size;

    cout<<"\nInput the "<<size<<" elements: \n";
    for(x=0; x<size; x++)
    {
        cin>>array[x];
    }

    max = min = array[0];

    for(x=1; x<size; x++)
    {
        if(array[x] > max)
        {
            max = array[x];
        }
        if(array[x] < min)
        {
            min = array[x];
        }
    }
    cout<<"\nMaximum Element in the array: "<<max<<"\nMinimum Element in the array: "<<min<<"\n";
    return 0;
}
*/


//=======PROBLEM 3=======//
/*
int main()
{
    int x0 = 0, x1 = 1, x2, sequence;

    printf("===CS Problem 3: FIBONACCI SEQUENCE===");
    cout<<"\nEnter your disired number of sequence length: ";
    cin>>sequence;

    for(int i=2; i<sequence; i++)
    {
        x2 = x0 + x1;
        cout<<x2<<" ";
        x0 = x1;
        x1 = x2;
    }
    cout<<"\n";
    return 0;
}
*/


//=======PROBLEM 4=======//
/*
int main()
{
    int val, range;

    printf("===CS Problem 4: MULTIPLICATION TABLE===");

    cout<<"\nEnter your main value number to be calculated: ";
    cin>>val;

    cout<<"Enter range of multiplication: ";
    cin>>range;

    for(int i=0; i<=range; i++)
    {
        cout<<val<<" x "<<i<<" = "<<val*i<<"\n";
    }
    return 0;
}
*/


//=======PROBLEM 5=======//
/*
bool AND(bool a, bool b)
{
    printf("AND truth table\n");
    a = true, b = false;
    cout<<"false AND false = "<<(b && b);
    cout<<"\nfalse AND true = "<<(b && a);
    cout<<"\ntrue AND false = "<<(a && b);
    cout<<"\ntrue AND true = "<<(a && a)<<"\n\n";
}

bool OR(bool a, bool b)
{
    printf("OR truth table\n");
    a = true, b = false;
    cout<<"false OR false = "<<(b || b);
    cout<<"\nfalse OR true = "<<(b || a);
    cout<<"\ntrue AND false = "<<(a || b);
    cout<<"\ntrue AND true = "<<(a || a)<<"\n\n";
}

bool NOT(bool a)
{
    printf("NOT truth table\n");
    cout<<"NOT false = "<<(a);
    cout<<"\nNOT true = "<<(!a)<<"\n";
}
int main()
{
    bool a = true, b = false;
    AND(a,b);
    OR(a,b);
    NOT(a);

}
*/
