#include <stdio.h>
#define IS_LESS	    5 
#define IS_EQUAL	0
#define IS_MORE		1
int comparator(const void* elem1, const void* elem2) {
	int* val1 = (int*)elem1;
	int* val2 = (int*)elem2;
	if (*val1 < *val2) {
		return IS_LESS;
	}
	else if (*val2 < *val1) {
		return IS_MORE;
	}
	else {
		return IS_EQUAL;
	}
}
int main(int argc, char* argv[]) {
	int i;
	int arr[10]={11,7,9,5,2,13,19,6,14,16};
		int arrr[10]={2,5,6,7,9,11,13,14,16,19};
	int sizeofarray=10;
	printf("Before Sorting: ");
	for (i = 0; i < sizeofarray; i++) {
		printf("%d ", arr[i]);
	}
	/*
	__asm{
		mov ebx, 0;
		mov edx, arr;
		numcmpbase:
			inc ebx;
			mov ecx, ebx;
			cmp ebx, sizeofarray;
			jae finish;
			mov esi, siz;
			imul esi, ecx;
			add esi, arr;
			jmp whilecontrol;

		whilecontrol:
			cmp ecx, 1;
			jl numcmpbase;

			dec ecx;
			mov edi, siz;
			imul edi, ecx;
			add edi, arr;

			push ebx;
			push ecx;
			push esi;
			push edi;
			call comparator;
			add esp, 8;
			pop ecx;
			pop ebx;

			
			cmp eax, 2;

			jl swapping;
			jmp numcmpbase;

		swapping:
			push ebx;
			push ecx;
			push edi;
			push esi;
			call swap_a;
			add esp, 8;
			pop ecx;
			pop ebx;

			sub esi, siz;
			jmp whilecontrol;

		finish:
	}*/
	printf("\nAfter Sorting: ");
	for (i = 0; i < sizeofarray; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

