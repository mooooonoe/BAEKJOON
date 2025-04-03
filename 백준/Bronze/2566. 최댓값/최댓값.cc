#include <iostream>  
#include <vector>
using namespace std;

int main() {
    int maxVal = -1;
    int nx, ny = 0;

    int arr[9][9] = {0,};


    for(int i=0; i<9;i++){
        for(int j=0;j<9;j++){
            
            cin >> arr[i][j];

            if(arr[i][j]>maxVal){
                maxVal = arr[i][j];
                nx = i+1;
                ny = j+1;
            }
        }
    }

    cout<<maxVal<<'\n';
    cout<<nx<<' '<<ny<<'\n';
}
