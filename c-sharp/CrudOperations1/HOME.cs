using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CrudOperations1
{
    public partial class HOME : Form
    {
        public HOME()
        {
            InitializeComponent();
        }

        private void ADD_Click(object sender, EventArgs e)
        {
            empRecords("ADD");
        }


        private void UPDATE_Click(object sender, EventArgs e)
        {
            empRecords("UPDATE");
        }

        private void DELETE_Click(object sender, EventArgs e)
        {
            empRecords("DELETE");
        }

        private void VIEW_Click(object sender, EventArgs e)
        {
            empRecords("VIEW");
        }
        private void EXIT_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void empRecords(String Method) 
        {
            EMP_RECORDS empRecords = new EMP_RECORDS(Method);
            empRecords.Show();
        }
    }
}
