using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace disconnected_acrchitecture
{
    public partial class homepage : Form
    {
        public homepage()
        {
            InitializeComponent();
        }

        private void homepage_Load(object sender, EventArgs e)
        {
            button1.Location = new Point((this.Width - button1.Width) - 20);
        }
        
        private void button1_Click(object sender, EventArgs e)
        {
            int confirm = Convert.ToInt16(MessageBox.Show("are you sure you want to exit","exit",MessageBoxButtons.YesNo ,MessageBoxIcon.Question));
            if (confirm == 6)
            {
                Application.Exit();            
            }
        }

        private void addNewToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //new_user1 nuser = new new_user1();
            //nuser.Show();
        }
    }
}
