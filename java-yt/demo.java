class A{
    public A(int n){
        System.out.println(n);
    }
}
class B extends A{
    public B(int n){
        super(n);
        System.out.println(n);
    }
}

public class demo{
    public static void main(String[] a) {
        B obj = new B(23);
    }
}
