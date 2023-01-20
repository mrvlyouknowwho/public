#include <iostream>
#include <stack>
#include <regex>


void bubbleSort(float mas[], int size);

int main()
{
    int size = 15;
    float mas[size];

    std::cout << "Please input float array:" << std::endl;
    for(auto &index : mas)
    {
        std::cin >> index;
    }

    //quicksort(mas, size);
    bubbleSort(mas, size);

    for(int i = size - 1; i > -1; i--)
    {
        std::cout <<"#" << size - i << " : "<< mas[i] <<  std::endl;
    }

}

void bubbleSort(float mas[], int size)
{
    int i = 0, j = 0;
    float temp = 0.0f;

    for(i = 0; i < size-1; i++)
    {
        bool fl = false;              // flag optimized
        for(j = 0; j < size-1-i; j++) // -i optimized
        {
            if(mas[j]>mas[j+1])
            {
                temp = mas[j];
                mas[j] = mas[j+1];
                mas[j+1] = temp;

                fl = true;
            }
        }
        if(!fl)
        {
            break;
        }
    }
}


void quicksort (int mas[], int size)
{
    int i = 0, j = 0;
    int left = 0, right = 0;

    std::stack<int> stk;

    stk.push(0);
    stk.push(size-1);

    do {
        right = stk.top();
        stk.pop();
        left = stk.top();
        stk.pop();

        i = left;
        j = right;

        int pivot = (left + right) / 2;
        int pivot_value = mas[pivot];

        do {
            while(mas[i] < pivot_value)
            {
                i++;
            }

            while(mas[j] > pivot_value)
            {
                j++;
            }

            if(i <= j)
            {
                std::swap(mas[i],mas[j]);
                i++;
                j--;
            }
        }while(i <= j);

        if(left < j)
        {
            stk.push(left);
            stk.push(j);
        }

        if(i < right)
        {
            stk.push(i);
            stk.push(right);
        }
    }while(!stk.empty());
}