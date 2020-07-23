#include <iostream>
void bubble_sort(int nums[],int n);
void bubble_sort(int nums[],int n){
    int i,j;
    for (j=n-1;j>0;j--)
    {
        for (i=0;i<j;i++)
            {
                if (nums[i]>nums[i+1])
                {   std::swap(nums[i],nums[i+1]);
                }
            }
    }
}
void test1(){
    int arrSize=8;
    int arr[arrSize]={7,6,5,4,3,2,1,12};
    int i;
    bubble_sort(arr,arrSize);
    for (i=0;i<arrSize;i++){
        std::cout << arr[i] << ' ';
        }
    std::cout << std::endl;
}
void test2(){
    int arrSize=10;
    int arr[arrSize]={2,6,5,19,3,2,1,0,2,3};
    int i;
    bubble_sort(arr,arrSize);
    for (i=0;i<arrSize;i++){
        std::cout << arr[i] << ' ';
        }
    std::cout << std::endl;
}
int main()
{
    test1();
    test2();
}

