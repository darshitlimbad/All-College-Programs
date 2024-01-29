using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace rgb_trigger
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        public static int i = 0;

        private void timer1_Tick(object sender, EventArgs e)
        {
            i++;
            if (i <= 2)
            {
                button1.Visible = true;
                button3.Visible = false;
            }
            else if (i <= 4)
            {
                button1.Visible = false;
                button2.Visible = true;
            }
            else if(i<=6)
            {
                button2.Visible = false;
                button3.Visible = true;
                if(i==6)
                {
                    i=0;
                }
            }
        }
    }
}
