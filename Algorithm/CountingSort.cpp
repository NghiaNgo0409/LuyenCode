#include <iostream>
using namespace std;
void CountingSort(int input[], int n)
{
    int* output = new int[n];
    int max = input[0];
    int min = input[0];
    for(int i = 1; i < n; i++)
    {
        if(input[i] > max)
        {
            max = input[i];
        }
        else if (input[i] < min)
        {
            min = input[i];
        }
    }
    int k = max - min + 1;

    int* countArray = new int[k];
    for(int i = 0; i < k; i++)
    {
        countArray[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        countArray[input[i] - min]++;
    }

    for(int i = 1; i < k; i++)
    {
        countArray[i] += countArray[i - 1];
    }

    for(int i = 0; i < n; i++)
    {
        output[countArray[input[i] - min] - 1] = input[i];
        countArray[input[i] - min]--;
    }

    for(int i = 0; i < n; i++)
    {
        input[i] = output[i];
    }
}
int main()
{
    int n = 9;

    int input[9] = {1, 5, 2, 7, 3, 4, 4, 1, 5};

    CountingSort(input, 9);

    for(int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl; 
}