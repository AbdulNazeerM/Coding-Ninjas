int sum(int *arr,int size)
{
  int a,b,c,d;
  a=b=c=d=0;
  for(int i=0;i<size;i++)
  {
    a=a+arr[i];
  }
    while(a > 0 || c > 9)
    {
        if(a == 0)
        {
            a = c;
            c = 0;
        }
        c += a % 10;
        a /= 10;
    }
  return c;
}
