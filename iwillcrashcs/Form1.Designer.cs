
namespace iwillcrashcs
{
    partial class Form1
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
            this.btnIWillCrash = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnIWillCrash
            // 
            this.btnIWillCrash.Location = new System.Drawing.Point(31, 26);
            this.btnIWillCrash.Name = "btnIWillCrash";
            this.btnIWillCrash.Size = new System.Drawing.Size(75, 23);
            this.btnIWillCrash.TabIndex = 0;
            this.btnIWillCrash.Text = "I will crash";
            this.btnIWillCrash.UseVisualStyleBackColor = true;
            this.btnIWillCrash.Click += new System.EventHandler(this.btnIWillCrash_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(513, 225);
            this.Controls.Add(this.btnIWillCrash);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnIWillCrash;
    }
}

