#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int row,col; cin>>row>>col;
   int arr[row][col];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++)
    cin>>arr[i][j];
   }int idx=0;int max=0;
  for(int i=0;i<row;i++){
    int sum=0;
    for(int j=0;j<col;j++){
    sum+=arr[i][j]; }
    if(sum>max){max=sum; idx=i;}}
    for(int i=0;i<col;i++)
    cout<<arr[idx][i]<<" ";
   
  
    return 0;
}