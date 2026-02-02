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
  for(int i=0;i<row;i++){
 int max=arr[0][i];
    for(int j=1;j<col;j++)
    if(arr[i][j]>max)
    max=arr[i][j];
   cout<<max<<"\n";
   }//sum/=row*col;
  
    return 0;
}