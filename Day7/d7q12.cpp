#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int row,col; cin>>row>>col;
   int arr[row][col]; //brr[row][col];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++)
    cin>>arr[i][j];
   }
   for(int i=0;i<row;i++){
    int min=arr[i][0];
    for(int j=1;j<col;j++){
        if(min>arr[i][j]) min=arr[i][j];
    }
//    for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++)
//     cout<<arr[i][j]<<" ";
//     cout<<"\n";
//    }
  cout<<min;}
    return 0;
}