using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace LOGIC_BUTTONS
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            resize();

            int a = Convert.ToInt32(MessageBox.Show("Do you really want to exit?", "Exit", MessageBoxButtons.YesNo, MessageBoxIcon.Question));
            if (a == 6)
            {
                Application.Exit();
            }

        }

        private void button2_Click(object sender, EventArgs e)
        {

            if (this.WindowState == FormWindowState.Normal)
            {
                this.WindowState = FormWindowState.Maximized;
                resize();
            }
            else
            {
                this.WindowState = FormWindowState.Normal;
                resize();
                //this.CenterToScreen();
                //CenterToScreen() also doing the same thing.
                this.Location = new Point((Screen.PrimaryScreen.WorkingArea.Width - this.Width) / 2, (Screen.PrimaryScreen.WorkingArea.Height - this.Height) / 2);
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.WindowState = FormWindowState.Minimized;
        }
        private void resize()
        {
            button1.Location = new Point(this.Width - 40, 0);
            button2.Location = new Point(this.Width - 100, 0);
            button3.Location = new Point(this.Width - 160, 0);
            label1.Location = new Point((this.Width - label1.Width) / 2, (this.Height - label1.Height - 60) / 2);
            textBox1.Location = new Point((this.Width - textBox1.Width) / 2, (this.Height - textBox1.Height) / 2);
            button4.Location = new Point((this.Width - label1.Width) / 2, (this.Height - label1.Height + 60) / 2);

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            resize();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "")
            {
                MessageBox.Show(textBox1.Text.Trim());
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }


}

