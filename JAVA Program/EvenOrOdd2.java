import java.util.Scanner;

public class EvenOrOdd2 {
    public static void main(String[] args){
        Scanner b = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a = b.nextInt();

        if(a%2==0){
            System.out.println("The number is even: = "+a);
        }
        else{
            System.out.println("The number is odd: = "+a);
        }
    }
    
}
