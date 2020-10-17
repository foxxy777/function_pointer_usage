#include <iostream>
using namespace std;
int compare(int a, int b)
{
    if (a > b)
        return 1;
    else
        return 0;
}

int abs_compare(int a, int b)
{
    if (abs(a) > abs(b))
        return 1;
    else
        return 0;
}


    //void bubblesort(int a[], int num_of_element),最普通地调用函数，不用专门指出指针，直接在函数里面调用就可以了
void bubblesort(int a[], int num_of_element, int (*call_back_compare)(int, int))//使用函数指针的好处是，可以在这里通过参数的形式来调用不同的处理函数，可以在这选择我们要的是compare还是abs_compare
{//注意，这里的call_back_compare只是形参名字而已，我们只要保证传进去的call_back函数参数和返回值是这里规定的格式就可以了，从而实现了可以丢不同的callback函数进去
    int temp;
    for(int i = 0;i<num_of_element;i++)
        for (int j = 0; j < num_of_element - 1; j++)
        {   
            if (call_back_compare(a[j], a[j + 1]) == 1)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
}


//check git change


int main()
{

    int a[] = {2,4,6,8,9};
    //bubblesort(a, 5);
    //bubblesort(a, 5,compare);
    bubblesort(a, 5,abs_compare);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
