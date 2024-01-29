package ch_2;
import java.util.Date;
import java.text.SimpleDateFormat;

public class GetDate {
    static public void main(String args[]){
        Date cdate = new Date();
        
        SimpleDateFormat smdf = new SimpleDateFormat("DD/MM/yyyy ss-mm-HH");
        
        System.out.println(cdate);
        System.out.println(smdf.format(cdate));
    }
}
