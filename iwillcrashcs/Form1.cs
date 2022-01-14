using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace iwillcrashcs
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnIWillCrash_Click(object sender, EventArgs e)
        {
            string s = null;
            MessageBox.Show(s.Length.ToString());
        }
    }
}
