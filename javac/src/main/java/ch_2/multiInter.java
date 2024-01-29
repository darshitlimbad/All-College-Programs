package ch_2;

interface inter1{
    int e=10;
    void print();
}
interface inter2{
    int m=10;
    void print();
}

class clss implements inter1,inter2 {
     @Override
    public void print(){
        System.out.println(e);
        System.out.println(m);
    }
    
}

public class multiInter  {
   
    public static void main(String[] args){
        clss t = new clss();
        
        t.print();
    }
}
