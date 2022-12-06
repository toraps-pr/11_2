#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m=15;
    int N [m]= {0,1,2,0,1,2,0,1,2,0,1,2,0,1,2};


    cout << "First array looks like this: "<<endl;
    for (int i : N) {
    cout << i << " ";
    }

    cout << "\nSecond (changed) array looks like this: "<<endl;

    for (int it=0; it<m-1; ++it)
    {
        for(int ci=0; ci<m-1; ++ci)
        {
            if(N[ci]>N[ci+1])
            std::swap(N[ci],N[ci+1]);
        }
    }

    for (int i=0; i<m; ++i)
        cout<<N[i]<<" ";

    return 0;
}
