import java.util.Scanner;
class Kaprekar
{
    public static int noOfDigits(int n)
    {
        int c=0;
        do
        {
            n /= 10;
            ++c;
        }
        while(num!=0);
        return count;
    }
    public static boolean isKaprekar(int n)
    {
        int sq = n*n;
        int c = noOfDigits(n);
        int a, b;
        a =(int)(sq%(Math.pow(10, c)));
        b =(int)(sq/(Math.pow(10, c)));
        if((a+b)==n)
        return true;
        else
        return false;
    }
    public static void main(String args[])
    {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");
        n = sc.nextInt();
        if(isKaprekar(n))
        System.out.println(num + " is a Kaprekar Number");
        else
        System.out.println("Not a Kaprekar Number");
    }
}
