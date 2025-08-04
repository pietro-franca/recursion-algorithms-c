#include <stdio.h>

// GIVEN THE NUMBER OF DISKS,
// LISTS THE STEPS TO SOLVE THE TOWER OF HANOI PROBLEM

void hanoi(int n, char origem, char destino, char auxiliar)
{
	// If only disk 1 remains, make the move and return
	if(n == 1)
	{ 
		printf("\nMova o disco 1 da base %c para a base %c", origem, destino);
		return;
	}

	// Move the n-1 disks from A to B, using C as auxiliary
	hanoi(n - 1, origem, auxiliar, destino);

	// Move the remaining disk from A to C
	printf("\nMova o disco %d da base %c para a base %c", n, origem, destino);

	// Move the n-1 disks from B to C using A as auxiliary
	hanoi(n - 1, auxiliar, destino, origem);
}

int main()
{
	int n;
	printf("Digite o numero de discos : ");
	scanf("%d", &n);

	printf("Para resolver a torre de Hanoi faca :\n\n");
	hanoi(n, 'A', 'C', 'B');
	printf("\n");

	return 0;
}
