void printPatt(int n)
{
  int i,j=0,a,k=0,l=0,m=0,c=0,p=0;
  i=0;a=1;
  while(i<n)
  {
    c++;
    j=c;
    a++;
    if(a%2==0)
    {
    while(j>=1)
    {
      k++;
      cout<<k<<" ";
      j--;
     }
    }
    else
    {
    for(k=k+c,p=k;j>=1;j--)
    {
      cout<<p<<" ";
      p--;
     }      
    }
    cout<<"\n";
    i++;
  }
}
