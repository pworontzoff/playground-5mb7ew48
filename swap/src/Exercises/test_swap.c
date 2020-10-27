#include <stdio.h>
#include <stdlib.h>
#include "swap.h"

int main() {
	int tmp_a,tmp_b, i;
    int test_val_a[3]={5,8,45};
    int test_val_b[3]={5,6,13};
    int ok=1;
	
    for (i=0;i<3;i++) {
		
		tmp_a=test_val_a[i];
		tmp_b=test_val_b[i];
		echange(&tmp_a,&tmp_b);
		if (tmp_b==test_val_a[i] && tmp_a==test_val_b[i]) {
            ok = ok && 1;
        }
        else {
            ok = ok && 0;
            printf("TECHIO> message --channel \"TEST ERREUR\" 'Error function fail test (%d)'\n",i);
        }
    }
        
    if(ok)
        printf("TECHIO> success true\n");
    else  
		printf("TECHIO> success false\n");
	
	return 0;
}