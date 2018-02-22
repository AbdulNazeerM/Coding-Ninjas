public class solution {

	public static void print(int n) {
		//Write your code here
      for(int i=n;i>=0;i--)
      {
        for(int k=i;k<n;k++)
        {
          System.out.print(" ");
        }
        for(int j=1;j<=i;j++)
        {
          System.out.print("*");
        }
        System.out.println();
      }

	}

}
