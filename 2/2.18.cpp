int a=0,b=1;
int *p1 = &a, *p2 = p1;
//change
p1 = &b;
//change
*p2=b

