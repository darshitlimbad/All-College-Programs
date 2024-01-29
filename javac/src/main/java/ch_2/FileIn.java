package ch_2;

import java.io.FileInputStream;
import java.io.IOException;

public class FileIn {

    static public void main(String[] args) throws IOException {
        FileInputStream filein = null;
        try {
            filein = new FileInputStream("C:\\Users\\Darsh\\prog\\javac\\src\\main\\java\\ch_2\\dogs1.txt");
            int temp;
            while ((temp = filein.read()) != -1) {
                System.out.print((char) temp);
            }
        } finally {
            if(filein != null){
                filein.close();
            }
        }

    }

}
