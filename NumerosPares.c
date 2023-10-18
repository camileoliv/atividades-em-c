#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main () {
    setlocale(LC_ALL,"portuguese");
    int i;
    
    for (i= 1; i <= 20; i++) {
    	if (i % 2 == 0){
    	    	printf("%i \n", i);	
		}
	}
	
    return 0;
 }
