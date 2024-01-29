using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.Sql;
using System.Data.SqlClient;

namespace disconnected_acrchitecture
{
    public partial class new_user : Form
    {
        static public Boolean IsAadharOkay=false;

        public new_user()
        {
            InitializeComponent();
        }

        private void txtaadhar_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void txtaadhar_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (txtaadhar.Text.Length == 12 && (!char.IsControl(e.KeyChar)))
            {
                e.Handled = true;
                IsAadharOkay = false;

            }
            if ((!char.IsDigit(e.KeyChar)) && (!char.IsControl(e.KeyChar)))
            {
                e.Handled = true;
                IsAadharOkay = false;

            }
            
        }

        private void txtaadhar_KeyUp(object sender, KeyEventArgs e)
        {
            if (txtaadhar.Text.Length == 12)
            {
                string query = "select * from user_table where aadhar = '"+txtaadhar.Text+"' ";
                SqlDataAdapter da= new SqlDataAdapter(query , sqlcon.con);
                DataTable dt = new DataTable();
                da.Fill(dt);
                if (dt.Rows.Count == 0)
                {
                    txtaadhar.ForeColor = Color.Green;
                    IsAadharOkay = true;
                }
                else
                {
                    txtaadhar.ForeColor = Color.Red;
                    IsAadharOkay = false;
                   
                }

            }
            else
            {
                txtaadhar.ForeColor = Color.Red;
                IsAadharOkay = false;
          
            }
        }

        private void new_user_Load(object sender, EventArgs e)
        {

        }

        private void submit_Click(object sender, EventArgs e)
        {
            string dob = dateTimePicker1.Value.Date.ToString("dd/MM/yyyy");
            string query = "insert into user_table values("+txtunm+","+txtaadhar+","+txtpass+","+dob+")";
            SqlDataAdapter da = new SqlDataAdapter(query, sqlcon.con);
            

        }
    }
}
