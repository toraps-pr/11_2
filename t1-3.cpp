#include <iostream>
using namespace std;

int main()
{
    int n=7;
    double RN [n] = {-15, -2, -1.2, 3.4, 4.7, 13, 96};
    
    double max =RN[0];
    for(int i = 0; i < 7; ++i)
    {
        if(max<RN[i]){
            max=RN[i];
        }
    }
    cout<<"Max is: "<<max<<endl;


    double sum=0;
    for(int i = 0; i < 7; ++i)
    {
        sum += RN[i];
    }
    cout<<"Sum of all elements is "<<sum<<endl;

    
    double a,b;
    cout<<"Enter the unappropriate interval (from): ";
    cin>>a;
    cout<<"enter the unappropriate interval (to): ";
    cin>>b;
    for(int i = 0; i < 7; ++i)
    {
        if (RN[i]>=a && RN[i]<=b){
            RN[i]=0;
        
        }
    }
    for(int i = 0; i < 7; ++i)
    cout<<RN[i]<<endl;


    return 0;
 }


   
    
    