#include <iostream>
using namespace std;

int main()
{
    int n=100;
    int array [n];

    for(int i=0; i<n; i++)
    {
        array[0]=1;
        array[i]=i+1;
    }

    cout<<endl;
    cout<<"Unordered array like this: ";
    cout<<endl;
    //Розташовуємо всі додатні числа в лівій частині
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<" 0 ";

    //Розташовуємо всі від’ємні – в правій

    for(int i=99; i!=-1; i--)
    {
        cout<<array[i]*-1<<" ";
    }
    cout<<endl;

    //Розташуємо елементи в діапазоні при правильному записі
    cout<<endl;
    cout<<"Ordered array from -100 to 100 looks like this: ";
    cout<<endl;

     for(int i=99; i!=-1; i--)
    {
        cout<<array[i]*-1<<" ";
    }
    cout<<" 0 ";
    
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return 0;
}
