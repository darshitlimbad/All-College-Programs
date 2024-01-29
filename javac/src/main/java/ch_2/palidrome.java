package ch_2;

public class palidrome {
    static public void main(String[] args)  {
        String inputed_str1 = "level";
        String inputed_str2 = "hello";

        StringBuffer reversedstr1 = new StringBuffer(inputed_str1);
        reversedstr1.reverse();
        StringBuffer reversedstr2 = new StringBuffer(inputed_str2);
        reversedstr2.reverse();
        
        boolean match1 = inputed_str1.matches(reversedstr1.toString());
        boolean match2 = inputed_str2.matches(reversedstr2.toString());

        if(match1)  {
            System.out.println(inputed_str1);
        }
        
        if(match2)  {
            System.out.println(inputed_str2);
        }


    }
}
