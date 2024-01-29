package ch_2;

import java.io.File;

public class FileClas {

    static public void main(String[] args) throws Exception {
        File f = null;

        try {
            f = new File("C:\\Users\\Darsh\\prog\\javac\\src\\main\\java\\ch_2\\dogs3.txt");

            System.out.println(f.getName());
            System.out.println(f.getClass());
            System.out.println(f.canExecute());
            System.out.println(f.canRead());
            System.out.println(f.getPath());
            System.out.println(f.getAbsoluteFile());
            System.out.println(f.getAbsolutePath());
        }catch(Exception e){
        System.out.println(e);
        }
    }
}

