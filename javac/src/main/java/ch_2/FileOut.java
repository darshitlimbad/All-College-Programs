package ch_2;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileOut {

    static public void main(String[] args) throws IOException {
        FileInputStream filein1 = null;
        FileOutputStream fileout2 = null;

        try {
            filein1 = new FileInputStream("C:\\Users\\Darsh\\prog\\javac\\src\\main\\java\\ch_2\\dogs1.txt");
            fileout2 = new FileOutputStream("C:\\Users\\Darsh\\prog\\javac\\src\\main\\java\\ch_2\\dogs2.txt");
            int temp;
            while ((temp = filein1.read()) != -1) {
                fileout2.write((byte)temp);
            }
        } finally {
            if (filein1 != null) {
                filein1.close();
            }
            if (fileout2 != null) {
                fileout2.close();
            }
        }
    }
}
