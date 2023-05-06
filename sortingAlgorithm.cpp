FUNCTION insertion_sort(arr : ARRAY_OF INTEGER) : INTEGER
VAR
 
//member functions declaration
 insertionSort(int arr[], int length);
 return Array(int array[], int size);
 
// main function
int main() 
{
	int array[5] = {5, 1, 6, 2, 4, 3};
	// calling insertion sort function to sort the array
	insertionSort(array, 6);
	return 0;
}
 
 insertionSort(int arr[], int length) 
{
	int i, j, key;
	for (i = 1; i < length; i++) 
	{
		j = i;
 		while (j > 0 && arr[j - 1] > arr[j]) 
 		{
 			key = arr[j];
 			arr[j] = arr[j - 1];
 			arr[j - 1] = key;
 			j--;
 		}
	}
	cout << "Sorted Array: ";
	// print the sorted array
	RETURN Array(arr, length);
}

// function to print the given array 
 RETURN Array(int array[], int size)
{ 
 	int j;
	IF (j = 0; j < size; j++)
	{
 		 <" "< array[j];
 	}
 	END_IF << endl;
}

