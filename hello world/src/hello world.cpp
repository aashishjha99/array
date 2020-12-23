#include<iostream>
using namespace std;

struct ar
{
	int *A;
	int size;
	int length;

};
int create(struct ar &arr1)
{
	cout << "give the limit";
	cin >> arr1.length;
	cout << "give the elements";
    for (int i = 0; i<arr1.length; i++)
	{
		cin>>arr1.A[i];
	}
 }
void display(struct ar arr1)
{
    cout<<"\n"<<"elements are"<<" ";
	for (int i = 0; i < arr1.length; i++)
		cout << arr1.A[i] <<" ";
}
void append(struct ar *arr1,int x)
{
    if(arr1->length < arr1->size)
    arr1->A[arr1->length++] = x;

}
void insert(struct ar *arr1,int index,int x)
{
    if(index>=0 && index<=arr1->length)
    {
        for(int i = arr1->length;i>index;i--)
        {
            arr1->A[i]=arr1->A[i-1];
        }
        arr1->A[index] = x;
        arr1->length++;
    }
}

int Delete(struct ar *arr1,int index)
{
    int x = 0;
    if(index >= 0 && index <arr1->length)
    {
        x = arr1->A[index];
        for(int i = index;i<arr1->length-1;i++)
        {
            arr1->A[i] = arr1->A[i + 1];

        }
         arr1->length--;
        return x;


    }
    else

    cout<<"not found\n";
    return 0;
}

void Lsearch (struct ar *arr1,int key)
{
	int flag=0;

	for(int i =0;i<arr1->length;i++)
	{
		if(key == arr1->A[i])
		flag++;

	}
	if(flag==0)
	{
		cout<<"code not found";

	}
	else
	{
		cout<<"found";

	}

}
void swap(int *a,int *b )
{
	int temp;

     temp = * a;
	*a = *b;
	*b = temp;


}

int LinearSrch(struct ar *arr1,int key)

{
	int flag = 0;

	for(int i = 0;i<arr1->length;i++)
	{

		if(key==arr1->A[i])
		{
			flag = 1;

			swap(&arr1->A[i], &arr1->A[0]);


			return i;

		}

	}

	if(flag ==1)
	{
		cout<<"no found , swapping will be done";
	}

	else
	{
		cout<<" not found, swapping can't be proceeded";
	}
}

int BinarySearch(struct ar arr1,int key)
{
	int low = 0;
	int high = arr1.length-1;
	int middle;



	while(low<=high)
	{
		middle = (low + high)/2;

	 if(key == arr1.A[middle])
	{

		return middle;


	}

	 else if(key < arr1.A[middle])
	{
		high  = middle - 1;

	}

	else
		low  = middle + 1;

	}

	return - 1;

}

int InsertAtLocation(struct ar *arr1, int x)
{
	for(int i =arr1->length-1;i>=0;i--)
	{
		if(x >  arr1->A[i])
		{
			arr1->A[i+1] = x;
			arr1->length++;
			return i;



		}


		arr1->A[i+1] = arr1->A[i];

	}



	arr1->length++;
}

int NegativeOnLeftSide(struct ar *arr1)
{
	for(int i=0;i<arr1->length - 1;i++)
	{
		if(arr1->A[i]>0)
		{
			swap(&arr1->A[i],&arr1->A[i+1]);

		}
	}
}



int main()
{
	struct ar arr1;
	cout<<"give the size";
	cin >> arr1.size;
	int key;
	arr1.A = new int[arr1.size];
    create(arr1);
   // append(&arr1,10);
   // insert(&arr1,4,11);
    display(arr1);
    //cout<<"\n give the index you want to delete";
    //cin>>n;
    //Delete(&arr1,n);
    //display(arr1);
   // cout<<"\n give the key you want to search";
    //cin>>key;
   // Lsearch(&arr1,key);
   // cout<<"\n give the key you want to search";
   // cin>>key;
    //LinearSrch(&arr1,key);
    //display(arr1);

    //(BinarySearch(arr1,key) == -1) ? cout << "Element is not present in array"
                       //: cout << "Element is present at index " << BinarySearch(arr1,key);

    //InsertAtLocation(&arr1,18);
    NegativeOnLeftSide(&arr1);
    display(arr1);


    exit(0);





}
