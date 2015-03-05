#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstdlib>

std::string intToStr(const int value)
{
	static std::string result;
	std::ostringstream convert;

	convert << value;
	result = convert.str();

	return result;
}

int strToInt(const std::string value)
{
	static int result;
	std::istringstream convert(value);

	if (!(convert >> result))
		result = 0;

	return result;
}

void output(std::string message)
{
    std::cout << message << std::endl;
    return;
}

void outputl(std::string message)
{
    std::cout << message;
    return;
}

std::string upper(std::string message)
{
    std::transform(message.begin(), message.end(), message.begin(), ::toupper);
    return message;
}

int main()
{
    std::string spectre;
    int somanyyears;
    int thisyear = 1848;
    int haunting = 0;
    std::string locale;
    outputl("The year is eighteen forty-eight. A spectre is haunting Europe. But the spectre of what? ");
    std::cin >> spectre;
    output("The spectre of " + spectre + ". All the powers of old Europe have entered into a holy alliance to excorcise this spectre.");
    output("THUS BEGINS THE " + upper(spectre) + " MANIFESTO.");
    outputl("How many years until the " + spectre + " haunts for the first time? ");
    std::cin >> somanyyears;
    while (thisyear <= 1847 + somanyyears)
        {
            output("The year is " + intToStr(thisyear) + ". Nothing happens.");
            thisyear ++;
        }
    if (thisyear == 1848 + somanyyears)
        {
            output("The year is " + intToStr(thisyear) + ". The haunting has begun.");
            thisyear++;
            haunting = 1;
        }
    else
        {

        }
    if (haunting == 1)
        {
            outputl("Where will the first haunting take place? ");
            std::cin >> locale;
            output("The first haunting takes place in " + locale + ". How terrifying.");
            haunting ++;
        }
    else
        {

        }
    return 0;
}
