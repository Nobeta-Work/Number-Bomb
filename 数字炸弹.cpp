#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int a = rand()%100;
	int YuanShen=0;
	int n,b;
	printf("����ը���������ɣ�1~100:");
	scanf("%d",&YuanShen);
	while (YuanShen != a){
		if (YuanShen>a) {printf("�´���~\n");
		scanf("%d",&YuanShen);
		n++;}
		else  {printf("��С��~\n");
		scanf("%d",&YuanShen);
		n++;
		}
	}
	if (YuanShen == a){n++;
	printf("\n��ϲ�㣬�¶��ˣ�����%d!��ʹ����%d�β¶ԣ�",a,n);
}
printf("\n�����������ı�������Ϸ\n");
scanf("%d",&b);
return 0;}
