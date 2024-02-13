namespace CrudOperations1
{
    partial class EMP_RECORDS
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
            this.components = new System.ComponentModel.Container();
            this.Title = new System.Windows.Forms.Label();
            this.NMLBL = new System.Windows.Forms.Label();
            this.NMTXT = new System.Windows.Forms.TextBox();
            this.DEPTLBL = new System.Windows.Forms.Label();
            this.JDLBL = new System.Windows.Forms.Label();
            this.SALLBL = new System.Windows.Forms.Label();
            this.UNMLBL = new System.Windows.Forms.Label();
            this.PWDLBL = new System.Windows.Forms.Label();
            this.SALTXT = new System.Windows.Forms.TextBox();
            this.UNMTXT = new System.Windows.Forms.TextBox();
            this.PWDTXT = new System.Windows.Forms.TextBox();
            this.Clear = new System.Windows.Forms.Button();
            this.SUBMIT = new System.Windows.Forms.Button();
            this.DEPTBOX = new System.Windows.Forms.ComboBox();
            this.JDDATE = new System.Windows.Forms.DateTimePicker();
            this.PWD_POPUP = new System.Windows.Forms.ListBox();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.UNM_POPUP = new System.Windows.Forms.ListBox();
            this.EMPIDTXT = new System.Windows.Forms.TextBox();
            this.EMPIDLBL = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // Title
            // 
            this.Title.AutoSize = true;
            this.Title.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Title.Location = new System.Drawing.Point(150, 23);
            this.Title.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.Title.Name = "Title";
            this.Title.Size = new System.Drawing.Size(215, 31);
            this.Title.TabIndex = 0;
            this.Title.Text = "RECORD PAGE";
            // 
            // NMLBL
            // 
            this.NMLBL.AutoSize = true;
            this.NMLBL.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.NMLBL.Location = new System.Drawing.Point(35, 139);
            this.NMLBL.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.NMLBL.Name = "NMLBL";
            this.NMLBL.Size = new System.Drawing.Size(70, 25);
            this.NMLBL.TabIndex = 1;
            this.NMLBL.Text = "NAME";
            // 
            // NMTXT
            // 
            this.NMTXT.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.NMTXT.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.NMTXT.Location = new System.Drawing.Point(216, 134);
            this.NMTXT.Margin = new System.Windows.Forms.Padding(4);
            this.NMTXT.Name = "NMTXT";
            this.NMTXT.Size = new System.Drawing.Size(339, 26);
            this.NMTXT.TabIndex = 2;
            this.NMTXT.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.NMTXT_KeyPress);
            // 
            // DEPTLBL
            // 
            this.DEPTLBL.AutoSize = true;
            this.DEPTLBL.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.DEPTLBL.Location = new System.Drawing.Point(35, 179);
            this.DEPTLBL.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.DEPTLBL.Name = "DEPTLBL";
            this.DEPTLBL.Size = new System.Drawing.Size(149, 25);
            this.DEPTLBL.TabIndex = 3;
            this.DEPTLBL.Text = "DEPARTMENT";
            // 
            // JDLBL
            // 
            this.JDLBL.AutoSize = true;
            this.JDLBL.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.JDLBL.Location = new System.Drawing.Point(35, 221);
            this.JDLBL.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.JDLBL.Name = "JDLBL";
            this.JDLBL.Size = new System.Drawing.Size(117, 25);
            this.JDLBL.TabIndex = 4;
            this.JDLBL.Text = "JOIN DATE";
            // 
            // SALLBL
            // 
            this.SALLBL.AutoSize = true;
            this.SALLBL.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.SALLBL.Location = new System.Drawing.Point(35, 269);
            this.SALLBL.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.SALLBL.Name = "SALLBL";
            this.SALLBL.Size = new System.Drawing.Size(91, 25);
            this.SALLBL.TabIndex = 5;
            this.SALLBL.Text = "SALARY";
            // 
            // UNMLBL
            // 
            this.UNMLBL.AutoSize = true;
            this.UNMLBL.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.UNMLBL.Location = new System.Drawing.Point(35, 313);
            this.UNMLBL.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.UNMLBL.Name = "UNMLBL";
            this.UNMLBL.Size = new System.Drawing.Size(124, 25);
            this.UNMLBL.TabIndex = 6;
            this.UNMLBL.Text = "USERNAME";
            // 
            // PWDLBL
            // 
            this.PWDLBL.AutoSize = true;
            this.PWDLBL.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.PWDLBL.Location = new System.Drawing.Point(35, 363);
            this.PWDLBL.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.PWDLBL.Name = "PWDLBL";
            this.PWDLBL.Size = new System.Drawing.Size(130, 25);
            this.PWDLBL.TabIndex = 7;
            this.PWDLBL.Text = "PASSWORD";
            // 
            // SALTXT
            // 
            this.SALTXT.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.SALTXT.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.SALTXT.Location = new System.Drawing.Point(216, 269);
            this.SALTXT.Margin = new System.Windows.Forms.Padding(4);
            this.SALTXT.Name = "SALTXT";
            this.SALTXT.Size = new System.Drawing.Size(339, 26);
            this.SALTXT.TabIndex = 10;
            this.SALTXT.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.SALTXT_KeyPress);
            // 
            // UNMTXT
            // 
            this.UNMTXT.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.UNMTXT.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.UNMTXT.Location = new System.Drawing.Point(216, 313);
            this.UNMTXT.Margin = new System.Windows.Forms.Padding(4);
            this.UNMTXT.MaxLength = 12;
            this.UNMTXT.Name = "UNMTXT";
            this.UNMTXT.Size = new System.Drawing.Size(339, 26);
            this.UNMTXT.TabIndex = 11;
            this.UNMTXT.KeyUp += new System.Windows.Forms.KeyEventHandler(this.UNMTXT_KeyUp);
            // 
            // PWDTXT
            // 
            this.PWDTXT.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.PWDTXT.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.PWDTXT.Location = new System.Drawing.Point(216, 363);
            this.PWDTXT.Margin = new System.Windows.Forms.Padding(4);
            this.PWDTXT.MaxLength = 16;
            this.PWDTXT.Name = "PWDTXT";
            this.PWDTXT.Size = new System.Drawing.Size(339, 26);
            this.PWDTXT.TabIndex = 12;
            this.PWDTXT.KeyUp += new System.Windows.Forms.KeyEventHandler(this.PWDTXT_KeyUp);
            // 
            // Clear
            // 
            this.Clear.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.Clear.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.Clear.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Clear.ForeColor = System.Drawing.Color.Red;
            this.Clear.Location = new System.Drawing.Point(314, 446);
            this.Clear.Margin = new System.Windows.Forms.Padding(4);
            this.Clear.Name = "Clear";
            this.Clear.Size = new System.Drawing.Size(237, 50);
            this.Clear.TabIndex = 13;
            this.Clear.Text = "Clear";
            this.Clear.UseVisualStyleBackColor = false;
            this.Clear.Click += new System.EventHandler(this.Clear_Click);
            // 
            // SUBMIT
            // 
            this.SUBMIT.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(255)))), ((int)(((byte)(192)))));
            this.SUBMIT.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.SUBMIT.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.SUBMIT.ForeColor = System.Drawing.Color.OliveDrab;
            this.SUBMIT.Location = new System.Drawing.Point(40, 446);
            this.SUBMIT.Margin = new System.Windows.Forms.Padding(4);
            this.SUBMIT.Name = "SUBMIT";
            this.SUBMIT.Size = new System.Drawing.Size(266, 50);
            this.SUBMIT.TabIndex = 14;
            this.SUBMIT.Text = "Submit";
            this.SUBMIT.UseVisualStyleBackColor = false;
            this.SUBMIT.Click += new System.EventHandler(this.SUBMIT_Click);
            // 
            // DEPTBOX
            // 
            this.DEPTBOX.FlatStyle = System.Windows.Forms.FlatStyle.System;
            this.DEPTBOX.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.DEPTBOX.FormattingEnabled = true;
            this.DEPTBOX.Items.AddRange(new object[] {
            "Sales",
            "HR",
            "Marketing",
            "R&D",
            "Administration",
            "Security",
            "Finance"});
            this.DEPTBOX.Location = new System.Drawing.Point(216, 174);
            this.DEPTBOX.Margin = new System.Windows.Forms.Padding(4);
            this.DEPTBOX.Name = "DEPTBOX";
            this.DEPTBOX.Size = new System.Drawing.Size(338, 28);
            this.DEPTBOX.TabIndex = 15;
            this.DEPTBOX.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.DEPTBOX_KeyPress);
            // 
            // JDDATE
            // 
            this.JDDATE.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.JDDATE.Location = new System.Drawing.Point(216, 221);
            this.JDDATE.Margin = new System.Windows.Forms.Padding(4);
            this.JDDATE.Name = "JDDATE";
            this.JDDATE.Size = new System.Drawing.Size(338, 26);
            this.JDDATE.TabIndex = 16;
            // 
            // PWD_POPUP
            // 
            this.PWD_POPUP.BackColor = System.Drawing.Color.WhiteSmoke;
            this.PWD_POPUP.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.PWD_POPUP.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.PWD_POPUP.FormattingEnabled = true;
            this.PWD_POPUP.ItemHeight = 16;
            this.PWD_POPUP.Location = new System.Drawing.Point(216, 398);
            this.PWD_POPUP.Margin = new System.Windows.Forms.Padding(4);
            this.PWD_POPUP.Name = "PWD_POPUP";
            this.PWD_POPUP.Size = new System.Drawing.Size(337, 16);
            this.PWD_POPUP.TabIndex = 17;
            // 
            // timer1
            // 
            this.timer1.Enabled = true;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // UNM_POPUP
            // 
            this.UNM_POPUP.BackColor = System.Drawing.Color.WhiteSmoke;
            this.UNM_POPUP.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.UNM_POPUP.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.UNM_POPUP.FormattingEnabled = true;
            this.UNM_POPUP.ItemHeight = 16;
            this.UNM_POPUP.Location = new System.Drawing.Point(214, 340);
            this.UNM_POPUP.Margin = new System.Windows.Forms.Padding(4);
            this.UNM_POPUP.Name = "UNM_POPUP";
            this.UNM_POPUP.Size = new System.Drawing.Size(340, 16);
            this.UNM_POPUP.TabIndex = 18;
            // 
            // EMPIDTXT
            // 
            this.EMPIDTXT.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.EMPIDTXT.Enabled = false;
            this.EMPIDTXT.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.EMPIDTXT.Location = new System.Drawing.Point(216, 88);
            this.EMPIDTXT.Margin = new System.Windows.Forms.Padding(4);
            this.EMPIDTXT.Name = "EMPIDTXT";
            this.EMPIDTXT.Size = new System.Drawing.Size(149, 26);
            this.EMPIDTXT.TabIndex = 19;
            // 
            // EMPIDLBL
            // 
            this.EMPIDLBL.AutoSize = true;
            this.EMPIDLBL.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.EMPIDLBL.Location = new System.Drawing.Point(35, 89);
            this.EMPIDLBL.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.EMPIDLBL.Name = "EMPIDLBL";
            this.EMPIDLBL.Size = new System.Drawing.Size(112, 25);
            this.EMPIDLBL.TabIndex = 20;
            this.EMPIDLBL.Text = "Employe ID";
            // 
            // EMP_RECORDS
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(581, 553);
            this.Controls.Add(this.EMPIDLBL);
            this.Controls.Add(this.EMPIDTXT);
            this.Controls.Add(this.UNM_POPUP);
            this.Controls.Add(this.PWD_POPUP);
            this.Controls.Add(this.JDDATE);
            this.Controls.Add(this.DEPTBOX);
            this.Controls.Add(this.SUBMIT);
            this.Controls.Add(this.Clear);
            this.Controls.Add(this.PWDTXT);
            this.Controls.Add(this.UNMTXT);
            this.Controls.Add(this.SALTXT);
            this.Controls.Add(this.PWDLBL);
            this.Controls.Add(this.UNMLBL);
            this.Controls.Add(this.SALLBL);
            this.Controls.Add(this.JDLBL);
            this.Controls.Add(this.DEPTLBL);
            this.Controls.Add(this.NMTXT);
            this.Controls.Add(this.NMLBL);
            this.Controls.Add(this.Title);
            this.Margin = new System.Windows.Forms.Padding(4);
            this.Name = "EMP_RECORDS";
            this.Text = "EMP_RECORDS";
            this.Load += new System.EventHandler(this.EMP_RECORDS_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label Title;
        private System.Windows.Forms.Label NMLBL;
        private System.Windows.Forms.TextBox NMTXT;
        private System.Windows.Forms.Label DEPTLBL;
        private System.Windows.Forms.Label JDLBL;
        private System.Windows.Forms.Label SALLBL;
        private System.Windows.Forms.Label UNMLBL;
        private System.Windows.Forms.Label PWDLBL;
        private System.Windows.Forms.TextBox SALTXT;
        private System.Windows.Forms.TextBox UNMTXT;
        private System.Windows.Forms.TextBox PWDTXT;
        private System.Windows.Forms.Button Clear;
        private System.Windows.Forms.Button SUBMIT;
        private System.Windows.Forms.ComboBox DEPTBOX;
        private System.Windows.Forms.DateTimePicker JDDATE;
        private System.Windows.Forms.ListBox PWD_POPUP;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.ListBox UNM_POPUP;
        private System.Windows.Forms.TextBox EMPIDTXT;
        private System.Windows.Forms.Label EMPIDLBL;
    }
}