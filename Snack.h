#pragma once
#include <iostream>
#include <string>

	class Snack
	{
	private:
		std::string name;
		int kalori;
		int price;


	public:
		Snack(const std::string& name);
		Snack(const std::string& name, int kalori);
		Snack(const std::string& name, int kalori, int price);


		int getPrice() const;
		int getKalori() const;
		std::string getName() const;

		void setPrice(int value);
		void setKalori(int value);
		void setName(char* value);

	};