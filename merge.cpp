#include <iostream>

using namespace std;

class arry
{
private:
    int *A;
    //int *B;
    //int *C;
    int size;
    int lengtha, lengthb, lengthc;

public:
    arry(int size)
    {
        this -> size = size;
        A = new int[size];
        //B = new int [size];
        //c = new int [size];
    }
    

    void create()
    {
        cout << "give the arry value";
        cout << "give the first array elements length";
        cin >> lengtha;
        cout << "give the elements";
        for (int i = 0; i < lengtha; i++)
        {
            cin >> A[i];
        }
        cout << "give the second array elements length";
        cin >> lengthb;
        cout << "give the elements";
        for (int j = 0; j < lengthb; j++)
        {
            cin >> A[j];
        }
    }

    int merge(arry *arr)
    {
        int i = 0, j = 0, k = 0;
        array arr3 = new array(lengtha + lengthb);
        while (i < arr->lengtha && j < arr->lengthb)
        {
            if (A[i] > A[j])
            {
                arr3->A[k++] = A[i++]
            }

            else
            {
                arr3->A[k++] = A[j++];
            }
        }

        for (; i < lengtha; i++)
        {
            arr3->A[k++] = A[i++];
        }
        for (; j < lengthb; j++)
        {
            arr3->A[k++] = A[j++];
        }
        arr3->length = k;
        return arr3;
    }

    void display(arry arr)
    {
        cout << "tems in array are"
             << " ";
        for (int k = 0; k < arr.length; k++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    arry arr(10);
    arry arr3(10);
    arr.create();
    arr.merge(&arr);
    arr.display();

    return 0;

}