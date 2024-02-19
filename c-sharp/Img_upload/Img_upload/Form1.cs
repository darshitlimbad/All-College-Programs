using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Img_upload
{
    public partial class Form1 : Form
    {
        String path;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            of.InitialDirectory = "Gallery";
            of.Title = "Select Profile Pic";
            of.Filter = "Image Only(*.jpg; *.jpeg; *.gif; *.png)|*.jpg; *.jpeg; *.gif; *.png";

            if (of.ShowDialog() == DialogResult.OK)
            {
                if(of.CheckFileExists)
                {
                    path = of.FileName;
                    label2.Text = path;
                    pictureBox1.Image = new Bitmap(path);
                    pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
                }
            }
            else
            {
                MessageBox.Show("Please Upload image.");
            }

        }

        private void button2_Click(object sender, EventArgs e)
        {
            if(path != null)
            {
                SaveFileDialog sd = new SaveFileDialog();
            }
            else
            {
                MessageBox.Show("Please Upload image.");
            }
        }
    }
}
