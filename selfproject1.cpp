#include<iostream>
#include<cmath>
#include<string>

using namespace std;

float add(float x,float y)
{
    cout<<"Enter numbers to add: "<<endl;
    cin>>x>>y;
    cout<<"The sum is: "<< x+y;
    return 0;
}

float subtract(float a,float b)
{
    cout<<"Enter numbers to subtract: ";
    cin>>a>>b;
    cout<<"The difference is: "<< a-b;
    return 0;
}

float multiply(float c,float d)
{
    cout<<"Enter numbers to multiply: ";
    cin>>c>>d;
    cout<<"Your result is: "<< c*d;
    return 0;
}

double divide(float e, float f)
{
    double divide;
    cout<<"Enter numbers to divide: ";
    cin>>e>>f;
    divide= (e/f);
    cout<<"Your result is: "<< divide;
    return 0;
}

float logar(float g)
{
    cout<<"Enter a number to find log: ";
    cin>>g;
    cout<<"Your result is: "<< log(g);
    return 0;
}

float exponential(float h)
{
    cout<<"Enter a number to find its exponent: ";
    cin>>h;
    cout<<"Your result is: "<<exp(h);
    return 0;
}

int main()
{
    char chosen;
    float g,h,x,y,a,b,c,d,e,f,i;
    for(i='a';i<='g';i++){
        cout<<"Enter a for sum: \n";
        cout<<"Enter b for subtract: \n";
        cout<<"Enter c for multiplication: \n";
        cout<<"Enter d for division: \n";
        cout<<"Enter e for logarithm: \n";
        cout<<"Enter f for exponential: \n";
        cin>>chosen;
        switch (chosen)
        {
        case 'a':
            add(x,y);
            break;
        case 'b':
            subtract(a,b);
            break;
        case 'c':
            multiply(c,d);
            break;
        case 'd':
            divide(e,f);
            break;
        case 'e':
            logar(g);
            break;
        case 'f':
            exponential(h);
            break;
        default:
            cout<<"Invalid input!! \n Try again!";
            break;
        }
    }
}