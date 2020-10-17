#include <iostream>
using namespace std;
int compare(int a, int b)
{
    if (a > b)
        return 1;
    else
        return 0;
}

void bubblesort(int a[], int num_of_element, int (*compare)(int, int))
{
    int temp;
    for(int i = 0;i<num_of_element;i++)
        for (int j = 0; j < num_of_element - 1; j++)
        {   
            if (compare(a[j], a[j + 1]) == 1)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
}

int main()
{

    int a[] = {2,4,6,8,9};
    bubblesort(a, 5,compare);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}