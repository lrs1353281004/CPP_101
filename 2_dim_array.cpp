#include <iostream>

using namespace std;
int sum_array(int arr[][5],int n)
{
    int sum,i,j;
    sum=0;
    for (i=0;i<n;i++)
        for (j=0;j<5;j++)
            sum +=arr[i][j];
    return sum;
}
int main()
{
    int arr[3][5]={{2,3,4,5,2},{1,2,4,2,2},{6,7,3,23,4}};
    int sum;
    sum=sum_array(arr,3);
    cout << "sum of array:" << sum << endl;
    return 0;
}
