// average of all the elements in a 2d array
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int row,col; cin>>row>>col;
   int arr[row][col];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++)
    cin>>arr[i][j];
   } int sum=0;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++)
    sum+=arr[i][j];
   }sum/=row*col;
   cout<<sum;
  
    return 0;
}