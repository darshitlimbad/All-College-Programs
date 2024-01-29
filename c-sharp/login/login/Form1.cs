using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace login
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            resize();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void resize()
        {
            button1.Location = new Point(this.Width-(button1.Width * 2) , 0);
        }
    }
}
