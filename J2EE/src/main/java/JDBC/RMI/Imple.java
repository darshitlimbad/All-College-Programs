package JDBC.RMI;

import java.rmi.NotBoundException;
import java.rmi.RemoteException;
import java.rmi.server.*;
import java.rmi.registry.*;


public class Imple extends UnicastRemoteObject implements AddInterFace{
    
    private Registry r;
    
    public Imple() throws Exception{
        super();
    }
    
    @Override
    public int add(int a, int b){
        return a+b;
    }
    
    @Override
    public void serverShutDown(){
        try{
            UnicastRemoteObject.unexportObject(this, true);
            Server.r.unbind("SUM");
        }catch(NotBoundException | RemoteException e){
            System.out.println("Exception: "+e);
        }
    }
}
