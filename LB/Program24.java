import java.util.Scanner;

class Program24
{
   public static void main(String A[]) 
   {  
      Scanner scanner = null;
      String sname = null;

      scanner = new Scanner(System.in);

      System.out.println("Enter your name :");
      sname = scanner.next();

      System.out.println("Welcome " + sname);   
   }


}

