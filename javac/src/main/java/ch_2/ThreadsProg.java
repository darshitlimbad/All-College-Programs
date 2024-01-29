package ch_2;

class th1 extends Thread{
    public void run(){
        for(int i=1 ; i<=10 ; i++)  {
            System.out.println("th1 - " + i);
        }
    }
}
class th2 extends Thread{
    public void run(){
        for(int i=1 ; i<=10 ; i++)  {
            System.out.println("th2 - " + i);
        }
    }
}
class th3 extends Thread{
    public void run(){
        for(int i=1 ; i<=10 ; i++)  {
            System.out.println("th3 - " + i);
        }
    }
}
public class ThreadsProg {
    static public void main(String[] args)  {
        th1 t1 = new th1();
        th2 t2 = new th2();
        th3 t3 = new th3();
        t1.start();
        t2.start();
        t3.start();
        
    }
}
