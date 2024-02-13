using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data;
using System.Data.SqlClient;
using System.Runtime.InteropServices;
using System.Windows.Forms;

namespace CrudOperations1.SQLConn
{
    class sql
    {
        public static SqlConnection conn = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=|DataDirectory|\CRUDOP1DB.mdf;Integrated Security=True");
        static public String CHKADMIN(String username, String password)
        {  
            String select = "select * from ADMINDETAILS where unm='"+username+"'";
            SqlDataAdapter da = new SqlDataAdapter(select, conn);
            DataTable dt = new DataTable();
            da.Fill(dt);
            if (dt.Rows.Count == 1)
            {
                select = "select * from ADMINDETAILS where unm ='"+username+"' AND  pwd='"+password+"'";
                da = new SqlDataAdapter(select, conn);
                DataTable dt1 = new DataTable();
                da.Fill(dt1);
                if (dt1.Rows.Count == 1)
                {
                    return "true";
                }
                else
                {
                    return "Password Incorrect!";
                }
            }
            else
            {
                return "User Not Found!";
            }
        }

        static public DataTable select_one_column_row(String column , String what )
        {
            String query = (what == "LastRow") ? "SELECT TOP 1 " + column + " FROM EMPDETAILS ORDER BY "+column+" DESC":
                                                   "SELECT TOP 1 " + column + " FROM EMPDETAILS WHERE (" + column + " = '" + what + "')";

            SqlDataAdapter da = new SqlDataAdapter(query, sql.conn);
            DataTable dt = new DataTable();
            da.Fill(dt);
            return dt;
        }
        
    }
}
