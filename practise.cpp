#include<iostream>
using namespace std;

struct ar
{
	int *A;

	int size;
	int length;

}arr1;
int create(struct ar &arr1)
{
	cout<<"give the limit";
	cin >> arr1.length;
	cout << "give the elements";
    for (int i = 0; i<arr1.length; i++)
	{
		cin>>arr1.A[i];
	}
 }
void display(struct ar &arr1)
{
    cout<<"\n"<<"elements are"<<" ";
	for (int i = 0; i < arr1.length; i++)
		cout << arr1.A[i] <<" ";
}

void SingleMissingElementSortedArray(struct ar *arr1)
{
	int sum = 0,s,n,SumOfnTerms;


	for(int i =0;i<arr1->length ;i++)
	{
		sum = sum + arr1->A[i];
	}

	cout<<"\n array sum is " <<sum;

	n = arr1->A[arr1->length -1];
	SumOfnTerms = n * (n + 1) /2;
	s = SumOfnTerms - sum;
	cout<<"\n elements which is not present is"<<" "<<s;

}

int SingleMissingElementUnsortedArray(struct ar *arr1)
{
	int diff = arr1->A[0] - 0;
	for(int i = 0;i<arr1->length;i++)
	{
		if(arr1->A[i]- i != diff)
		{
			cout<<"\nthe mising element in unsorted array is"<<" "<< i+diff;
			return i;
		}

	}

}

void MultipleMissingElement(struct ar *arr1)
{
	int diff = arr1->A[0] - 0;

	for(int i = 0;i<arr1->length;i++)
	{
		if(arr1->A[i]-i!=diff)
		{
			while( diff < arr1->A[i]-i)
			{
				cout<<"\nmissing element is"<<" "<<i+diff;
				diff++;
			}
			cout<<"\n";
		}
	}
}

void MultipleMissingElementFasterMethod(struct ar *arr1)
{
	int max = arr1->A[0];

	for(int i =0;i<arr1->length;i++)
	{
		if(max < arr1->A[i])
		{
			max = arr1->A[i];
		}

	}
	cout<<"\nthe maximum term is"<<" "<<max;

	int B[max];

	for(int i =1;i<=max;i++)
	{
		B[i]=0;

	}

	for(int i = 1;i<=max;i++)
	{
	    cout<<"\n"<<" "<<i<<" "<<"element value is"<<" "<<B[i];
	}

	cout<<endl;

	for(int i =0;i<=max;i++)
	{

		B[arr1->A[i]]++;


	}

	for(int i =0;i<=max;i++)
	{
		if(B[i]==0)
		{
			cout<<"\nmissing element is"<<" "<<i;
		}
	}



}


int main()
{
	cout <<"give the size";
	cin >> arr1.size;
	arr1.A = new int[arr1.size];

	create(arr1);
    display(arr1);
	//SingleMissingElementSortedArray(&arr1);
    //SingleMissingElementUnsortedArray(&arr1);
    //MultipleMissingElement(&arr1);
    MultipleMissingElementFasterMethod(&arr1);




}
