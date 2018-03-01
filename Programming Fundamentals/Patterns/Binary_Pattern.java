public class solution {

	public static void print(int n)
    {
        int c=2,r=0;
  			r=n;
  		for(int j=0;j<n;j++)
 		 {
 			 for(int m=r;m>0;m--)
 				 {
 					   if(c%2==0)
 						     System.out.print("1");
					   else
   							  System.out.print("0");  
				 }
 						   c++;
 					   r--;
          		System.out.println(); 
 		 }
    }
       //Write your code here
	

}
