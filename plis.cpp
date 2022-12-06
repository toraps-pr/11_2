#include <iostream>
using namespace std;

int main()
{
    int n=10;
    double masn [n] = {-12, 3, 56, 83, -17, 0.58, 98, 0.1, 54, -10};

    int i;

    int max_i=0;
    for (int i=0; i<n; ++i)
    if(masn[i]>masn[max_i]){
        max_i=i;}
    cout<<"Max is ["<<max_i<<"] "<<masn[max_i]<<endl;

    //сума додатних елементів масиву, розташованих до максимального елемента
    double sum=0;

    for (i=0; i<max_i; i++)
    if (masn[i]>0){
        sum=sum+masn[i];
    }
    cout<<"Sum of positive numbers is "<<sum<<endl;

    //добуток відємних елементів масиву
    double mult=1;

    for (i=0; i<n; i++)
    if (masn[i]<0){
        mult=mult*masn[i];
    }
    cout<<"The muitiplication of the negative numbers is "<<mult<<endl;

    cout<<"First array: "<<endl;
    for (i=0; i<n; i++){
    cout<<masn[i]<<" ";}


    cout<<"\nThe changed array looks like this: "<<endl;
    for(i=9; i!=-1; i--){
    cout<<masn[i]<<" ";}

    return 0;
}
