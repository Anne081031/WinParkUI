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
	public partial class Window2
	{
		public Window2()
		{
			this.InitializeComponent();
			
			// 在此点之下插入创建对象所需的代码。
		}

        public string[] books = { "ASP.NET开发大全", "ASP开发指南", ".NET应用程序", "组件开发指南", "PHP新手入门", "C++学习" };
        private void TextBox_TextChanged(object sender, TextChangedEventArgs e)
        {
            if (!String.IsNullOrEmpty(search.Text))
            {
                result.Clear();
                for (int i = 0; i < books.Length; i++)
                {
                    if (books[i].Contains(search.Text))
                    {
                        result.Text += books[i].ToString() + "\n";
                    }
                }
            }
        }
	}
}