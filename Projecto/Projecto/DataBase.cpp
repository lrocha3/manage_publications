#include "DataBase.h"


DataBase::DataBase()
{
}


void DataBase::Open_DataBase(){


	// create a new database connection:
	sqlite_conn = gcnew SQLiteConnection("Data Source=DataBase.db;Version=3;New=False;Compress=True;");
	// open the connection:
	sqlite_conn->Open();
	sqlite_cmd = sqlite_conn->CreateCommand();




}

void DataBase::Create_DataBase(){


	String^ path = System::IO::Directory::GetCurrentDirectory();
	path = path + "\\DataBase.db";

	if (System::IO::File::Exists(path)) // Se já existe apenas abre a conecção
	{

		// create a new database connection:
		sqlite_conn = gcnew SQLiteConnection("Data Source=DataBase.db;Version=3;New=False;Compress=True;");
		// open the connection:
		sqlite_conn->Open();

	}
	else{

		// create a new database connection:
		sqlite_conn = gcnew SQLiteConnection("Data Source=DataBase.db;Version=3;New=True;Compress=True;");

		// open the connection:
		sqlite_conn->Open();



		// Cria uma string SQL para executar um comando:
		sqlite_cmd = sqlite_conn->CreateCommand();

		// Criar a Tabela Book

		// Guardamos o comando SQL na variavel sqlite_cmd:
		sqlite_cmd->CommandText = "CREATE TABLE book(id varchar(50) primary key, authors varchar(100), title varchar(50), edition varchar(50), publisher varchar(50), series varchar(50), year varchar(50), isbn varchar(50), path varchar(150), lastname varchar(50))";

		// Executamos o  lets execute the SQL ;D
		sqlite_cmd->ExecuteNonQuery();


		// Criar a Tabela Thesis

		// Guardamos o comando SQL na variavel sqlite_cmd:
		sqlite_cmd->CommandText = "CREATE TABLE thesis(id varchar(50) primary key, authors varchar(100), title varchar(50), type varchar(50), dep_fac varchar(50), country varchar(50), year varchar(50), path varchar(150), lastname varchar(50))";

		// Executamos o  lets execute the SQL ;D
		sqlite_cmd->ExecuteNonQuery();


		// PUBLICAÇÔES

		// Criar a Tabela Book Chapter

		// Guardamos o comando SQL na variavel sqlite_cmd:
		sqlite_cmd->CommandText = "CREATE TABLE book_chapter(id varchar(50) primary key, authors varchar(100), title varchar(50), book_title varchar(50), editor varchar(50), edition varchar(50), publisher varchar(50), series varchar(50), year varchar(50), isbn varchar(50), num_pages varchar(10), path varchar(150), lastname varchar(50))";


		// Executamos o  lets execute the SQL ;D
		sqlite_cmd->ExecuteNonQuery();


		// Criar a Tabela Journal

		// Guardamos o comando SQL na variavel sqlite_cmd:
		sqlite_cmd->CommandText = "CREATE TABLE journal(id varchar(50) primary key, authors varchar(100), title varchar(50), journal varchar(50), volume varchar(50), issue varchar(50), publisher varchar(50), issn varchar(50), year varchar(50), num_pages varchar(10), path varchar(150), lastname varchar(50))";


		// Executamos o  lets execute the SQL ;D
		sqlite_cmd->ExecuteNonQuery();



		// Criar a Tabela Conference

		// Guardamos o comando SQL na variavel sqlite_cmd:
		sqlite_cmd->CommandText = "CREATE TABLE conference(id varchar(50) primary key, authors varchar(100), title varchar(50), book_title varchar(50), city varchar(50), country varchar(50), date varchar(50), year varchar(50), num_pages varchar(10), path varchar(150), lastname varchar(50))";


		// Executamos o  lets execute the SQL ;D
		sqlite_cmd->ExecuteNonQuery();


		// Tabelas de SELEÇÂO

		// Criar a Tabela seletion

		// Guardamos o comando SQL na variavel sqlite_cmd:
		sqlite_cmd->CommandText = "CREATE TABLE selection(id varchar(50) primary key)";


		// Executamos o  lets execute the SQL ;D
		sqlite_cmd->ExecuteNonQuery();


		// Criar a Tabela seletion_publications

		// Guardamos o comando SQL na variavel sqlite_cmd:
		sqlite_cmd->CommandText = "CREATE TABLE selection_publications(id varchar(50) primary key, reference varchar(150), id_father varchar(50), path varchar(150))";


		// Executamos o  lets execute the SQL ;D
		sqlite_cmd->ExecuteNonQuery();








	}




}


void DataBase::Insert_DataBase(String^ Command){

	sqlite_cmd->CommandText = Command;
	sqlite_cmd->ExecuteNonQuery();



}

void DataBase::Delete_DataBase(String^ Command){

	sqlite_cmd->CommandText = Command;
	sqlite_cmd->ExecuteNonQuery();



}

void DataBase::Read_DataBase(String^ Command, TreeView^ a, int i, int n){  // i = valor do no do treeview; n = valor de colunas da tabela a ser lida - by type




	// Uso no treeview_publication

	String^ dados = "";
	String^ id = "";

	// Comando em SQL:
	sqlite_cmd->CommandText = Command;

	// Na variavel sqlite_datareader temos a reposta ao query:
	sqlite_datareader = sqlite_cmd->ExecuteReader(); // aqui

	a->Nodes[i]->Nodes->Clear();

	// The SQLiteDataReader allows us to run through the result lines:
	while (sqlite_datareader->Read()) // Read() returns true if there is still a result line to read
	{

		id = sqlite_datareader->GetString(0);

		for (int cnt = 0; cnt < n - 1; cnt++)
			dados += sqlite_datareader->GetString(cnt) + ", ";

		dados += sqlite_datareader->GetString(n - 1);

		a->Nodes[i]->Nodes->Add(id, dados);
		dados = "";
	}




}


void DataBase::Read_DataBase(String^ Command, TreeView^ a, int i){  // treeview select filhos --> i é o indice do pai principal



	String^ path = "";
	String^ reference = "";

	// Comando em SQL:
	sqlite_cmd->CommandText = Command;

	// Na variavel sqlite_datareader temos a reposta ao query:
	sqlite_datareader = sqlite_cmd->ExecuteReader();



	// The SQLiteDataReader allows us to run through the result lines:
	while (sqlite_datareader->Read()) // Read() returns true if there is still a result line to read
	{

		reference = sqlite_datareader->GetString(1);

		path += sqlite_datareader->GetString(3);

		a->Nodes[i]->Nodes->Add(path, reference);

		path = "";
	}





}





void DataBase::Read_DataBase(String^ Command, TreeView^ a){   // treevie_select pais :D



	// Uso no treeview_selection

	String^ dados = "";
	String^ id = "";

	// Comando em SQL:
	sqlite_cmd->CommandText = Command;

	// Na variavel sqlite_datareader temos a reposta ao query:
	sqlite_datareader = sqlite_cmd->ExecuteReader(); // aqui

	a->Nodes->Clear();

	int i = 0;

	// The SQLiteDataReader allows us to run through the result lines:
	while (sqlite_datareader->Read()) // Read() returns true if there is still a result line to read
	{

		id = sqlite_datareader->GetString(0);


		a->Nodes->Add("pai", id);
	
		dados = "";
	}




}



void DataBase::Close_DataBase(){

	// open the connection:
	sqlite_conn->Close();

}


bool DataBase::Verifica_ID_DataBase(String^ table, String^ ID){

	String^ dados;

	String^ Command = "SELECT * from " + table + " WHERE id='" + ID + "'";

	// Comando em SQL:
	sqlite_cmd->CommandText = Command;

	// Na variavel sqlite_datareader temos a reposta ao query:
	sqlite_datareader = sqlite_cmd->ExecuteReader(); // aqui



	// The SQLiteDataReader allows us to run through the result lines:
	while (sqlite_datareader->Read()) // Read() returns true if there is still a result line to read
	{
		dados = sqlite_datareader->GetString(0);

		if (dados->Equals(ID)){
			return true;
		}


	}

	return false;  // não existe



}



String^ DataBase::Get_Path(String^ ID){



	String^ dados;


	// BOOK

	String^ Command = "SELECT * from book WHERE id='" + ID + "'";

	// Comando em SQL:
	sqlite_cmd->CommandText = Command;

	// Na variavel sqlite_datareader temos a reposta ao query:
	sqlite_datareader = sqlite_cmd->ExecuteReader(); // aqui



	// The SQLiteDataReader allows us to run through the result lines:
	while (sqlite_datareader->Read()) // Read() returns true if there is still a result line to read
	{
		dados = sqlite_datareader->GetString(0);

		if (dados->Equals(ID)){
			return sqlite_datareader->GetString(8);
		}


	}

	// THESIS

	this->Close_DataBase();
	this->Open_DataBase();

	Command = "SELECT * from thesis WHERE id='" + ID + "'";

	// Comando em SQL:
	sqlite_cmd->CommandText = Command;

	// Na variavel sqlite_datareader temos a reposta ao query:
	sqlite_datareader = sqlite_cmd->ExecuteReader(); // aqui



	// The SQLiteDataReader allows us to run through the result lines:
	while (sqlite_datareader->Read()) // Read() returns true if there is still a result line to read
	{
		dados = sqlite_datareader->GetString(0);

		if (dados->Equals(ID)){
			return sqlite_datareader->GetString(7);
		}


	}




	// BOOK CHAPTER

	this->Close_DataBase();
	this->Open_DataBase();

	Command = "SELECT * from book_chapter WHERE id='" + ID + "'";

	// Comando em SQL:
	sqlite_cmd->CommandText = Command;

	// Na variavel sqlite_datareader temos a reposta ao query:
	sqlite_datareader = sqlite_cmd->ExecuteReader(); // aqui



	// The SQLiteDataReader allows us to run through the result lines:
	while (sqlite_datareader->Read()) // Read() returns true if there is still a result line to read
	{
		dados = sqlite_datareader->GetString(0);

		if (dados->Equals(ID)){
			return sqlite_datareader->GetString(11);
		}


	}






	// JOURNAL

	this->Close_DataBase();
	this->Open_DataBase();

	Command = "SELECT * from journal WHERE id='" + ID + "'";

	// Comando em SQL:
	sqlite_cmd->CommandText = Command;

	// Na variavel sqlite_datareader temos a reposta ao query:
	sqlite_datareader = sqlite_cmd->ExecuteReader(); // aqui



	// The SQLiteDataReader allows us to run through the result lines:
	while (sqlite_datareader->Read()) // Read() returns true if there is still a result line to read
	{
		dados = sqlite_datareader->GetString(0);

		if (dados->Equals(ID)){
			return sqlite_datareader->GetString(10);
		}


	}




	// CONFERENCE

	this->Close_DataBase();
	this->Open_DataBase();

	Command = "SELECT * from conference WHERE id='" + ID + "'";

	// Comando em SQL:
	sqlite_cmd->CommandText = Command;

	// Na variavel sqlite_datareader temos a reposta ao query:
	sqlite_datareader = sqlite_cmd->ExecuteReader(); // aqui



	// The SQLiteDataReader allows us to run through the result lines:
	while (sqlite_datareader->Read()) // Read() returns true if there is still a result line to read
	{
		dados = sqlite_datareader->GetString(0);

		if (dados->Equals(ID)){
			return sqlite_datareader->GetString(9);
		}


	}




	
	


	return("ERRO!");


}





void DataBase::Read_DataBase_alphabetic(String^ Command, TreeView^ a, int n, int letra){  // i = valor do no do treeview; n = valor de colunas da tabela a ser lida - by alphabetic order




	// Uso no treeview_publication

	String^ dados = "";
	String^ id = "";


	String^ letra_pai = "";

	// Comando em SQL:
	sqlite_cmd->CommandText = Command;

	// Na variavel sqlite_datareader temos a reposta ao query:
	sqlite_datareader = sqlite_cmd->ExecuteReader();



	// The SQLiteDataReader allows us to run through the result lines:
	while (sqlite_datareader->Read()) // Read() returns true if there is still a result line to read
	{

		id = sqlite_datareader->GetString(0);

		for (int cnt = 0; cnt < n - 1; cnt++)
			dados += sqlite_datareader->GetString(cnt) + ", ";

		dados += sqlite_datareader->GetString(n - 1);

		int lenght = a->GetNodeCount(false);


		

		if (lenght == 0){


			letra_pai = sqlite_datareader->GetString(letra);

			letra_pai = letra_pai->Substring(0, 1);



			a->Nodes->Add("pai", letra_pai);

			a->Nodes[0]->Nodes->Add(id, dados);

		}
		else
		{
			bool inseriu = false;

			for (int i = 0; i < lenght; i++){

				if (a->Nodes[i]->Text == sqlite_datareader->GetString(letra)->Substring(0, 1)){

					a->Nodes[i]->Nodes->Add(id, dados);
					inseriu = true;
				}


			}

			if (inseriu == false){


				letra_pai = sqlite_datareader->GetString(letra);
				if (letra_pai != ""){
				letra_pai = letra_pai->Substring(0, 1);



				a->Nodes->Add("pai", letra_pai);


				a->Nodes[lenght]->Nodes->Add(id, dados);
				}
			}



		}




		dados = "";




	}




}







void DataBase::Read_DataBase_year(String^ Command, TreeView^ a, int i, int n, int ano){  // i = valor do no do treeview; n = valor de colunas da tabela a ser lida - by year




	// Uso no treeview_publication

	String^ dados = "";
	String^ id = "";

	// Comando em SQL:
	sqlite_cmd->CommandText = Command;

	// Na variavel sqlite_datareader temos a reposta ao query:
	sqlite_datareader = sqlite_cmd->ExecuteReader(); // aqui



	// The SQLiteDataReader allows us to run through the result lines:
	while (sqlite_datareader->Read()) // Read() returns true if there is still a result line to read
	{

		id = sqlite_datareader->GetString(0);

		for (int cnt = 0; cnt < n - 1; cnt++)
			dados += sqlite_datareader->GetString(cnt) + ", ";

		dados += sqlite_datareader->GetString(n - 1);

		int lenght = a->GetNodeCount(false);

		if (lenght == 0){

			a->Nodes->Add("pai", sqlite_datareader->GetString(ano));

			a->Nodes[0]->Nodes->Add(id, dados);

		}
		else
		{
			bool inseriu = false;

			for (int i = 0; i < lenght; i++){

				if (a->Nodes[i]->Text == sqlite_datareader->GetString(ano)){

					a->Nodes[i]->Nodes->Add(id, dados);
					inseriu = true;
				}


			}

			if (inseriu == false){

				a->Nodes->Add("pai", sqlite_datareader->GetString(ano));
				a->Nodes[lenght]->Nodes->Add(id, dados);

			}



		}




		dados = "";




	}




}







void DataBase::Write_in_File(String^ Command, String^ textfile_name){  // treeview select filhos and write to a file




	

	// Comando em SQL:
	sqlite_cmd->CommandText = Command;

	// Na variavel sqlite_datareader temos a reposta ao query:
	sqlite_datareader = sqlite_cmd->ExecuteReader();

	String^ path = Environment::CurrentDirectory + "\\Selections\\" + textfile_name + ".txt";
	System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(path); // Abre para escrita
	
	

	// The SQLiteDataReader allows us to run through the result lines:
	while (sqlite_datareader->Read()) // Read() returns true if there is still a result line to read
	{

		
		writer->WriteLine(sqlite_datareader->GetString(1)); // Write the string

		
	}


	writer->Close(); // Close the file



}