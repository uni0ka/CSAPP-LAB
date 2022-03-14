#include<stdio.h>
#include"./func4.h"

int func4(int di, int si ,int dx){
	int ret = dx;
	ret -= si;
	int cx = ret;
	cx = cx >> 0x1f;
	ret += cx;
	ret = ret >> 1;
	cx = ret + si;

	if(cx <= di){
		ret = 0;
		if(cx >= di) return ret;
		else{
			si = cx + 1;
			ret = func4(di, si, dx);
			ret = 2*ret + 1;
			return ret;
		}
	}
	else{
		dx = cx - 1;
		ret = func4(di, si, dx);
		ret += ret;
		return ret;
	}
}
