using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data;
using System.Data.Sql;
using System.Data.SqlClient;

namespace connected_architecture
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            SqlConnection con = new SqlConnection("Data Source=.\\SQLEXPRESS;AttachDbFilename=C:\\Users\\STUD\\Documents\\su_nay_karvu.mdf;Integrated Security=True;Connect Timeout=30;User Instance=True");
            con.Open();

            SqlCommand sql = new SqlCommand("select * from Table1", con);

            SqlDataAdapter da = new SqlDataAdapter(DataTable);
            dt sql = new DataTable();
            da.Fill(dt);

            dataGridView1.DataSource = dt;
            

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
