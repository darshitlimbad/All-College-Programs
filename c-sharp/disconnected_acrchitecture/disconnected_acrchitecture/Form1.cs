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

namespace disconnected_acrchitecture
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string query = "select * from user_table where username='"+textBox1.Text+"' and pass='"+textBox2.Text+"' ";
            SqlDataAdapter da = new SqlDataAdapter(query, sqlcon.con);
            DataTable dt = new DataTable();
            da.Fill(dt);

            if (dt.Rows.Count == 1)
            {
                load l1 = new load();
                l1.Show();
                this.Hide();
            }
            else
            {
                MessageBox.Show("user not found");
            }
        }
    }
}
