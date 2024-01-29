package ch_2;

interface i1 {
    int e=10;
    
    void print();
}

class cls implements i1{
    
    @Override
    public void print(){
        System.out.println(e);
        //e=11; //default of var in interface is final
    }
}
public class interface_ex{
    public static void main(String[] args)  {
        cls t=new cls();
        t.print();
        
    }
}
