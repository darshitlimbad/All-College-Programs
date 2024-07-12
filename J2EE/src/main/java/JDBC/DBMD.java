package JDBC;

import java.sql.*;

public class DBMD {

    public static void main(String str[]) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost/botsapp", "root", "");

            DatabaseMetaData dbmd = con.getMetaData();
            System.out.println(dbmd.getDatabaseProductName());
            System.out.println(dbmd.allProceduresAreCallable());
            System.out.println(dbmd.getDatabaseMajorVersion());
            System.out.println(dbmd.getDriverName());
            System.out.println(dbmd.getDriverVersion());
            System.out.println(dbmd.getUserName());

            con.close();
        } catch (Exception err) {
            err.printStackTrace();
        }
    }
}
