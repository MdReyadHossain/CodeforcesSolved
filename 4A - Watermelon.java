import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        int a;
        Scanner ob=new Scanner(System.in);
        int x=ob.nextInt();
        if(x%2==0 && x>2)
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }
    }
}