namespace log_in_form
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
            position_center();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Application.Exit();

        }

        private void button2_Click(object sender, EventArgs e)
        {
            if(WindowState == FormWindowState.Maximized)
            {
                WindowState = FormWindowState.Normal;
                position_center();
            }
            else
            {
                WindowState = FormWindowState.Maximized;
            }
            resize();
        }

        private void resize()
        {
            button1.Location = new Point(this.Width - (button1.Width + 15), 0);
            button2.Location = new Point(this.Width - button1.Width - (button2.Width + 15), 0);

        }

        private void position_center()
        {
            if ( this.WindowState == FormWindowState.Normal)
                this.Location = new Point( (Screen.PrimaryScreen.WorkingArea.Width -this.Width)/2 ,(Screen.PrimaryScreen.WorkingArea.Height - this.Height)/2 );
        }
    }
}
