#include "sort.h"

/**
  * swap - swaps two integers a, b
  * @a: int, becomes b
  * @b: int, becomes a
  */
void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
  * siftDown - Repair the heap whose root element is at index 'start'
  * assuming the heaps rooted at its children are valid
  * @array: unsorted array
  * @start: first element of heap
  * @end: represents the limit of how far down the heap to sift
  * @size: size of array, used to print it after each swap
  */
void siftDown(int *array, int start, int end, size_t size)
{
	int root = start;
	int child;

	while (root * 2 + 1 <= end) /* While the root has at least one child */
	{
		child = root * 2 + 1; /* root*2+1 points to the left child */
		/**
		  * If the child has a sibling and the child's value
		  * is less than its sibling's...
		  */
		if (child + 1 <= end && array[child] < array[child + 1])
			child++; /* ... then point to the right child instead */
		if (array[root] < array[child]) /* out of max-heap order */
		{
			swap(&array[root], &array[child]);
			print_array(array, size);
			root = child; /* repeat to continue sifting down the child now */
		}
		else
			return;
	}
}

/**
  * heapify - puts element of array in heap order, in-place
  * @array: pointer to first element of unsorted array
  * @size: size of array
  */
void heapify(int *array, size_t size)
{
	/* start is assigned the index in array of the last parent node */
	int start = (size - 2) / 2;

	while (start >= 0)
	/**
	  * sift down the node at index start to the proper place
	  * such that all nodes below the start index are in heap
	  * order
	  */
	{
		siftDown(array, start, size - 1, size);
		start--;
	}
	/* after sifting down the root all nodes/elements are in heap order */
}


/**
  * heap_sort - implements the heapify function
  * @array: pointer to first element of unsorted array
  * @size: size of array
  */
void heap_sort(int *array, size_t size)
{
	int end;

	if (size < 2)
		return;
	/* first place array in max-heap order */
	heapify(array, size);

	end = size - 1;
	while (end > 0)
	{
		/**
		  * swap the root(maximum value) of the heap with the
		  * last element of the heap
		  */
		swap(&array[end], &array[0]);

		/* print array after swapping two values */
		print_array(array, size);

		/**
		  * decrement the size of the heap so that the previous
		  * max value will stay in its proper place
		  */
		end--;

		/* put the heap back in max-heap order */
		siftDown(array, 0, end, size);
	}
}
