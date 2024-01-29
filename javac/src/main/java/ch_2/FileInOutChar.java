package ch_2;

import java.io.*;

public class FileInOutChar {

    static public void main(String[] args) throws IOException {
        FileReader freader = null;
        FileWriter fwriter = null;

        try{
            File f = new File("C:\\Users\\Darsh\\prog\\javac\\src\\main\\java\\ch_2\\dogs1.txt");
            freader = new FileReader(f);
            fwriter = new FileWriter("C:\\Users\\Darsh\\prog\\javac\\src\\main\\java\\ch_2\\dogs2.txt");
            char chars[] = new char[(int) f.length()];

            freader.read(chars);
            fwriter.write(chars);
        }finally{
            if(freader != null){
                freader.close();
            }
            if(fwriter != null){
                fwriter.close();
            }
        }
    }
}
