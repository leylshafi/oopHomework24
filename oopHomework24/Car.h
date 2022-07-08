#pragma once

class Car
{
	string make;
	string model;
	short year;
public:
	Car(string make, string model, short year)
		:make(make), model(model), year(year) {}

	string& getMake() { return make; }
	string& getModel() { return model; }
	short& getYear() { return year; }

	friend ostream& operator<<(ostream& output, const Car& c);
};

ostream& operator<<(ostream& output, const Car& c)
{
	cout << "Make: " << c.make << endl
		<< "Model: " << c.model << endl
		<< "Year: " << c.year << endl;
	return output;
}