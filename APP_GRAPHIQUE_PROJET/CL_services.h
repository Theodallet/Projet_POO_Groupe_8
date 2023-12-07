#pragma once
//CL_service.h********************************************************************************
#pragma once
#include "CL_Map.h"
#include "CL_Cad.h"

namespace NS_Comp_Svc
{
	ref class CLservices_Client
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CL_Map_Client^ oMapp_Client;
	public:
		CLservices_Client(void);
		System::Data::DataSet^ selectionner_Client(System::String^);
		System::Data::DataSet^ selectionner_Client_Code_Postal(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Client_Date_N(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Client_Etage(System::String^, int);
		System::Data::DataSet^ selectionner_Client_Ind(System::String^, int);
		System::Data::DataSet^ selectionner_Client_Mail(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Client_Nom(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Client_Nom_Bat(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Client_Prenom(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Client_Rue(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Client_Ville(System::String^, System::String^);


		void ajouter_Client(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, int);
		void supprimer_Client(int);
		void modifier_Client(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, int);
	};

	ref class CLservices_Personel
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CL_Map_Personel^ oMapp_Personel;
	public:
		CLservices_Personel(void);
		System::Data::DataSet^ selectionner_Personel(System::String^);
		System::Data::DataSet^ selectionner_Personel_Code_Postal(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Personel_Date_E(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Personel_Date_N(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Personel_Etage(System::String^, int);
		System::Data::DataSet^ selectionner_Personel_Sup_Id(System::String^, int);
		System::Data::DataSet^ selectionner_Personel_Ind(System::String^, int);
		System::Data::DataSet^ selectionner_Personel_Mail(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Personel_Nom(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Personel_Nom_Bat(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Personel_Prenom(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Personel_Role(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Personel_Rue(System::String^, System::String^);
		System::Data::DataSet^ selectionner_Personel_Ville(System::String^, System::String^);

		void ajouter_Personel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^, System::String^, int);
		void supprimer_Personel(int);
		void modifier_Personel(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^, System::String^, int);
	};

	ref class CLservices_Article
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CL_Map_Article^ oMapp_Article;
	public:
		CLservices_Article(void);
		System::Data::DataSet^ selectionner_Article(System::String^);
		System::Data::DataSet^ selectionner_Article_Id(System::String^, int);

		void ajouter_Article(float, System::String^, System::String^, int, float);
		void supprimer_Article(int);
		void modifier_Article(int, float, System::String^, System::String^, int, float);
	};

	ref class CLservices_Commande
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CL_Map_Commande^ oMapp_Commande;
	public:
		CLservices_Commande(void);
		System::Data::DataSet^ selectionner_Commande(System::String^);
		System::Data::DataSet^ selectionner_Commande_Id(System::String^, int);

		void ajouter_Commande(System::String^, float, float, float, System::String^, int, int);
		void supprimer_Commande(int);
		void modifier_Commande(int, System::String^, System::String^, float, float, float, System::String^, int, int, int);
		void modifier_Total_Commande(int);

	};

	ref class CLservices_Contient
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CL_Map_Contient^ oMapp_Contient;
	public:
		CLservices_Contient(void);

		void ajouter_Contient(int, int, int);
		void supprimer_Contient(int, int);
		void modifier_Contient(int, int, int);

	};

	ref class CLservices_Stat
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CL_Map_Stat^ oMapp_Stat;
	public:
		CLservices_Stat(void);
		void Calcul_Panier_Moyen(void);
		void Calcul_Chiffre_Affaire_Mois(int);
		void Produit_Reaprovisionnement(void);
		void Total_Achat_Client(int);
		void Article_Plus_Vendu(void);
		void Article_Moins_Vendu(void);
		void Valeur_Commercial_Stock(void);
		void Valeur_Achat_Stock(void);

		void Variations_Valeurs_Commerciales(void);
		void Variations_Valeurs_Commerciales_Valeur(float, float, float, float);

	};
}