package JDBC;

import java.sql.*;


public class Connectivity{
    public static void main(String str[]){
        try{
            Class.forName("com.mysql.jdbc.Driver");
            Connection con= DriverManager.getConnection("jdbc:mysql://localhost/botsapp","root","");
            Statement st= con.createStatement();
            ResultSet rs= st.executeQuery("SELECT * FROM inbox");
            
            while(rs.next()){
                System.out.println(rs.getString("id") + " | " + rs.getString("fromID") + " | " + rs.getString("toID") + " | " + rs.getString("chatType") );
            }
            
            rs.close();
            st.close();
            con.close();
        }catch(Exception err){
            err.printStackTrace();
        }
    }
}
