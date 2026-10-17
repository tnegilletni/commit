#include <iostream>
using namespace std;
int main() {
    int a[5]={1,2,3,4,5};
    int min=10000000000;
    int result[5]={};
    int min_index;
    for (int k= 0; k < 5; k++) {
        for(int i=0;i<5;i++){
        if(a[i]<min){
            min=a[i];
            min_index=i;
        }
    
        }
    }
}