#include "SpamBot.h"
#include "Robot/Robot.h"
#include "Robot/Global.h"

ROBOT_NS_USE_ALL

#define ROBOT_OS_WIN


int main()
{
	Keyboard keyboard;
	keyboard.AutoDelay.Min = 5;
	keyboard.AutoDelay.Max = 10;

	std::string text;
	std::cin >> text;
	std::string textModified;

	for (unsigned int i = 0; i < text.length(); i++) {
		if (std::isupper(text[i])) {
			textModified += "+";
		}
		textModified += text[i];
	}

	Timer::Sleep(5000);
	keyboard.Click(textModified.c_str());

	return 0;
}
