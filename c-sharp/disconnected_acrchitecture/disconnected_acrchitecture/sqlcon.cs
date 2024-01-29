using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Data;
using System.Data.Sql;
using System.Data.SqlClient;

namespace disconnected_acrchitecture
{
    class sqlcon
    {
        public static SqlConnection con = new SqlConnection(@"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\disconnected_database.mdf;Integrated Security=True;User Instance=True");
    }
}
