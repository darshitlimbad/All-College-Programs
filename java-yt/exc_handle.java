public class exc_handle{
    public static void main(String[] arg) {
        try{
            int a= 120/0;
            System.out.println(a);
        }catch(ArithmeticException e)   {
            System.out.println(e);
        }
    }
}