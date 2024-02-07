using System;
using System.CodeDom.Compiler;
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
    public partial class LOADING : Form
    {
        public LOADING()
        {
            InitializeComponent();
        }

        static int temp = 0;

        private void LOADTIMER_Tick(object sender, EventArgs e)
        {

            temp += 2;
            if (LOADER.Value != 100)
            {
                LOADER.Value += 10;
            }
            else
            {
                LOADTIMER.Stop();
                if (LOADER.Value == 100)
                {
                    this.Hide();
                    HOME home = new HOME();
                    home.Show();
                }
            }
        }
    }
}
