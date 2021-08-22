#include <iostream>
#define N 5

using namespace std;
int main(){
    int i;
    int a[N];
    for(i=0;i<N;i++){
        cout <<"a[" <<i << "] :";
        cin >> a[i];
    }
    puts("EACH RESULT");
    for(i=0;i<N;i++){
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    return 0;
}