namespace disconnected_acrchitecture
{
    partial class new_user
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.submit = new System.Windows.Forms.Button();
            this.dateTimePicker1 = new System.Windows.Forms.DateTimePicker();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.txtpass = new System.Windows.Forms.TextBox();
            this.txtaadhar = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.txtunm = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // submit
            // 
            this.submit.Location = new System.Drawing.Point(104, 215);
            this.submit.Name = "submit";
            this.submit.Size = new System.Drawing.Size(102, 49);
            this.submit.TabIndex = 17;
            this.submit.Text = "Submit";
            this.submit.UseVisualStyleBackColor = true;
            this.submit.Click += new System.EventHandler(this.submit_Click);
            // 
            // dateTimePicker1
            // 
            this.dateTimePicker1.Location = new System.Drawing.Point(113, 162);
            this.dateTimePicker1.Name = "dateTimePicker1";
            this.dateTimePicker1.Size = new System.Drawing.Size(180, 25);
            this.dateTimePicker1.TabIndex = 16;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(6, 162);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(90, 18);
            this.label4.TabIndex = 15;
            this.label4.Text = "date of birth";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(6, 112);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(37, 18);
            this.label3.TabIndex = 14;
            this.label3.Text = "Pass";
            // 
            // txtpass
            // 
            this.txtpass.Location = new System.Drawing.Point(104, 105);
            this.txtpass.Name = "txtpass";
            this.txtpass.Size = new System.Drawing.Size(212, 25);
            this.txtpass.TabIndex = 13;
            // 
            // txtaadhar
            // 
            this.txtaadhar.Location = new System.Drawing.Point(104, 51);
            this.txtaadhar.Name = "txtaadhar";
            this.txtaadhar.Size = new System.Drawing.Size(212, 25);
            this.txtaadhar.TabIndex = 12;
            this.txtaadhar.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.txtaadhar_KeyPress);
            this.txtaadhar.KeyUp += new System.Windows.Forms.KeyEventHandler(this.txtaadhar_KeyUp);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(6, 51);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(56, 18);
            this.label2.TabIndex = 11;
            this.label2.Text = "Aadhar";
            // 
            // txtunm
            // 
            this.txtunm.Location = new System.Drawing.Point(104, 8);
            this.txtunm.Name = "txtunm";
            this.txtunm.Size = new System.Drawing.Size(212, 25);
            this.txtunm.TabIndex = 10;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(6, 8);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(68, 18);
            this.label1.TabIndex = 9;
            this.label1.Text = "username";
            // 
            // new_user
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(352, 273);
            this.Controls.Add(this.submit);
            this.Controls.Add(this.dateTimePicker1);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.txtpass);
            this.Controls.Add(this.txtaadhar);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txtunm);
            this.Controls.Add(this.label1);
            this.Font = new System.Drawing.Font("Modern No. 20", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Margin = new System.Windows.Forms.Padding(4);
            this.Name = "new_user";
            this.Text = "new_user";
            this.Load += new System.EventHandler(this.new_user_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button submit;
        private System.Windows.Forms.DateTimePicker dateTimePicker1;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtpass;
        private System.Windows.Forms.TextBox txtaadhar;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txtunm;
        private System.Windows.Forms.Label label1;

    }
}