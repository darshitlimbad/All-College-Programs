package JDBC.RMI;

import java.rmi.*;
import java.rmi.registry.*;
import java.rmi.server.ExportException;
import java.rmi.server.UnicastRemoteObject;

public class Server {
    public static Registry r;
    public static void main(String str[]) throws Exception{
        try{
            r= java.rmi.registry.LocateRegistry.createRegistry(1099);
            r.bind("SUM", new Imple());
            System.out.println("Server Started..."); 
        }catch(ExportException e){
//            e.printStackTrace();
            
//            UnicastRemoteObject.unexportObject(new Imple(), true);
//            Registry r= java.rmi.registry.LocateRegistry.createRegistry(1099);
//            r.unbind("SUM");
            
        }catch(Exception e){
            System.out.println("Exception: "+e);
        }
    }
}
