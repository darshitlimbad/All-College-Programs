package pkg2;
        
import pkg1.cls1;

public class Class2 extends cls1{
    
    @Override
    public void hi(){
        System.out.println("say hi");
    }

    static public void main(String[] str){
        Class2 obj = new Class2();

        obj.hi();
    }
}
