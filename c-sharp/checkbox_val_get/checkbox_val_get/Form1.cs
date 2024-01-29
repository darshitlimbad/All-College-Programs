using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace checkbox_val_get
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string chk1 = "";
            string[] chk = new string[4];
            int count = 0;

            if(checkBox1.Checked== true) 
            {
                chk[count++] = checkBox1.Text;
            }
            
            if (checkBox2.Checked == true)
            {
                chk[count++] = checkBox2.Text;
                //MessageBox.Show(chk[1]);

            }
            if (checkBox3.Checked == true)
            {
                chk[count++] = checkBox3.Text;

            }

            for (int i = 0; i < chk.Length-1; i++)
            {
                chk1 += chk[i] + ((chk[i] != null) && (chk[i+1] != null) ? " , " : "");
            }
            chk1 += ".";

            MessageBox.Show(chk1);
        }
    }
}
