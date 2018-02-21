import java.util.Scanner;
public class Solution {

	public static void print(int n) {
		//Write your code here
       for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
          System.out.print("*");
          }
        System.out.println();
      }
	}

}
