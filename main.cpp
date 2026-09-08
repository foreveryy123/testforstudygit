#include <iostream>
using namespace std;

//生成一个选择排序
void selectSort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int min = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}


int main()
{
    std::cout<<"hello git!"<<std::endl;
}