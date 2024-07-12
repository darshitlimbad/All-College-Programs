package JDBC.RMI;

import java.rmi.*;
import java.util.*;

public class Client {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number:");
        int a = sc.nextInt();
        System.out.print("Enter second number:");
        int b = sc.nextInt();
        int n;
        
        try{
            AddInterFace obj= (AddInterFace) Naming.lookup("//localhost/SUM");
            n= obj.add(a,b);
            System.out.println("Addition= " + n); 
            
            if(n==10){
                obj.serverShutDown();
            }
        }catch(Exception err){
            System.out.println("Exception "+err); 
        }
    }
}
