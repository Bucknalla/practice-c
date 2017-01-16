#include <stdio.h>

int main()
{
	int data = 10;
	int *ptr;
	ptr = &data;

	char *names[] = {"alex","louis","sam"};

	printf("Address at ptr = %p\n", ptr);
	printf("Data at ptr = %d\n", *ptr);

	for(int i = 0; i <=  2; i++){
		printf("%s ",names[i]);
	}

}

// int main () {
//
//    int  var = 20;   /* actual variable declaration */
//    int  *ip;        /* pointer variable declaration */
//
//    ip = &var;  /* store address of var in pointer variable*/
//
//    printf("Address of var variable: %p\n", &var  );
//
//    /* address stored in pointer variable */
//    printf("Address stored in ip variable: %p\n", ip );
//
//    /* access the value using the pointer */
//    printf("Value of *ip variable: %d\n", *ip );
//
//    return 0;
// }
