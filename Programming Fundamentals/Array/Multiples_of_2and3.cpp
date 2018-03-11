int FindSum(int *arr,int l)
{
//Write code here 
  int c=0;
  for(int i=0;i<l;i++)
  {
    if(arr[i]%2==0||arr[i]%3==0)
    {
    c=c+arr[i]; 
    }
  }
return c;
}
