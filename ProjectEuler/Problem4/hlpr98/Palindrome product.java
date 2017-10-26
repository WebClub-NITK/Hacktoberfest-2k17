import java.io.*;
import java.util.*;
import java.lang.*;


class pal{
	public static void main(String args[]){
		int int_max = 999;
		int int_min = 100;
		int flag = 0;
		int prod = 0;
		for(int i = int_max;i>=int_min;i--){
			for(int j = int_max;j>=int_min;j--){
				int prodDum = i * j;
				String s1 = Integer.toString(prodDum);
				StringBuilder sb = new StringBuilder(s1);
				s1 = sb.reverse().toString();
				int check = Integer.parseInt(s1);
			    if((check==prodDum)&&prodDum>prod)
			        prod = prodDum;
			}	    
		}
	    System.out.println("The larget paliandrom product = " + prod);
	}
}