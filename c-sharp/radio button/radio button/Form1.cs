using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace radio_button
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string chked = "";
                if(radioButton1.Checked)
                {
                    chked += radioButton1.Text;
                }
                else if (radioButton2.Checked)
                {
                    chked += radioButton2.Text;
                }
            if(chked != "")
                MessageBox.Show(chked);
        }
    }
}
