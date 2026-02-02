// sum of each col in 2d array
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int row,col; cin>>row>>col;
   int arr[row][col];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++)
    cin>>arr[i][j];
   }
//  int sum=0;
    for(int j=0;j<col;j++){
    int sum=arr[0][j];
  for(int i=1;i<row;i++)
    sum+=arr[i][j];
   cout<<sum<<"\n";
   }//sum/=row*col;
  
    return 0;
}