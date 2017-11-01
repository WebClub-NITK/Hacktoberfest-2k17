import java.io.*;
import java.util.*;
import java.lang.*;


class pnd{
	public static void main(String args[]){
		int n[] = {4,7};
		int flag = 0;
		int largestPandigital = 2 ;
		for(int i = 1;i>=0;i--){
			int num_digits = n[i];
			int int_max = (int)Math.pow(10,num_digits) - 1;
			int int_min = (int)Math.pow(10,num_digits-1);
			int check = int_max;
			while(check>=int_min){
				if(check%10==1||check%10==3||check%10==7){
					if(isPandigital(check,num_digits)&&isPrime(check)){
						largestPandigital = check;
						flag = 1;
						break;
					}
				}
				check--;
			}
			if(flag==1)
				break;
		}
		
		System.out.println("The largest Pandigital prime no is = " + largestPandigital);
	}
	
	public static boolean isPandigital(int x,int max){
		int arr[] = new int[max];
		while(x!=0){
			int p = x%10;
			if(p<=max&&p>=1){
				if((++arr[p-1])>1)
					return false;
			}
			else
				return false;
			x = x/10;
		}
		return true;
	}
	
	public static boolean isPrime(int x){
		
		for(int i = 3;i<=(int)Math.sqrt(x);i++)
			if(x%i == 0)
				return false;
		
		return true;
	}
	
}
		
			
			
			