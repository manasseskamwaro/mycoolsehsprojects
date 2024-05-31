#include<iostream>
#include<cmath>
#include<string>

using namespace std;

float add(float x,float y)
{
    cout<<"Enter numbers to add: "<<endl;
    cin>>x>>y;
    cout<<"The sum is: "<< x+y<<endl;
    return 0;
}

float subtract(float a,float b)
{
    cout<<"Enter numbers to subtract:\n ";
    cin>>a>>b;
    cout<<"The difference is: "<< a-b<<endl;
    return 0;
}

float multiply(float c,float d)
{
    cout<<"Enter numbers to multiply: \n";
    cin>>c>>d;
    cout<<"Your result is: "<< c*d<<endl;
    return 0;
}

double divide(float e, float f)
{
    double divide;
    cout<<"Enter numbers to divide: \n";
    cin>>e>>f;
    divide= (e/f);
    cout<<"Your result is: "<< divide<<endl;
    return 0;
}

float logar(float g)
{
    cout<<"Enter a number to find log:\n ";
    cin>>g;
    cout<<"Your result is: "<< log(g)<<endl;
    return 0;
}

float exponential(float h)
{
    cout<<"Enter a number to find its exponent:\n ";
    cin>>h;
    cout<<"Your result is: "<<exp(h)<<endl;
    return 0;
}

int main()
{
    int chosen;
    float g,h,x,y,a,b,c,d,e,f,i;
    do
    {   cout<<"Enter 1 for sum: \n";
        cout<<"Enter 2 for subtract: \n";
        cout<<"Enter 3 for multiplication: \n";
        cout<<"Enter 4 for division: \n";
        cout<<"Enter 5 for logarithm: \n";
        cout<<"Enter 6 for exponential: \n";
        cin>>chosen;
        if(chosen == 1)
            add(x,y);
        else if (chosen == 2)
            subtract(a,b);
        else if(chosen == 3)
            multiply(c,d);
        else if(chosen == 4)
            divide(e,f);
        else if(chosen == 5)
            logar(g);
        else if(chosen == 6)
            exponential(h);
        else
            cout<<"Invalid input!! \n Try again!";
    chosen ++;
    }while(chosen<=6);
    return 0;
}