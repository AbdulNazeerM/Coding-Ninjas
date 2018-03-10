void printPatt(int n)
{
    //write your code here
  int i=0,j,m,k,c=-1,p;
  
  while(i<n)
  {
    k=n+64;
    m=n+64;
    c++;
    j=c;
    while(j>0)
    {
      p=m-j;
     cout<<(char)p;
      j--;
    }
    cout<<(char)k<<"\n";
       i++; 
    }  
}

