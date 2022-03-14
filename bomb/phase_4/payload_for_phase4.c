#include<stdio.h>
#include"./func4.h"
int main(){
	for(int i = 0; i<0x0e; ++i){
		if(func4(i, 0, 0x0e) == 0)
			printf("%d\n", i);
	}
	return 0;
}

