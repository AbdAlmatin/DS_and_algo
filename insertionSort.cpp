#include <iostream>
using namespace std;

int main()
{                           
    int n; cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int tmp = ar[i];
        while(j >= 0 && ar[j] > tmp)
            swap(ar[j], ar[j + 1]), j--;
        ar[j + 1] = tmp;
    }
    for(int i = 0; i < n; i++) cout << ar[i] << " ";
    cout << endl;
    return 0;
}