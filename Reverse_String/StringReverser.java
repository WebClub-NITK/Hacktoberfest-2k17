import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class StringReverser {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter String: ");
        
        String str = br.readLine();
        System.out.println("The String is: " + str);

        String reverse = new StringBuilder(str).reverse().toString();
        System.out.println("Reverse String is: " + reverse);  
    }
}