
import java.util.Scanner;
import java.io.*;

class Palindrome {

	public static void main (String[] args) {
		
		Scanner in = new Scanner(System.in);
		String str = in.next();
		str = str.toLowerCase();
		String revStr = "";
		
		for(int i = str.length()-1; i>=0; i--){
			revStr += str.charAt(i);
		}
		
		if(str.equals(revStr)) {
			System.out.println("Palindrome!");
		} else {
			System.out.println("Not a Palindrome!");
		}
		
	}
}