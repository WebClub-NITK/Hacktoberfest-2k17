import java.io.*;
import java.util.*;
import java.lang.*;


class coin{
	public static void main(String args[]){
		int arr[] = {1,2,5,10,20,50,100,200};
		int num_coins = 8;
		int sum_req = 200;
		
		System.out.println("The no of ways = " + count(arr,num_coins,sum_req));
	}
	
	public static int count(int arr[],int num_coins,int sum_req){
		if(sum_req == 0)
			return 1;
		if(sum_req < 0)
			return 0;
		if(num_coins<=0&&sum_req>0)
			return 0;
		
		return count(arr,num_coins-1,sum_req)+count(arr,num_coins,sum_req-arr[num_coins-1]);
	}
}
		