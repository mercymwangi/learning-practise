#include <stdio.h>

/*int main()
{	int myFunction = 20;
		printf("%d\n", myFunction);
		return 0;
}
*/

void myFunction(char name[], int age, char grade) 
{
	printf("my name is Mercy %s. I am %d years old. My grade is %c\n", name, age, grade);
}
int main()
{
//	myFunction();
//	myFunction();
//	myFunction();

	myFunction("Mwangi", 15, 'A');
        myFunction("Jemurgor", 17, 'B');
        myFunction("Njoki", 14, 'C');
	return (0);
}

