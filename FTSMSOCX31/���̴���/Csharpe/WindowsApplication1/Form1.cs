using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;

namespace WindowsApplication1
{
	/// <summary>
	/// Form1 的摘要说明。
	/// </summary>
	public class Form1 : System.Windows.Forms.Form
	{
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.Button button2;
		private System.Windows.Forms.TextBox textBox1;
		private System.Windows.Forms.Label label1;
		private AxSMSXControl.AxSMSX SMS1;
		private System.Windows.Forms.TextBox textBox2;
		private System.Windows.Forms.TextBox textBox3;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.Label label3;
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		private System.ComponentModel.Container components = null;

		public Form1()
		{
			//
			// Windows 窗体设计器支持所必需的
			//
			InitializeComponent();

			//
			// TODO: 在 InitializeComponent 调用后添加任何构造函数代码
			//
		}

		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if (components != null) 
				{
					components.Dispose();
				}
			}
			base.Dispose( disposing );
		}

		#region Windows 窗体设计器生成的代码
		/// <summary>
		/// 设计器支持所需的方法 - 不要使用代码编辑器修改
		/// 此方法的内容。
		/// </summary>
		private void InitializeComponent()
		{
			System.Resources.ResourceManager resources = new System.Resources.ResourceManager(typeof(Form1));
			this.SMS1 = new AxSMSXControl.AxSMSX();
			this.button1 = new System.Windows.Forms.Button();
			this.button2 = new System.Windows.Forms.Button();
			this.textBox1 = new System.Windows.Forms.TextBox();
			this.label1 = new System.Windows.Forms.Label();
			this.textBox2 = new System.Windows.Forms.TextBox();
			this.textBox3 = new System.Windows.Forms.TextBox();
			this.label2 = new System.Windows.Forms.Label();
			this.label3 = new System.Windows.Forms.Label();
			((System.ComponentModel.ISupportInitialize)(this.SMS1)).BeginInit();
			this.SuspendLayout();
			// 
			// SMS1
			// 
			this.SMS1.Enabled = true;
			this.SMS1.Location = new System.Drawing.Point(16, 16);
			this.SMS1.Name = "SMS1";
			this.SMS1.OcxState = ((System.Windows.Forms.AxHost.State)(resources.GetObject("SMS1.OcxState")));
			this.SMS1.TabIndex = 0;
			this.SMS1.Visible = false;
			this.SMS1.OnConnectResult += new AxSMSXControl.ISMSXEvents_OnConnectResultEventHandler(this.SMS1_OnConnectResult);
			this.SMS1.OnSendMsg += new AxSMSXControl.ISMSXEvents_OnSendMsgEventHandler(this.SMS1_OnSendMsg);
			this.SMS1.OnRecvMsg += new AxSMSXControl.ISMSXEvents_OnRecvMsgEventHandler(this.SMS1_OnRecvMsg);
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(120, 48);
			this.button1.Name = "button1";
			this.button1.TabIndex = 1;
			this.button1.Text = "Connect";
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// button2
			// 
			this.button2.Location = new System.Drawing.Point(216, 120);
			this.button2.Name = "button2";
			this.button2.TabIndex = 2;
			this.button2.Text = "SendMsg";
			this.button2.Click += new System.EventHandler(this.button2_Click);
			// 
			// textBox1
			// 
			this.textBox1.Location = new System.Drawing.Point(16, 48);
			this.textBox1.Name = "textBox1";
			this.textBox1.TabIndex = 3;
			this.textBox1.Text = "COM1";
			// 
			// label1
			// 
			this.label1.Location = new System.Drawing.Point(208, 51);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(120, 16);
			this.label1.TabIndex = 4;
			// 
			// textBox2
			// 
			this.textBox2.Location = new System.Drawing.Point(80, 88);
			this.textBox2.Name = "textBox2";
			this.textBox2.TabIndex = 5;
			this.textBox2.Text = "10011";
			// 
			// textBox3
			// 
			this.textBox3.Location = new System.Drawing.Point(16, 120);
			this.textBox3.Name = "textBox3";
			this.textBox3.Size = new System.Drawing.Size(192, 21);
			this.textBox3.TabIndex = 6;
			this.textBox3.Text = "您好，测试消息";
			// 
			// label2
			// 
			this.label2.Location = new System.Drawing.Point(16, 88);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(48, 23);
			this.label2.TabIndex = 7;
			this.label2.Text = "Phone";
			// 
			// label3
			// 
			this.label3.Location = new System.Drawing.Point(24, 152);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(272, 192);
			this.label3.TabIndex = 8;
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(6, 14);
			this.ClientSize = new System.Drawing.Size(320, 366);
			this.Controls.Add(this.label3);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.textBox3);
			this.Controls.Add(this.textBox2);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.textBox1);
			this.Controls.Add(this.button2);
			this.Controls.Add(this.button1);
			this.Controls.Add(this.SMS1);
			this.Name = "Form1";
			this.Text = "ZSTEL SMS ActiveX Sample";
			this.Load += new System.EventHandler(this.Form1_Load);
			((System.ComponentModel.ISupportInitialize)(this.SMS1)).EndInit();
			this.ResumeLayout(false);

		}
		#endregion

		/// <summary>
		/// 应用程序的主入口点。
		/// </summary>
		[STAThread]
		static void Main() 
		{
			Application.Run(new Form1());
		}

		private void button1_Click(object sender, System.EventArgs e)
		{
			SMS1.ConnectModem(textBox1.Text,1200,"123456789012345");  //注：实际使用时，应当填写正确的设备访问码
			label1.Text="正在连接设备..."; 
		}

		private void Form1_Load(object sender, System.EventArgs e)
		{
		    SMS1.Init();
		}

		private void SMS1_OnConnectResult(object sender, AxSMSXControl.ISMSXEvents_OnConnectResultEvent e)
		{
			if (e.status==0)  label1.Text="连接成功";
			else  label1.Text="连接失败";
		}

		private void button2_Click(object sender, System.EventArgs e)
		{
			SMS1.SendMsg(textBox2.Text,textBox3.Text,1); 
			label3.Text="正在发送....";
		}

		private void SMS1_OnSendMsg(object sender, AxSMSXControl.ISMSXEvents_OnSendMsgEvent e)
		{
			if (e.result==0) label3.Text="消息发送成功";
			else label3.Text="消息发送失败";
		}

		private void SMS1_OnRecvMsg(object sender, AxSMSXControl.ISMSXEvents_OnRecvMsgEvent e)
		{
		    string phoneNum,content;
			int year,month,day,hour,minute,second;

			SMS1.RecvMsg(out phoneNum,out content, out year,out month,out day,out hour,out minute,out second);
			label3.Text="收到消息:"+content;

		}
	}
}
