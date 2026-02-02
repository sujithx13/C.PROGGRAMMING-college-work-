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
  for(int j=0;j<col;j++){
 int max=arr[j][0];
    for(int i=1;i<row;i++)
    if(arr[i][j]>max)
    max=arr[i][j];
   cout<<max<<"\n";
   }//sum/=row*col;
  
    return 0;
}