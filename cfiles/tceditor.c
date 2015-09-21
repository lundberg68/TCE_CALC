/*******************
** tc-editor.c
********************/
extern int computeWeight(int);

int processValue(int p1, int p2)
{
	int helper = 0;
	if (computeWeight(p1) > 0) {
		helper= computeWeight(p2);
	}
	return p1 + p2 + helper;

}
/* End of processValue */


int sqr(int x)
{
	return x * x;
}
/* End of sqr */

int cube(int x)
{
	int a;
	int b;
	long c,d,e,f;

	a = 1;
	c = 3;
	return x * x * x;
}
/* End of sqr */
