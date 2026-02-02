#include <iostream>
#include <cstdio>
using namespace std;
int main() {
 int row,col;
   cin>>row>>col;
   int arr[row][col];
   for(int i=0;i<row;i++)
   for(int j=0;j<col;j++)
   cin>>arr[i][j];

   int min=0,mini=arr[0][0];
   for(int i=0;i<row;i++){
   for(int j=0;j<col;j++)
   if(arr[i][j]<mini)
   mini=arr[i][j]; min=i;
}
    for(int i=0;i<col;i++)
    cout<<arr[min][i]<<" ";
    return 0;
}