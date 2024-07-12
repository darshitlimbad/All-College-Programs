package JDBC.RMI;

import java.rmi.Remote;
import java.rmi.RemoteException;

public interface AddInterFace extends Remote{
    // method prototype
    public int add(int a, int b) throws RemoteException;

    public void serverShutDown() throws RemoteException;
}
