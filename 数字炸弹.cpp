#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int a = rand()%100;
	int YuanShen=0;
	int n,b;
	printf("数字炸弹！猜数吧！1~100:");
	scanf("%d",&YuanShen);
	while (YuanShen != a){
		if (YuanShen>a) {printf("猜大了~\n");
		scanf("%d",&YuanShen);
		n++;}
		else  {printf("猜小了~\n");
		scanf("%d",&YuanShen);
		n++;
		}
	}
	if (YuanShen == a){n++;
	printf("\n恭喜你，猜对了，答案是%d!你使用了%d次猜对！",a,n);
}
printf("\n请输入任意文本结束游戏\n");
scanf("%d",&b);
return 0;}
