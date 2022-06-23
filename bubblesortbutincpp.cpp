#include <iostream>
using namespace std;

int *bubblesort(int *tab, int size)
{
    int temp;
    int count;
    int swapped;

    while (1)
    {
        swapped = 0;
        for (count = 0; count < (size - 1); count++)
        {
            if (tab[count] > tab[count + 1])
            {
                temp = tab[count];
                tab[count] = tab[count + 1];
                tab[count + 1] = temp;
                swapped++;
            }
        }
        if(swapped == 0)
            break;
    }

    return (tab);
}

int main()
{
    int tab[] = {2,2,1323,213,21,3,421,312,3,4,21,3};
	int *sorted;
    int size = sizeof(tab)/sizeof(tab[0]) ;
	sorted = bubblesort(tab, size);
    for (int i = 0; i < size; i++)
    {
        cout << sorted[i] << " ";
    }
}
