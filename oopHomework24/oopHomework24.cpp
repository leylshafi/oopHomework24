#include <iostream>
#include<map>
#include<vector>
using namespace std;
#include"Penalty.h"
#include"Car.h"

int main()
{
	map<Car*, vector<Penalty>> penalties;



	Car car1("Ford", "Aerostar", 1990);
	Car car2("Honda","Civic",1989);
	Car car3("Mercedes-Benz","E-Class", 1991);
	Car car4("Nissan", "Pathfinder",2003);
	Car car5("Hyundai", "Scoupe", 1992);

	penalties[&car1].push_back(Penalty{ 1,"Qosha xett","07.08.2022",200});
	penalties[&car1].push_back(Penalty{ 2,"Qirmizi ishiq","10.08.2022",50});


	penalties[&car2].push_back(Penalty{ 1,"Qirmizi ishiq","10.05.2022",50});
	penalties[&car2].push_back(Penalty{ 2,"Qosha xett","27.08.2022",200});
	penalties[&car2].push_back(Penalty{ 3,"Parking","10.01.2022",70});


	penalties[&car3].push_back(Penalty{ 1,"Parking","10.01.2021",70 });

	penalties[&car4].push_back(Penalty{ 1,"Parking","27.12.2010",70 });
	penalties[&car4].push_back(Penalty{2,"Qirmizi ishiq","10.11.2021",50 });
	penalties[&car4].push_back(Penalty{ 3,"Speed","10.01.2022",150 });


	for (auto& pair : penalties)
	{
		cout << "=== Car ===" << endl;
		cout << *pair.first<<endl;
		cout << "===== Penalties =====" << endl;
		for (size_t i = 0; i < pair.second.size(); i++)
		{
			cout << pair.second[i] << endl;
		}
	}


}
