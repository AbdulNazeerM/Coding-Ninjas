void change(int *arr,int l)
{
//Write code here 
  for(int i=0;i<l;i++)
  {
    if(arr[i]<4)
      arr[i]=-1;
    else if(arr[i]%4==0)
       arr[i]=arr[i]/4; 
    else
    {
     arr[i]=arr[i]-(arr[i]%4);
      i--;
    }
      
  }
  
}
