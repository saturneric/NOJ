#include <stdio.h>

int main(void){
	unsigned long long n, c = 0, x, pow = 1, lx = 0;
	scanf("%llu",&n);
	while(n){ //当n不等于0的时候才继续循环
		x = n % 10; //将n现在的最低位赋值给x
		n /= 10;
		if(n){//当n不等于0的时候,就是判断现在的处理的位是否到了最后一位
			if(x == 1){
				c += (lx+1) + n * pow; //总数加上现在的位上出现1的次数
			}
			else c += (x>0?n+1:n) * pow; //同上
		}
		else if(x < 2) 
			c += lx+1;
		else c += pow;

		lx += x * pow;//记录x位后面的位，作为以后x=1的时候的计算依据
		pow *= 10;
	}
	printf("%llu\n",c);
	return 0;
}
