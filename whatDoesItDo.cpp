/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 2 - Task 2                                                      *
 *                                                                          *
 * @author <>                                                      *
 ****************************************************************************/

#include <stdio.h>

// TODO: your implementation
int whatDoesItDo(int A[], int n, int k){
	int result = -1000;
	for (int i=0; i<n; i++){
		int current = 0;
		for (int j=i; j<n; j=j+k){
			current = current+A[j];
		}
		if (current > result){
			result = current;
		}
	}	
	printf("The sum of whatDoesItDo is %d with an increment of %d" , result, k);
	return result;
}


int main() {
	int increment;
	printf("Enter your increment: ");
	scanf("%d", &increment);
	int A[] = {1,3,5,4,2,6,8,2,4,6,2,5,7,5,1,2,7,9};
	int sizeA = sizeof A / sizeof A[0];
	whatDoesItDo(A, sizeA, increment);
	return 0;
}
