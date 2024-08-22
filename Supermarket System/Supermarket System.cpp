#include <iostream>
#include <vector>
using namespace std;

//------------ Public Variables ----------//
int invoice = 0;
vector<string>invoice_products_meat;
vector<int>invoice_price_meat;

vector<string>invoice_products_sweat;
vector<int>invoice_price_sweat;

vector<string>invoice_products_legumes;
vector<int>invoice_price_legumes;

vector<string>invoice_products_caffeine;
vector<int>invoice_price_caffeine;

vector<string>invoice_products_fruits_vegetables;
vector<int>invoice_price_fruits_vegetables;
//----------------------------------------//

//------------ hint to compiler-----------//
void after_choose_meat();
void related_to_meat();
void buy_product_from_meat();

void after_choose_sweat();
void related_to_sweat();
void buy_product_from_sweat();

void after_choose_Legumes();
void related_to_legumes();
void buy_product_from_legumes();

void after_choose_caffeine();
void related_to_caffeine();
void buy_product_from_caffeine();

void after_choose_fruits_vegetables();
void related_to_fruits_vegetables();
void buy_product_from_fruits_vegetables();

void total_invoice();
void work_function();
void start_function();
//----------------------------------------//


//----- Everything related to the meat department -----//
class Meat_section
{
private:
	string products[3] = { "red meat","Chickens","kofta" };
	double prices[3] = { 400,200,150 };
	int price_meat_section;
public:
	void show_menu()
	{
		cout << "----------------------- Menu --------------------------\n";
		cout << "Product\t\t\t\t\t  Price\n";
		for (size_t i = 0; i < 3; i++)
		{
			cout << " " << i + 1 << "- " << products[i] << "\t\t\t\t(" << prices[i] << ") LE\n";
		}
		cout << "-------------------------------------------------------\n";
	}
	
	int invoice_increase(int choise)
	{
		return (invoice += prices[choise - 1]);
	}

	void add_price(int choise)
	{
		price_meat_section += prices[choise - 1];
	}

	int price()
	{
		return price_meat_section;
	}

	void get_invoice_products_meat(int choise)
	{
		invoice_products_meat.push_back(products[choise - 1]);
	}
	void get_invoice_price_meat(int choise)
	{
		invoice_price_meat.push_back(prices[choise - 1]);
	}
};
Meat_section meat_object;
void after_choose_meat()
{
	cout << "Choose What You Want\n";
	cout << " 1- Show Menu\n" << " 2- Return to the list of sections\n";
	cout << "-------------------------------------------------------\n";
	int choose_in_sections;	cin >> choose_in_sections;
	switch (choose_in_sections)
	{
	case 1:
		meat_object.show_menu();
		related_to_meat();
		break;
	case 2:
		work_function();
		break;
	}
}
void related_to_meat()
{
	int choose;
	do
	{
		cout << "Choose What You Want\n";
		cout << " 1- Buy a product\n 2- Show the invoice\n 3- Return to the list of sections\n";
		cout << "-------------------------------------------------------\n";
		cin >> choose;
		cout << "-------------------------------------------------------\n";

		switch (choose)
		{
		case 1:
			buy_product_from_meat();
			break;
		case 2:
			cout << "Your purchases from the Meat Section\n";
			for (size_t i = 0; i < invoice_products_meat.size(); i++)
			{
				cout << i + 1 << "- " << invoice_products_meat[i] << "\t(" << invoice_price_meat[i] << ") LE\n";
			}
			cout << "Total Price From Meat Section = " << meat_object.price() << " LE\n";
			cout << "-------------------------------------------------------\n";
			break;
		case 3:
			work_function();
			break;
		}
	} while (choose != 3);

}
void buy_product_from_meat()
{
	cout << "Enter The Quantity You Want\n";
	int Quantity;	cin >> Quantity;
	cout << "-------------------------------------------------------\n";
	for (int i = 0; i < Quantity; i++)
	{
		cout << "Choose The Number Of Product From The Menu \n";
		int choise;		cin >> choise;
		cout << "-------------------------------------------------------\n";
		meat_object.invoice_increase(choise);
		meat_object.get_invoice_products_meat(choise);
		meat_object.get_invoice_price_meat(choise);
		meat_object.add_price(choise);
	}
	cout << "Order Is Done\n";
	cout << "-------------------------------------------------------\n";
}
//----------------------------------------------------//


//----- Everything related to the sweat department -----//
class Sweets_section
{
private:
	string products[3] = { "Chocolate","Ice cream","Chips"};
	double prices[3] = { 20,12,10 };
	int price_sweat_section;
public:
	void show_menu()
	{
		cout << "----------------------- Menu --------------------------\n";
		cout << "Product\t\t\t\t\t  Price\n";
		for (size_t i = 0; i < 3; i++)
		{
			cout << " " << i + 1 << "- " << products[i] << "\t\t\t\t(" << prices[i] << ") LE\n";
		}
		cout << "-------------------------------------------------------\n";
	}

	int invoice_increase(int choise)
	{
		return (invoice += prices[choise - 1]);
	}

	void add_price(int choise)
	{
		price_sweat_section += prices[choise - 1];
	}

	int price()
	{
		return price_sweat_section;
	}

	void get_invoice_products_sweat(int choise)
	{
		invoice_products_sweat.push_back(products[choise - 1]);
	}
	void get_invoice_price_sweat(int choise)
	{
		invoice_price_sweat.push_back(prices[choise - 1]);
	}
};
Sweets_section sweat_object;
void after_choose_sweat()
{
	cout << "Choose What You Want\n";
	cout << " 1- Show Menu\n" << " 2- Return to the list of sections\n";
	cout << "-------------------------------------------------------\n";
	int choose_in_sections;	cin >> choose_in_sections;
	switch (choose_in_sections)
	{
	case 1:
		sweat_object.show_menu();
		related_to_sweat();
		break;
	case 2:
		work_function();
		break;
	}
}
void related_to_sweat()
{
	int choose;
	do
	{
		cout << "Choose What You Want\n";
		cout << " 1- Buy a product\n 2- Show the invoice\n 3- Return to the list of sections\n";
		cout << "-------------------------------------------------------\n";
		cin >> choose;
		cout << "-------------------------------------------------------\n";

		switch (choose)
		{
		case 1:
			buy_product_from_sweat();
			break;
		case 2:
			cout << "Your purchases from the Sweat Section\n";
			for (size_t i = 0; i < invoice_products_sweat.size(); i++)
			{
				cout << i + 1 << "- " << invoice_products_sweat[i] << "\t(" << invoice_price_sweat[i] << ") LE\n";
			}
			cout << "Total Price From Sweats Section = " << sweat_object.price() << " LE\n";
			cout << "-------------------------------------------------------\n";
			break;
		case 3:
			work_function();
			break;
		}
	} while (choose != 3);

}
void buy_product_from_sweat()
{
	cout << "Enter The Quantity You Want\n";
	int Quantity;	cin >> Quantity;
	cout << "-------------------------------------------------------\n";
	for (int i = 0; i < Quantity; i++)
	{
		cout << "Choose The Number Of Product From The Menu \n";
		int choise;		cin >> choise;
		cout << "-------------------------------------------------------\n";
		sweat_object.invoice_increase(choise);
		sweat_object.get_invoice_products_sweat(choise);
		sweat_object.get_invoice_price_sweat(choise);
		sweat_object.add_price(choise);
	}
	cout << "Order Is Done\n";
	cout << "-------------------------------------------------------\n";
}
//----------------------------------------------------//


//----- Everything related to the Legumes department -----//
class Legumes_section
{
private:
	string products[3] = { "Pasta","beans","Rice  " };
	double prices[3] = { 35,15,25 };
	int price_legumes_section;
public:
	void show_menu()
	{
		cout << "----------------------- Menu --------------------------\n";
		cout << "Product\t\t\t\t\t  Price\n";
		for (size_t i = 0; i < 3; i++)
		{
			cout << " " << i + 1 << "- " << products[i] << "\t\t\t\t(" << prices[i] << ") LE\n";
		}
		cout << "-------------------------------------------------------\n";
	}

	int invoice_increase(int choise)
	{
		return (invoice += prices[choise - 1]);
	}

	void add_price(int choise)
	{
		price_legumes_section += prices[choise - 1];
	}

	int price()
	{
		return price_legumes_section;
	}

	void get_invoice_products_legumes(int choise)
	{
		invoice_products_legumes.push_back(products[choise - 1]);
	}
	void get_invoice_price_legumes(int choise)
	{
		invoice_price_legumes.push_back(prices[choise - 1]);
	}
};
Legumes_section legumes_object;
void after_choose_Legumes()
{
	cout << "Choose What You Want\n";
	cout << " 1- Show Menu\n" << " 2- Return to the list of sections\n";
	cout << "-------------------------------------------------------\n";
	int choose_in_sections;	cin >> choose_in_sections;
	switch (choose_in_sections)
	{
	case 1:
		legumes_object.show_menu();
		related_to_legumes();
		break;
	case 2:
		work_function();
		break;
	}
}
void related_to_legumes()
{
	int choose;
	do
	{
		cout << "Choose What You Want\n";
		cout << " 1- Buy a product\n 2- Show the invoice\n 3- Return to the list of sections\n";
		cout << "-------------------------------------------------------\n";
		cin >> choose;
		cout << "-------------------------------------------------------\n";

		switch (choose)
		{
		case 1:
			buy_product_from_legumes();
			break;
		case 2:
			cout << "Your purchases from the Legumes Section\n";
			for (size_t i = 0; i < invoice_products_legumes.size(); i++)
			{
				cout << i + 1 << "- " << invoice_products_legumes[i] << "\t(" << invoice_price_legumes[i] << ") LE\n";
			}
			cout << "Total Price From Legumes Section = " << legumes_object.price() << " LE\n";
			cout << "-------------------------------------------------------\n";
			break;
		case 3:
			work_function();
			break;
		}
	} while (choose != 3);

}
void buy_product_from_legumes()
{
	cout << "Enter The Quantity You Want\n";
	int Quantity;	cin >> Quantity;
	cout << "-------------------------------------------------------\n";
	for (int i = 0; i < Quantity; i++)
	{
		cout << "Choose The Number Of Product From The Menu \n";
		int choise;		cin >> choise;
		cout << "-------------------------------------------------------\n";
		legumes_object.invoice_increase(choise);
		legumes_object.get_invoice_products_legumes(choise);
		legumes_object.get_invoice_price_legumes(choise);
		legumes_object.add_price(choise);
	}
	cout << "Order Is Done\n";
	cout << "-------------------------------------------------------\n";
}
//----------------------------------------------------//



//----- Everything related to the caffeine department -----//
class caffeine_section
{
private:
	string products[3] = { "Tea  ", "Coffee","Cocoa" };
	double prices[3] = { 12,15,20 };
	int price_caffeine_section;
public:
	void show_menu()
	{
		cout << "----------------------- Menu --------------------------\n";
		cout << "Product\t\t\t\t\t  Price\n";
		for (size_t i = 0; i < 3; i++)
		{
			cout << " " << i + 1 << "- " << products[i] << "\t\t\t\t(" << prices[i] << ") LE\n";
		}
		cout << "-------------------------------------------------------\n";
	}

	int invoice_increase(int choise)
	{
		return (invoice += prices[choise - 1]);
	}

	void add_price(int choise)
	{
		price_caffeine_section += prices[choise - 1];
	}

	int price()
	{
		return price_caffeine_section;
	}

	void get_invoice_products_caffeine(int choise)
	{
		invoice_products_caffeine.push_back(products[choise - 1]);
	}
	void get_invoice_price_caffeine(int choise)
	{
		invoice_price_caffeine.push_back(prices[choise - 1]);
	}
};
caffeine_section caffeine_object;
void after_choose_caffeine()
{
	cout << "Choose What You Want\n";
	cout << " 1- Show Menu\n" << " 2- Return to the list of sections\n";
	cout << "-------------------------------------------------------\n";
	int choose_in_sections;	cin >> choose_in_sections;
	switch (choose_in_sections)
	{
	case 1:
		caffeine_object.show_menu();
		related_to_caffeine();
		break;
	case 2:
		work_function();
		break;
	}
}
void related_to_caffeine()
{
	int choose;
	do
	{
		cout << "Choose What You Want\n";
		cout << " 1- Buy a product\n 2- Show the invoice\n 3- Return to the list of sections\n";
		cout << "-------------------------------------------------------\n";
		cin >> choose;
		cout << "-------------------------------------------------------\n";

		switch (choose)
		{
		case 1:
			buy_product_from_caffeine();
			break;
		case 2:
			cout << "Your purchases from the Coffee Section\n";
			for (size_t i = 0; i < invoice_products_caffeine.size(); i++)
			{
				cout << i + 1 << "- " << invoice_products_caffeine[i] << "\t(" << invoice_price_caffeine[i] << ") LE\n";
			}
			cout << "Total Price From Caffeine Section = " << caffeine_object.price() << " LE\n";
			cout << "-------------------------------------------------------\n";
			break;
		case 3:
			work_function();
			break;
		}
	} while (choose != 3);

}
void buy_product_from_caffeine()
{
	cout << "Enter The Quantity You Want\n";
	int Quantity;	cin >> Quantity;
	cout << "-------------------------------------------------------\n";
	for (int i = 0; i < Quantity; i++)
	{
		cout << "Choose The Number Of Product From The Menu \n";
		int choise;		cin >> choise;
		cout << "-------------------------------------------------------\n";
		caffeine_object.invoice_increase(choise);
		caffeine_object.get_invoice_products_caffeine(choise);
		caffeine_object.get_invoice_price_caffeine(choise);
		caffeine_object.add_price(choise);
	}
	cout << "Order Is Done\n";
	cout << "-------------------------------------------------------\n";
}
//----------------------------------------------------//



//----- Everything related to the Fruits_vegetables department -----//
class Fruits_vegetables_section
{
private:
	string products[4] = { "Mango", "Apples","Carrots","Tomatoes" };
	double prices[4] = { 18,13,10,14 };
	int price_Fruits_vegetables_section;
public:
	void show_menu()
	{
		cout << "----------------------- Menu --------------------------\n";
		cout << "Product\t\t\t\t\t  Price\n";
		for (size_t i = 0; i < 4; i++)
		{
			cout << " " << i + 1 << "- " << products[i] << "\t\t\t\t(" << prices[i] << ") LE\n";
		}
		cout << "-------------------------------------------------------\n";
	}

	int invoice_increase(int choise)
	{
		return (invoice += prices[choise - 1]);
	}

	void add_price(int choise)
	{
		price_Fruits_vegetables_section += prices[choise - 1];
	}

	int price()
	{
		return price_Fruits_vegetables_section;
	}

	void get_invoice_products_fruits_vegetables(int choise)
	{
		invoice_products_fruits_vegetables.push_back(products[choise - 1]);
	}
	void get_invoice_price_fruits_vegetables(int choise)
	{
		invoice_price_fruits_vegetables.push_back(prices[choise - 1]);
	}
};
Fruits_vegetables_section Fruits_vegetables_object;
void after_choose_fruits_vegetables()
{
	cout << "Choose What You Want\n";
	cout << " 1- Show Menu\n" << " 2- Return to the list of sections\n";
	cout << "-------------------------------------------------------\n";
	int choose_in_sections;	cin >> choose_in_sections;
	switch (choose_in_sections)
	{
	case 1:
		Fruits_vegetables_object.show_menu();
		related_to_fruits_vegetables();
		break;
	case 2:
		work_function();
		break;
	}
}
void related_to_fruits_vegetables()
{
	int choose;
	do
	{
		cout << "Choose What You Want\n";
		cout << " 1- Buy a product\n 2- Show the invoice\n 3- Return to the list of sections\n";
		cout << "-------------------------------------------------------\n";
		cin >> choose;
		cout << "-------------------------------------------------------\n";

		switch (choose)
		{
		case 1:
			buy_product_from_fruits_vegetables();
			break;
		case 2:
			cout << "Your purchases from the Fruits_vegetables Section\n";
			for (size_t i = 0; i < invoice_products_fruits_vegetables.size(); i++)
			{
				cout << i + 1 << "- " << invoice_products_fruits_vegetables[i] << "\t(" << invoice_price_fruits_vegetables[i] << ") LE\n";
			}
			cout << "Total Price From Caffeine Section = " << Fruits_vegetables_object.price() << " LE\n";
			cout << "-------------------------------------------------------\n";
			break;
		case 3:
			work_function();
			break;
		}
	} while (choose != 3);

}
void buy_product_from_fruits_vegetables()
{
	cout << "Enter The Quantity You Want\n";
	int Quantity;	cin >> Quantity;
	cout << "-------------------------------------------------------\n";
	for (int i = 0; i < Quantity; i++)
	{
		cout << "Choose The Number Of Product From The Menu \n";
		int choise;		cin >> choise;
		cout << "-------------------------------------------------------\n";
		Fruits_vegetables_object.invoice_increase(choise);
		Fruits_vegetables_object.get_invoice_products_fruits_vegetables(choise);
		Fruits_vegetables_object.get_invoice_price_fruits_vegetables(choise);
		Fruits_vegetables_object.add_price(choise);
	}
	cout << "Order Is Done\n";
	cout << "-------------------------------------------------------\n";
}
//----------------------------------------------------//



//------------ Work Functions ------------//
void start_function()
{
	int choose;
	cout << "-------------SuperMarket System Management-------------\n";
	do
	{
		cout << "Choose What You Want\n";
		cout << " 1- Run the program\n 2- Show Total invoice\n 3- Exit the program\n";
		cout << "-------------------------------------------------------\n";
		cin >> choose;
		switch (choose)	
		{
		case 1:
			work_function();
			break;
		case 2:
			total_invoice();
			break;
		case 3:
			cout << "Thank you for using the program,Visit us again,Good Bye\n";
			cout << "-------------------------------------------------------\n";
			break;
		}
	} while (choose != 3);
}
void work_function()
{
	cout << "Choose the section you want\n"
		 << " 1- Meat section\n" << " 2- Sweets section\n"
		 << " 3- Legumes section\n" << " 4- Coffee and caffeine section\n"
		 << " 5- Fruits and vegetables section\n 6- Return to the Main Page\n";
	cout << "-------------------------------------------------------\n";
	int choose_section;	cin >> choose_section;
	cout << "-------------------------------------------------------\n";

	switch (choose_section)
	{
	case 1:
		after_choose_meat();
		break;
	case 2:
		after_choose_sweat();
		break;
	case 3:
		after_choose_Legumes();
		break;
	case 4:
		after_choose_caffeine();
		break;
	case 5:
		after_choose_fruits_vegetables();
		break;
	case 6:
		break;
	}

}
void total_invoice()
{
	cout << "------------------- Meat Section ----------------------\n\n";
	if (invoice_products_meat.size() == 0)
		cout << "You did not purchase anything from this section\n\n";
	else
	{
		cout << "Your purchases from the Meat Section\n";
		for (size_t i = 0; i < invoice_products_meat.size(); i++)
		{
			cout << i + 1 << "- " << invoice_products_meat[i] << "\t(" << invoice_price_meat[i] << ") LE\n";
		}
		cout << "Total Price From Meat Section = " << meat_object.price() << " LE\n\n";
	}


	cout << "------------------- Sweat Section ---------------------\n\n";
	if (invoice_products_sweat.size() == 0)
		cout << "You did not purchase anything from this section\n\n";
	else
	{
		cout << "Your purchases from the Sweat Section\n";
		for (size_t i = 0; i < invoice_products_sweat.size(); i++)
		{
			cout << i + 1 << "- " << invoice_products_sweat[i] << "\t(" << invoice_price_sweat[i] << ") LE\n";
		}
		cout << "Total Price From Sweats Section = " << sweat_object.price() << " LE\n\n";
	}


	cout << "------------------ Legumes Section --------------------\n\n";
	if (invoice_products_legumes.size() == 0)
		cout << "You did not purchase anything from this section\n\n";
	else
	{
		cout << "Your purchases from the Legumes Section\n";
		for (size_t i = 0; i < invoice_products_legumes.size(); i++)
		{
			cout << i + 1 << "- " << invoice_products_legumes[i] << "\t(" << invoice_price_legumes[i] << ") LE\n";
		}
		cout << "Total Price From Legumes Section = " << legumes_object.price() << " LE\n\n";
	}


	cout << "------------------ Caffeine Section --------------------\n\n";
	if (invoice_products_caffeine.size() == 0)
		cout << "You did not purchase anything from this section\n\n";
	else
	{
		cout << "Your purchases from the Coffee Section\n";
		for (size_t i = 0; i < invoice_products_caffeine.size(); i++)
		{
			cout << i + 1 << "- " << invoice_products_caffeine[i] << "\t(" << invoice_price_caffeine[i] << ") LE\n";
		}
		cout << "Total Price From Caffeine Section = " << caffeine_object.price() << " LE\n\n";
	}
	

	cout << "-------------- Fruits_Vegetables Section ---------------\n\n";
	if (invoice_products_fruits_vegetables.size() == 0)
		cout << "You did not purchase anything from this section\n\n";
	else
	{
		cout << "Your purchases from the Fruits_vegetables Section\n";
		for (size_t i = 0; i < invoice_products_fruits_vegetables.size(); i++)
		{
			cout << i + 1 << "- " << invoice_products_fruits_vegetables[i] << "\t(" << invoice_price_fruits_vegetables[i] << ") LE\n";
		}
		cout << "Total Price From Fruits_Vegetables Section = " << Fruits_vegetables_object.price() << " LE\n\n";
	}

	cout << "-------------------- Total Price ----------------------\n\n";
	cout << "So Total Price = " << meat_object.price() << " + " << sweat_object.price() << " + "
		 << legumes_object.price() << " + " << caffeine_object.price() << " + " 
		 << Fruits_vegetables_object.price() << " = " << invoice << " LE";
	cout << "\n\n-------------------------------------------------------";
	cout << "\n-------------------------------------------------------\n";
}


int main()
{
	start_function();	
	return 0;
}