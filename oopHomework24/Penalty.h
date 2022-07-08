#pragma once
class Penalty
{
	short id;
	string text;
	string dateTime;
	double price;
public:
	Penalty(short id, string text, string dateTime, double price)
		:id(id), text(text), dateTime(dateTime), price(price) {}
	short& getId() { return id; }
	string gettext()const { return text; }
	string getDateTime()const { return dateTime; }
	double getPrice()const { return price; }

	friend ostream& operator<<(ostream& output, const Penalty& p);
};
ostream& operator<<(ostream& output, const Penalty& p)
{
	cout << "Id: " << p.id << endl
		<< "Text: " << p.text << endl
		<< "Date time: " << p.dateTime << endl
		<< "Price: " << p.price << endl;
	return output;
}