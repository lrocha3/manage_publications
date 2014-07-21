#pragma once

using namespace Finisar::SQLite;
using namespace System;
using namespace System::Windows::Forms;

ref class DataBase
{
public:
	DataBase();
	void Open_DataBase();
	void Close_DataBase();
	void Create_DataBase();
	void Insert_DataBase(String^ Command);
	void Delete_DataBase(String^ Command);
	void Read_DataBase(String^ Command, TreeView^ a, int i, int n);  // treeview_publication --> nos pais e filhos
	void Read_DataBase(String^ Command, TreeView^ a);  // treeview_select  --> nos pais
	void Read_DataBase(String^ Command, TreeView^ a,int i); // treeview_select  --> nos filhos
	void Read_DataBase_year(String^ Command, TreeView^ a, int i, int n, int ano); // Ordem por ano descending
	void Read_DataBase_alphabetic(String^ Command, TreeView^ a, int n, int letra); // ordem alfabetica
	bool Verifica_ID_DataBase(String^ table, String^ ID);
	String^ Get_Path(String^ ID);
	void Write_in_File(String^ Command, String^ textfile_name);


private:
	SQLiteConnection^ sqlite_conn;
	SQLiteCommand^ sqlite_cmd;
	SQLiteDataReader^ sqlite_datareader;
};

