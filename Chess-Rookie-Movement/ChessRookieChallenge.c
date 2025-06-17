#include <stdio.h>

int main() {

	int rook;
	int queen;
	int bishop;
	int iRook = 1;
	int iBishop = 1;

	printf("Choose how many moves you want to make to the right with the rook: ");
	scanf("%d", &rook);

	while (iRook <= rook) 
	{
		printf("Rook - One move to the right\n");
		iRook++;
	}
	
	printf("\nChoose how many moves you want to make to the diagonal to upper and right with bishop: ");
	scanf("%d", &bishop);

	do {
		printf("Bishop - Up\n");
		printf("Bishop - Right\n");
		iBishop++;
	} while (iBishop <= bishop);

	printf("\nChoose how many moves you want to make to the left with queen: ");
	scanf("%d", &queen);

	for (int iQueen = 1; iQueen <= queen; iQueen++) 
	{
		printf("Queen - Left\n");
	}

	return 0;
}