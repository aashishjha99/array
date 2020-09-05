#include <iostream>
using namespace std;

class arry
{
private:
    int *P;
    int size;
    int length;

public:
    arry(int size)
    {
        this->size = size;
        P = new int[size];
    }

    void create()
    {
        cout << "give the limit";
        cin >> length;
        cout << "give the elements";
        for (int i = 0; i < length; i++)
        {
            cin >> P[i];
        }
    }

    int insert(arry *arr, int x)
    {
        int i = arr->length - 1;

        if (arr->length == arr->size)
        {
            return 0;
        }

        while (i >= 0 && arr->P[i] > x)
        {
            arr->P[i + 1] = arr->P[i];
            i--;
        }
        arr->P[i + 1] = x;
        arr->length++;
    }

    int isSorted(arry arr)
    {
        for (int i = 0; i < arr.length - 1; i++)
        {
            if (arr.P[i] > arr.P[i + 1])
                return 0;
        }
        return -1;
    }

    int rearrange(arry *arr)
    {
        int i = 0;
        int j = arr->length - 1;

        while (i < j)
        {
            while (arr->P[i] > 0)
            {
                i++;
            }

            while (arr->P[j] <=0)
            {
                j--;
            }

            if (i < j)
                swap(&arr->P[i], &arr->P[j]);
        }
    }
    void swap(int *x, int *y)
    {
        int temp = *y;
        *y = *x;
        *x = temp;
    }
    void display(arry arr)
    {
        cout << "tems in array are"
             << " ";
        for (int i = 0; i < arr.length; i++)
        {
            cout << P[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    arry arr(10);
    arr.create();
    arr.insert(&arr , 8);
    cout<<arr.isSorted(arr)<<endl;

    arr.rearrange(&arr);
    arr.display(arr);

    return 0;


}