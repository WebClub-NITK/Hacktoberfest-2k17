package mypackage;
import java.util.*;
public class Prajnaaa12
{
  public static void main(String[] args)
  {
    Scanner s = new Scanner(System.in);
    int i,key,low=0,high,mid,n=0;
    System.out.println("Enter number of elements");
    n=s.nextInt();
    int[] a = new int[n];
    high=n-1;
    System.out.println("Enter an array of "+n+" numbers");
    for(i=0;i<n;i++)
      a[i]=s.nextInt();
    System.out.println("Enter the key to be searched");
    key=s.nextInt();
    while(low<=high)
    {
     mid=(low+high)/2;
     if(key==mid)
     {
       System.out.println(key+" found at position "+ (mid+1));
       break;
     }
     else if (key<mid)
       high=mid-1;
     else
       low=mid+1;
     }
    System.out.println("Key not found!");
   }
 }
       
