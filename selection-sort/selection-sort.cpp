#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int min_ind=i;
        for(int j=i;j<n;j++){
            if(arr[min_ind]>arr[j]){
                min_ind=j;
            }
        }
        int tmp=arr[i];
        arr[i]=arr[min_ind];
        arr[min_ind]=tmp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
