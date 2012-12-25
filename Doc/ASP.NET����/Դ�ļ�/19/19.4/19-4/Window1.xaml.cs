using System;
using System.IO;
using System.Net;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Navigation;

namespace _19_4
{
	public partial class Window1
	{
		public Window1()
		{
			this.InitializeComponent();
			
			// 在此点之下插入创建对象所需的代码。
		}

        private void button_Click_1(object sender, RoutedEventArgs e)
        {
            if ((textBox.Text == "admin") && (passwordBox.Password == "admin"))
            {
                Window2 w2 = new Window2();
                w2.ShowDialog();
            }
        }
	}
}