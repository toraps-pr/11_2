#include <iostream>
using namespace std;

int main()
{
    int n=10;
    double realn [n] = {3, 17,-63.8, -11, 5, 23, -6, 45,-56, 7.1};

    int min_i=0;
    for (int i=1; i<n; i++)
    if (realn[i]<realn[min_i]){
        min_i=i;}
    cout<<"Min element is ["<<min_i<<"] "<<realn[min_i]<<endl;

    double sum=0;
    for(int i = 0; i < 10; ++i)
    {
        if(realn[i]>0)
        {sum += realn[i];}
    }
    cout<<"Sum of positive elements is "<<sum<<endl;

    cout << "\nChanged array looks like this: "<<endl;

    // В новому масиві елемети відсортировані так:
    // спочатку я знайшла модулі всіх елементів після чого розташувала їх по зростанню

    for (int i=0; i<n; ++i)
    {
        if (realn[i]<0){
           realn[i]= realn[i]*(-1);
        }
        else {realn[i]=realn[i];}

    }

    for (int it=0; it<n-1; ++it)
    {
        for(int ci=0; ci<n-1; ++ci)
        {
            if(realn[ci]>realn[ci+1])
            std::swap(realn[ci],realn[ci+1]);
        }
    }

    for (int i=0; i<n; ++i)
        cout<<realn[i]<<" ";


    return 0;
}
