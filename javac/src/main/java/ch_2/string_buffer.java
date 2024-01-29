package ch_2;

public class string_buffer {
    static public void main(String[] args)  {
        StringBuffer str =  new StringBuffer("hello world");
        
        System.out.println(str);
        System.out.println(str.replace(0,2, "012"));
        System.out.println(str.insert(0, "in"));
        System.out.println(str.append("darshit"));
        System.out.println(str.delete(1, 4));


    }
}
