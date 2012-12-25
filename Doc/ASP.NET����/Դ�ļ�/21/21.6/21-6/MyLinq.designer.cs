﻿#pragma warning disable 1591
//------------------------------------------------------------------------------
// <auto-generated>
//     此代码由工具生成。
//     运行库版本:2.0.50727.1434
//
//     对此文件的更改可能会导致不正确的行为，并且如果
//     重新生成代码，这些更改将会丢失。
// </auto-generated>
//------------------------------------------------------------------------------

namespace _21_6
{
	using System.Data.Linq;
	using System.Data.Linq.Mapping;
	using System.Data;
	using System.Collections.Generic;
	using System.Reflection;
	using System.Linq;
	using System.Linq.Expressions;
	using System.ComponentModel;
	using System;
	
	
	[System.Data.Linq.Mapping.DatabaseAttribute(Name="student")]
	public partial class MyLinqDataContext : System.Data.Linq.DataContext
	{
		
		private static System.Data.Linq.Mapping.MappingSource mappingSource = new AttributeMappingSource();
		
    #region Extensibility Method Definitions
    partial void OnCreated();
    partial void InsertClass(Class instance);
    partial void UpdateClass(Class instance);
    partial void DeleteClass(Class instance);
    partial void InsertStudent(Student instance);
    partial void UpdateStudent(Student instance);
    partial void DeleteStudent(Student instance);
    #endregion
		
		public MyLinqDataContext() : 
				base(global::System.Configuration.ConfigurationManager.ConnectionStrings["studentConnectionString"].ConnectionString, mappingSource)
		{
			OnCreated();
		}
		
		public MyLinqDataContext(string connection) : 
				base(connection, mappingSource)
		{
			OnCreated();
		}
		
		public MyLinqDataContext(System.Data.IDbConnection connection) : 
				base(connection, mappingSource)
		{
			OnCreated();
		}
		
		public MyLinqDataContext(string connection, System.Data.Linq.Mapping.MappingSource mappingSource) : 
				base(connection, mappingSource)
		{
			OnCreated();
		}
		
		public MyLinqDataContext(System.Data.IDbConnection connection, System.Data.Linq.Mapping.MappingSource mappingSource) : 
				base(connection, mappingSource)
		{
			OnCreated();
		}
		
		public System.Data.Linq.Table<Class> Class
		{
			get
			{
				return this.GetTable<Class>();
			}
		}
		
		public System.Data.Linq.Table<Student> Student
		{
			get
			{
				return this.GetTable<Student>();
			}
		}
	}
	
	[Table(Name="dbo.Class")]
	public partial class Class : INotifyPropertyChanging, INotifyPropertyChanged
	{
		
		private static PropertyChangingEventArgs emptyChangingEventArgs = new PropertyChangingEventArgs(String.Empty);
		
		private int _C_ID;
		
		private string _C_GREAD;
		
		private string _C_INFOR;
		
    #region Extensibility Method Definitions
    partial void OnLoaded();
    partial void OnValidate(System.Data.Linq.ChangeAction action);
    partial void OnCreated();
    partial void OnC_IDChanging(int value);
    partial void OnC_IDChanged();
    partial void OnC_GREADChanging(string value);
    partial void OnC_GREADChanged();
    partial void OnC_INFORChanging(string value);
    partial void OnC_INFORChanged();
    #endregion
		
		public Class()
		{
			OnCreated();
		}
		
		[Column(Storage="_C_ID", AutoSync=AutoSync.OnInsert, DbType="Int NOT NULL IDENTITY", IsPrimaryKey=true, IsDbGenerated=true)]
		public int C_ID
		{
			get
			{
				return this._C_ID;
			}
			set
			{
				if ((this._C_ID != value))
				{
					this.OnC_IDChanging(value);
					this.SendPropertyChanging();
					this._C_ID = value;
					this.SendPropertyChanged("C_ID");
					this.OnC_IDChanged();
				}
			}
		}
		
		[Column(Storage="_C_GREAD", DbType="NVarChar(50)")]
		public string C_GREAD
		{
			get
			{
				return this._C_GREAD;
			}
			set
			{
				if ((this._C_GREAD != value))
				{
					this.OnC_GREADChanging(value);
					this.SendPropertyChanging();
					this._C_GREAD = value;
					this.SendPropertyChanged("C_GREAD");
					this.OnC_GREADChanged();
				}
			}
		}
		
		[Column(Storage="_C_INFOR", DbType="NVarChar(50)")]
		public string C_INFOR
		{
			get
			{
				return this._C_INFOR;
			}
			set
			{
				if ((this._C_INFOR != value))
				{
					this.OnC_INFORChanging(value);
					this.SendPropertyChanging();
					this._C_INFOR = value;
					this.SendPropertyChanged("C_INFOR");
					this.OnC_INFORChanged();
				}
			}
		}
		
		public event PropertyChangingEventHandler PropertyChanging;
		
		public event PropertyChangedEventHandler PropertyChanged;
		
		protected virtual void SendPropertyChanging()
		{
			if ((this.PropertyChanging != null))
			{
				this.PropertyChanging(this, emptyChangingEventArgs);
			}
		}
		
		protected virtual void SendPropertyChanged(String propertyName)
		{
			if ((this.PropertyChanged != null))
			{
				this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
			}
		}
	}
	
	[Table(Name="dbo.Student")]
	public partial class Student : INotifyPropertyChanging, INotifyPropertyChanged
	{
		
		private static PropertyChangingEventArgs emptyChangingEventArgs = new PropertyChangingEventArgs(String.Empty);
		
		private int _S_ID;
		
		private string _S_NAME;
		
		private string _S_CLASS;
		
		private System.Nullable<int> _C_ID;
		
    #region Extensibility Method Definitions
    partial void OnLoaded();
    partial void OnValidate(System.Data.Linq.ChangeAction action);
    partial void OnCreated();
    partial void OnS_IDChanging(int value);
    partial void OnS_IDChanged();
    partial void OnS_NAMEChanging(string value);
    partial void OnS_NAMEChanged();
    partial void OnS_CLASSChanging(string value);
    partial void OnS_CLASSChanged();
    partial void OnC_IDChanging(System.Nullable<int> value);
    partial void OnC_IDChanged();
    #endregion
		
		public Student()
		{
			OnCreated();
		}
		
		[Column(Storage="_S_ID", AutoSync=AutoSync.OnInsert, DbType="Int NOT NULL IDENTITY", IsPrimaryKey=true, IsDbGenerated=true)]
		public int S_ID
		{
			get
			{
				return this._S_ID;
			}
			set
			{
				if ((this._S_ID != value))
				{
					this.OnS_IDChanging(value);
					this.SendPropertyChanging();
					this._S_ID = value;
					this.SendPropertyChanged("S_ID");
					this.OnS_IDChanged();
				}
			}
		}
		
		[Column(Storage="_S_NAME", DbType="NVarChar(50)")]
		public string S_NAME
		{
			get
			{
				return this._S_NAME;
			}
			set
			{
				if ((this._S_NAME != value))
				{
					this.OnS_NAMEChanging(value);
					this.SendPropertyChanging();
					this._S_NAME = value;
					this.SendPropertyChanged("S_NAME");
					this.OnS_NAMEChanged();
				}
			}
		}
		
		[Column(Storage="_S_CLASS", DbType="NVarChar(50)")]
		public string S_CLASS
		{
			get
			{
				return this._S_CLASS;
			}
			set
			{
				if ((this._S_CLASS != value))
				{
					this.OnS_CLASSChanging(value);
					this.SendPropertyChanging();
					this._S_CLASS = value;
					this.SendPropertyChanged("S_CLASS");
					this.OnS_CLASSChanged();
				}
			}
		}
		
		[Column(Storage="_C_ID", DbType="Int")]
		public System.Nullable<int> C_ID
		{
			get
			{
				return this._C_ID;
			}
			set
			{
				if ((this._C_ID != value))
				{
					this.OnC_IDChanging(value);
					this.SendPropertyChanging();
					this._C_ID = value;
					this.SendPropertyChanged("C_ID");
					this.OnC_IDChanged();
				}
			}
		}
		
		public event PropertyChangingEventHandler PropertyChanging;
		
		public event PropertyChangedEventHandler PropertyChanged;
		
		protected virtual void SendPropertyChanging()
		{
			if ((this.PropertyChanging != null))
			{
				this.PropertyChanging(this, emptyChangingEventArgs);
			}
		}
		
		protected virtual void SendPropertyChanged(String propertyName)
		{
			if ((this.PropertyChanged != null))
			{
				this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
			}
		}
	}
}
#pragma warning restore 1591
