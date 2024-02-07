using CrudOperations1.SQLConn;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Drawing.Text;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CrudOperations1
{
    public partial class EMP_RECORDS : Form
    {
        static Boolean IS_UNM_WRONG = true;
        static Boolean IS_PWD_WRONG = true;

        public EMP_RECORDS()
        {
            InitializeComponent();
        }
        public EMP_RECORDS(String Method)
        {
            InitializeComponent();
            this.Text = Method + " RECORD PAGE";
            Title.Text = Method + " RECORD PAGE";
            SUBMIT.Text = Method;
            //MessageBox.Show(Method);

            if (Method == "ADD")
            {
                String NewID = "EMP";
                int OldID_d = 0;//if data table is empty

                DataTable dt = new DataTable();
                dt = sql.select_one_column_row("EMP_ID" , "LastRow");

                if (dt.Rows.Count > 0)
                {
                    StringBuilder OldID = new StringBuilder();
                    OldID.Append(dt.Rows[0][0].ToString());
                    int.TryParse(OldID.Remove(0, 3).ToString(), out OldID_d);
                }
                
                OldID_d++;
                NewID += OldID_d.ToString("0000");
                EMPIDTXT.Text =NewID;
            }
        }

        private void EMP_RECORDS_Load(object sender, EventArgs e)
        {
            PWD_POPUP.Hide();
            JDDATE.MaxDate = DateTime.Today;
        }

        private void NMTXT_KeyPress(object sender, KeyPressEventArgs e)
        {

        }

        private void DEPTBOX_KeyPress(object sender, KeyPressEventArgs e)
        {
            e.Handled = true;
        }

        private void SALTXT_KeyPress(object sender, KeyPressEventArgs e)
        {
            if(!(char.IsDigit(e.KeyChar)) && !(char.IsControl(e.KeyChar)))
            {
                e.Handled = true;
            }
        }

        private void UNMTXT_KeyUp(object sender, KeyEventArgs e)
        {
            UNM_CHECK();
        }

        private void UNM_CHECK()
        {
            IS_UNM_WRONG = false;
            UNM_POPUP.ForeColor = Color.Red;
            UNM_POPUP.Height = 0;
            UNM_POPUP.Items.Clear();

            if (UNMTXT.Text.Length == 0)
            {
                UNM_POPUP.Hide();
                IS_UNM_WRONG = true;
            }
            else if (!IS_UNM_AVILABLE())
            {
                show_unm_error("This Username is not Available!!");
            }
        }

        private void show_unm_error(String msg)
        {
            UNM_POPUP.Height += 16;
            UNM_POPUP.Items.Add(msg);
            IS_UNM_WRONG = true;
            UNM_POPUP.Show();
        }

        private void PWDTXT_KeyUp(object sender, KeyEventArgs e)
        {
            PWD_CHECK();
        }

        private void PWD_CHECK() 
        {
            IS_PWD_WRONG = false;
            PWD_POPUP.ForeColor = Color.Red;
            PWD_POPUP.Height = 0;
            PWD_POPUP.Items.Clear();


            if (PWDTXT.Text.Length == 0)
            {
                PWD_POPUP.Hide();
                IS_PWD_WRONG = true;
            }

            if (PWDTXT.Text.Length > 0 && PWDTXT.Text.Length < 8)
            {
                show_pwd_error("Password is too small!!");
            }

            string pattern = @"^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)";
            string sign_pattern = @"(?=.*[^\da-zA-Z])";

            if (PWDTXT.Text.Length > 0)
            {
                if (!(Regex.IsMatch(PWDTXT.Text, pattern)))
                {
                    show_pwd_error("small , capital letters , Digit Required");
                }

                if (!(Regex.IsMatch(PWDTXT.Text, sign_pattern)))
                {
                    show_pwd_error("Atleast one sign charecter required required");
                }
            }
        }

        private void show_pwd_error(String msg)
        {
            PWD_POPUP.Height += 16;
            PWD_POPUP.Items.Add(msg);
            IS_PWD_WRONG = true;
            PWD_POPUP.Show();
        }

        private Boolean IS_UNM_AVILABLE()
        {
            if(UNMTXT.Text.Length > 0)
            {
                DataTable dt = new DataTable();
                dt = sql.select_one_column_row("UNM", UNMTXT.Text);
                if (dt.Rows.Count == 1)
                {
                    return false;
                }
            }

            return true;
        }

        private void CHECK_ALL_FIELDS()
        {
            if (IS_UNM_WRONG && IS_PWD_WRONG)
            {
                SUBMIT.Enabled = false;
            }
            else
            {
                SUBMIT.Enabled =true;
            }
        }

        private void SUBMIT_Click(object sender, EventArgs e)
        {
            MessageBox.Show("idk kya ho raha heeeeee");
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            CHECK_ALL_FIELDS();
        }

        private void Clear_Click(object sender, EventArgs e)
        {
            NMTXT.Text = null;
            DEPTBOX.Text = null;
            JDDATE.DataBindings.Clear();
            SALTXT.Text = null;
            UNMTXT.Text = null; UNM_CHECK();
            PWDTXT.Text = null; PWD_CHECK();
        }
    }
}
