namespace aadhar
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            textBox1 = new TextBox();
            textBox2 = new TextBox();
            button1 = new Button();
            dataGridView1 = new DataGridView();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).BeginInit();
            SuspendLayout();
            // 
            // textBox1
            // 
            textBox1.Location = new Point(51, 63);
            textBox1.Name = "textBox1";
            textBox1.Size = new Size(428, 26);
            textBox1.TabIndex = 0;
            textBox1.KeyUp += textBox1_KeyUp;
            // 
            // textBox2
            // 
            textBox2.Location = new Point(45, 147);
            textBox2.Name = "textBox2";
            textBox2.Size = new Size(445, 26);
            textBox2.TabIndex = 1;
            // 
            // button1
            // 
            button1.Location = new Point(16, 207);
            button1.Name = "button1";
            button1.Size = new Size(507, 194);
            button1.TabIndex = 2;
            button1.Text = "button1";
            button1.UseVisualStyleBackColor = true;
            // 
            // dataGridView1
            // 
            dataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView1.Location = new Point(582, 12);
            dataGridView1.Name = "dataGridView1";
            dataGridView1.RowHeadersWidth = 49;
            dataGridView1.Size = new Size(573, 412);
            dataGridView1.TabIndex = 3;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 19F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1194, 477);
            Controls.Add(dataGridView1);
            Controls.Add(button1);
            Controls.Add(textBox2);
            Controls.Add(textBox1);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)dataGridView1).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TextBox textBox1;
        private TextBox textBox2;
        private Button button1;
        private DataGridView dataGridView1;
    }
}
