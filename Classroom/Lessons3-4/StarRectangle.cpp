#include <iostream>

using namespace std;

int main() {
    int a;
    cin>>a;

    int i=0;
    while (i<a)
    {
        int j=0;
        while(j<a)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;

    }
}
