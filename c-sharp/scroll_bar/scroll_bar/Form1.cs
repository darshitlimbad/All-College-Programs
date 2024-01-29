using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace scroll_bar
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

        private void hScrollBar1_Scroll(object sender, ScrollEventArgs e)
        {
            backcolor();
        }

        private void hScrollBar2_Scroll(object sender, ScrollEventArgs e)
        {
            backcolor();

        }

        private void hScrollBar3_Scroll(object sender, ScrollEventArgs e)
        {
            backcolor();
        }

        private void backcolor() 
        {
            BackColor = Color.FromArgb(hScrollBar1.Value, hScrollBar2.Value, hScrollBar3.Value);            
        }
    }
}
