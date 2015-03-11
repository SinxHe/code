			// 合并 - 查找算法 之 快速合并(较慢查找)

// 实现思路是把每棵树的树根合并;

// 为了实现合并, 只需要将指向的两个对象进行连接而不用遍历数组, 因此命名为快速合并;
#include <stdio.h>
#define  N	1000
int main(void)
{
	int i, j, p, q, id[N];
	
	for (i = 0; i < N; i++)
		id[i] = i;

	while(scanf("%d %d\n", &p, &q) == 2)
	{

			// 较慢查找操作, 一直循环到两个操作数各自的树根

		for (i = p; i!= id[i]; i = id[i]);  // 循环的结果是: i = (p所在树对应的树根)
		for (j = q; j!= id[j]; j = id[j]);  // 循环的结果是: j = (q所在树对应的树根)
		if (i == j)  // 如果两个数的树根相同, 说明在同一个树上, 连通的对不用输出
			continue;

			// 快速合并操作, 直接合并指向的项目, 不用遍历
			// 合并的结果是: p中包含了指向q所在树的树根的id("指针")

		id[i] = j;

			// 输出没有实现连通的对;

		printf("\t\t%d %d\n", p, q);
	}
	return 0;
}