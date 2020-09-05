#include <iostream>
using namespace std;

class LinearSearch
{
private:
    int *A;
    int size;
    int length;

public:
    LinearSearch(int size)
    {
        this->size = size;
        A = new int[size];
    }

    void create()
    {
        cout << "enter the no of elements";
        cin >> length;
        cout << "give the elements";
        for (int i = 0; i < length; i++)
        {
            cin >> A[i];
        }
    }
    int swap(int *x, int *y)
    {
        int temp;
        temp = *x;
        *x = temp;
        *y = temp;
    }
    int srch(int key)
    {
        int n = key;
        for (int i = 0; i < length; i++)
        {
            if (n == A[i])
            {
                swap(&A[i], &A[i - 1]);
                return i;
            }
            return -1;
        }
    }
    void display(LinearSearch find)
    {
        for (int i = 0; i < length; i++)
        {
            cout << "element are"
                 << "=";
            cout << A[i] << endl;
        }
    }
};
int main()
{
    int key;
    LinearSearch find(10);
    find.create();
    cout << "give the elements to search";
    cin >> key;
    //find.srch(key);
    cout << find.srch(key);
    find.display(find);
}