#include <stdio.h>
#include "pole.h"
#include "objetosc.h"

int main()
{
	int num;
	printf("Podaj długość strony figury\n");
	printf(">>>>>");scanf("%d", &num);
	printf("\nPole kwadratu wynosi --> %d", pole(num));
	printf("\nObjętość sześcianu wynosi --> %d\n", objetosc(num));
	return 0;
}
