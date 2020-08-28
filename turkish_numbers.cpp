//www.codewars.com/kata/5ebd53ea50d0680031190b96/train/cpp
#include <string>
#include <map>
std::string getTurkishNumber(unsigned int n)
{
	 std::map<int, std::string> unit = {
		{ 0, "sıfır" },
		{ 1, "bir" },
		{ 2, "iki" },
		{ 3, "üç" },
		{ 4, "dört" },
		{ 5, "beş" },
		{ 6, "altı" },
		{ 7, "yedi" },
		{ 8, "sekiz" },
		{ 9, "dokuz" } };
	std::map<int, std::string> tens = {
		{ 10, "on" },
		{ 20, "yirmi" },
		{ 30, "otuz" },
		{ 40, "kırk" },
		{ 50, "elli" },
		{ 60, "altmış" },
		{ 70, "yetmiş" },
		{ 80, "seksen" },
		{ 90, "doksan" } };
	if (n % 10 == 0 && n != 0)
		return tens.at(n);
	else if ((n / 10) > 0)
		return tens[(n / 10)*10] + " " + unit[n % 10];
	else
		return unit.at(n);
	return "";
}