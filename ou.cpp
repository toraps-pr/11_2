#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    n=10;
    int num [n] = {5,13, 6, -1, 4, 1, 0, 9, 7, 2};
    
    int i, pos=0;

    //Обчислення кількості додатніх елементів масиву
    for (i=0; i<n; i++)
    {
        if(num[i]>0)
        {
            pos++;
        }
    }
    cout<<endl<<"There are "<<pos<<" positive elements in the array"<<endl;

    //Обяислення суми елементів масиву, розташованих після елемента, рівного нулю
    int searchKey, searchIndex;

    for (i=0; i<n; i++)
    {
        if(searchKey==num[i]){
           searchIndex=i; 
        }
    }
    cout<<"zero found at index "<<searchIndex<<endl;

    int sum=0;
    for (i=searchIndex; i<n; i++)
    if (num[i]>0){
        sum=sum+num[i];
    }
    cout<<"Sum of positive numbers after zero is "<<sum<<endl<<endl;

    //Перетворення масиву
    //Даний масив міститеме елементи які зростаютимуть 
    cout<<"The new array is:  "<<endl;
    std::sort(num,num+n);    
    for (int i=0; i<n; ++i)
        std::cout<<num[i]<<" ";
    
    return 0;
}
